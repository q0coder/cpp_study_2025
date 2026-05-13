#include<iostream>
#include<unordered_map>
#include<unordered_set>
#include<queue>
#include<fstream>
#include<string>
using namespace std;

//大数据查重问题

//无内存限制查找所有重复的元素及其重复次数
//int main()
//{
//	
//	const int SIZE = 10000;
//	unordered_map<int, int>mp;
//	int arr[SIZE]{0};
//	for (auto& v : arr)
//	{
//		v = rand();
//	}
//	for (auto& v : arr)
//	{
//		mp[v]++;
//	}
//	for (auto& pair : mp)
//	{
//		if(pair.second>1)
//		cout << pair.first << " : " << pair.second << endl;
//	}
//
//}


////优先级队列解决大数据Top k问题
//求最小的前10个
//int main()
//{
//	const int SIZE = 10000;
//	priority_queue<int,vector<int>,greater<int>>que;
//		int arr[SIZE]{0};
//		for (auto& v : arr)
//		{
//			v = rand();
//		}
//		for (int i=0;i<10;++i)
//		{
//			que.push(arr[i]);
//		}
//		for (int i = 10; i < SIZE; ++i)
//		{
//			if (arr[i] < que.top())
//			{
//				que.pop();
//				que.push(arr[i]);
//			}
//		}
//		while(!que.empty())
//		{
//			cout << que.top()<<endl;
//			que.pop();
//		}
//		
//
//}
//
////快排分割解决大数据Top k问题
//查找最大的前5个元素


//int Partaion(int arr[], int begin, int end)
//{
//	int i = begin;
//	int j = end;
//	int val = arr[i];
//	while (i < j)
//	{
//		while (i < j && arr[j] < val)
//			j--;
//		if (i < j)
//		{
//			arr[i] = arr[j];
//			i++;
//		}
//		while (i < j && arr[i] > val)
//			i++;
//		if (i < j)
//		{
//			arr[j] = arr[i];
//			j--;
//		}
//	}
//	arr[i] = val;
//	return i;
//}
//
//void SelectTopk(int arr[], int begin, int end, int k)
//{
//	int pos = Partaion(arr, begin, end);
//	if (pos == k - 1)
//	{
//		return;
//	}
//	else if (pos > k - 1)
//	{
//		SelectTopk(arr, begin, pos - 1, k);
//	}
//	else
//	{
//		SelectTopk(arr, pos + 1, end, k);
//	}
//}
////int main()
////{
////	const int SIZE = 10000;
////	int k = 5;
////	
////	int arr[SIZE]{ 0 };
////	for (auto& v : arr)
////	{
////		v = rand();
////	}
////	SelectTopk(arr, 0, SIZE, k);
////	
////	for (int i = 0; i<5; ++i)
////	{
////		cout << arr[i]<<endl;
////	}
////
////}
//
//查找重复次数最多的前5个元素
//int main()
//{
//	const int SIZE = 1000;
//	unordered_map<int, int>mp;
//	priority_queue<pair<int, int>,vector<pair<int,int>>,less<pair<int,int>>>que;
//	int k = 5;
//
//	int arr[SIZE]{ 0 };
//	for (auto& v : arr)
//	{
//		v = rand()%100+1;
//	}
//	for (auto& v : arr)
//	{
//		mp[v]++;
//	}
//	auto it = mp.begin();
//	for (int i=0;i<5;++i,++it)
//	{
//		que.push({it->second,it->first});
//	}
//	for (int i = 5; i < mp.size(); ++i, ++it)
//	{
//		if (it->second > que.top().first)
//		{
//			que.pop();
//			que.push({it->second,it->first});
//		}
//	}
//	while (!que.empty())
//	{
//		cout << que.top().second << " : " << que.top().first << endl;
//		que.pop();
//	}
//}


//
int main()
{
	//生成一个大文件
	const int SIZE = 10000;
	int arr[SIZE]{ 0 };
	for (auto& v : arr)
	{
		v = rand();
	}
	ofstream outFile("data.dat", ios::out | ios::binary);
	if (!outFile.is_open())
	{
		throw "文件打开失败";
	}
	outFile.write(reinterpret_cast<const char*>(&arr), sizeof(arr));
	outFile.close();


	ifstream inFile("data.dat", ios::in | ios::binary);
	if (!inFile.is_open())
	{
		throw "文件打开失败";
	}
	const int FILE_NUM = 11;

	//定义一个小文件数组
	vector<fstream>File;
	int data = 0;

	//生成并打开11个小文件
	File.resize(FILE_NUM);
	for (int i = 0; i < FILE_NUM; ++i)
	{
		//给小文件命名
		string filename = "data" + to_string(i) + ".dat";
		File[i].open(filename, ios::out | ios::in | ios::binary);
		if (!File[i].is_open())
			throw "文件打开失败";

	}
	//使用哈希函数将大文件的数据写入对应的小文件中
	while (inFile.read(reinterpret_cast<char*>(&data), sizeof(data)))
	{
		int index = data % FILE_NUM;
		File[index].write(reinterpret_cast<char*>(&data), sizeof(data));

	}
	inFile.close();

	unordered_map<int, int>map;
	priority_queue<pair<int, int>, vector<pair<int, int>>, less<pair<int, int>>>que;
	//遍历每一个小文件
	for (int i = 0; i < FILE_NUM; ++i)
	{
		File[i].seekg(0, ios::beg);
		File[i].clear();
		//为了最后和并需要，每次遍历一个小文件需要将map清空
		map.clear();
		while (File[i].read(reinterpret_cast<char*>(&data), sizeof(data)))
		{
			++map[data];
		}
		auto it = map.begin();
		//只有当队列不为空时，才需要做初始添加
		if (que.empty())
		{
			for (int i = 0; i < 10; ++i, ++it)
			{
				que.push({ it->second,it->first });
			}
		}

		for (int i = 10; i < map.size(); ++i, ++it)

		{
			if (it->second > que.top().first)
			{
				que.pop();
				que.push({ it->second,it->first });
			}
		}


	}
	while (!que.empty())
	{
		cout << que.top().second << " : " << que.top().first << endl;
		que.pop();
	}


	for (int i = 0; i < FILE_NUM; ++i)
	{

		File[i].close();

	}

}