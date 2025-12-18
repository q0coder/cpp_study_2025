#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;
//int main()
//{
//	
//	ofstream ofs("test.txt");
//	ofs << "abcd";
//	string str;
//	
//	ofs.close();
//	ifstream ifs("test.txt");
//	if (!ifs)
//		cout << "dksb" << endl;
//	while (getline(ifs, str))
//		cout << str << endl;
//	ifs.close();
//	return 0;
//}


//void read(vector<string>&vec,string c)
//{
//	ifstream ifs("test.txt");
//	while (getline(ifs, c))
//	{
//		vec.push_back(c);
//	}
//
//}
//int main()
//{
//	vector<string>vec;
//	string c;
//	read(vec, c);
//	cout << vec.at(1) << endl;
//
//	return 0;
//}
//
//int main()
//{
//	ifstream ifs;
//	ifs.open("test.txt",ifstream::in);
//
//
//	return 0;
//}

//void read(vector<string>& vec, string c)
//{
//	ifstream ifs("test.txt");
//	while (ifs>>c)
//	{
//		vec.push_back(c);
//	}
//
//}
//int main()
//{
//	vector<string>vec;
//	string c;
//	read(vec, c);
//	cout << vec.at(0) << endl;
//
//	return 0;
//}



//int main()
//{
//	istringstream iss("test.txt  abcd");
//	
//	string c;
//	while (iss >> c)
//		cout << c << endl;
//	
//
//	return  0;
//}


//void read(vector<string>& vec, string c)
//{
//	ifstream ifs("test.txt");
//	while (ifs >> c)
//	{
//		vec.push_back(c);
//	}
//	string str;
//	string s;
//	while (getline(ifs, str)
//	{
//		istringstream iss(str);
//		while (iss >> s)
//			cout << s << endl;
//	}
//
//}
//int main()
//{
//	vector<string>vec;
//	istringstream iss;
//
//	string c;
//	read(vec, c);
//
//
//
//	return 0;
//}



//int main()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	vector<int>vec2;
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//
//
//
//	return 0;
//}


//bool find(vector<int>vec,int k)
//{
//	for (vector<int>::iterator beg = vec.begin(); beg != vec.end(); beg++)
//	{
//		if (*beg == k)
//			return true;
//	}
//	return false;
//}
//int main()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	int k = 5;
//	bool ret=find(vec, k);
//	if (ret)
//		cout << "zdl" << endl;
//	else
//		cout << "mzd" << endl;
//
//
//	return 0;
//}


//int main()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	vector<int>::const_iterator beg = vec.begin();
//	cout << *beg << endl;
//
//
//	return 0;
//}

//int main()
//{
//	vector<int>vec;
//	string str = "abcd";
//
//	vector<int>vec2(str.begin(),str.end());
//
//	
//
//
//	return 0;
//}

//int main()
//{
//	vector<int>vec={ 123 };
//
//
//
//	return 0;
//}

#include<array>
#include<list>
//int main()
//{
//	//vector<int>vec;
//	//
//	//vector<string>vec2;
//	//string str = "abcd";
//	//array<int, 10> arr;
//	//vec.assign(10, 6);
//	////vec2.assign(str.begin(), str.end());
//	//cout << vec2.at(0)<<endl;
//	////cout << vec.at(0);
//	/*list<char*>lst;
//	vector<string>vec;
//	vec.assign(lst.begin(), lst.end());*/
//	/*vector<int>vec1;
//	vector<int>vec2;
//	vec1.assign({1});*/
//
//	return 0;
//}


//int main()
//{
//	list<int>lst{1,2};
//	vector<int>vec1;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec1.push_back(i);
//	}
//	vector<int>vec2;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec2.push_back(i);
//	}
//	if (vec1 == vec2)
//		cout << "==" << endl;
//	else
//		cout << "!=" << endl;
//	for (int i : lst)
//		cout << i << endl;
//
//	return 0;
//}



//int main()
//{
//	vector<int>vec;
//	//int arr[] = { 1,2,3,4,5 };
//	
//	/*vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//	vec.push_back(4);*/
//	//vec.erase(vec.begin(),vec.end());
//	//vec.clear();
//	//vector<int>::iterator beg = vec.begin(), end = vec.end();
//
//	//vec.insert(vec.begin(), vec.begin(), vec.end());
//	//list<int>lst;
//	
//	//lst.insert(lst.begin(), 'c');
//	//lst.emplace(lst.begin(), 'c');
//	/*int word;
//	auto beg = lst.begin();
//	while (cin >> word)
//		beg=lst.insert(beg, word);*/
//
//	/*lst.push_back(1);
//	lst.push_back(2);
//	lst.push_back(3);
//	lst.push_back(4);
//	lst.push_back(5);
//	lst.insert(lst.begin(), vec.end(), vec.end());*/
//	//lst.insert(lst.begin(), lst.begin(), lst.end());
//	/*vec.emplace_back(1);
//	vec.insert(vec.begin(), 2);
//	vec.emplace(vec.begin(), 3);
//	vec.insert(vec.begin(), 3, 0);
//	lst.push_back(1);
//	lst.push_front(2);
//	vec.insert(vec.begin(), lst.begin(), lst.end());
//	vec.insert(vec.begin(), { 1,2,3 });*/
//	for (vector<int>::iterator beg = vec.begin(); beg != vec.end(); beg++)
//	{
//		cout << *beg << endl;
//	}
//	/*for (list<int>::iterator beg = lst.begin(); beg != lst.end(); beg++)
//	{
//		cout << *beg << endl;
//	}*/
//
//	return 0;
//}


//#include<forward_list>
//int main()
//{
//	forward_list<int>flst;
//	flst.push_front(5);
//	flst.push_front(4);
//	flst.push_front(3);
//	flst.push_front(2);
//	flst.push_front(1);
//	//flst.erase_after(flst.begin());
//	//flst.erase_after(flst.begin(), flst.end());
//	flst.clear();
//	for (forward_list<int>::iterator beg = flst.begin(); beg != flst.end(); beg++)
//	{
//		cout << *beg << endl;
//	}
//	return 0;
//}


//int main()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	for (vector<int>::iterator beg = vec.begin(); beg != vec.end(); )
//	{
//		
//		if (*beg % 2)
//		{
//			beg = vec.insert(beg, *beg);
//			beg += 2;
//		}
//		else
//		{
//			beg=vec.erase(beg);
//			
//
//		}
//	}
//	for (vector<int>::iterator beg = vec.begin(); beg != vec.end(); beg++)
//	{
//		cout << *beg << endl;
//	}
//	return 0;
//}


//int main()
//{
//	vector<int>vec;
//	/*for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	cout << vec.size()<<endl;
//	vec.reserve(5);
//	vec.shrink_to_fit();
//	cout << vec.capacity() << endl;*/
//	/*vec.reserve(1025);
//	cout << vec.capacity() << endl;*/
//
//}


//int main()
//{
//	vector<char>vec{'a', 'b', 'c', 'd', 'e', 'f'};
//	char arr[10] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	string str(arr,4);
//
//	/*string str2=str.substr(0, 4);
//	cout << str2 << endl;*/
//
//	return 0;
//}



//int main()
//{
//	string str = "ab";
//	str.append("cd");
//	cout << str << endl;
//	str.replace(str.begin(), str.end(), "6");
//	cout << str << endl;
//
//
//	return 0;
//}