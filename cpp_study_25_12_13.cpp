#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//int main()
//{
//	int v1 = 3;
//	int v2 = 7;
//	std::cout << "The sum of"
//		<< v1 << "+" << v2
//		<< "is" << v1 + v2 << std::endl;
//	return 0;
//}

//int main()
//{
//	std::cout << "/*";
//	std::cout << "*/";
//	//std::cout << /*"*/"*/;
//
//
//
//	std::cout << /*"*/"/*"/*"*/;
//
//	return 0;
//}

//int main()
//{
//	int value = 0;
//	int sum = 0;
//	while (std::cin >> value)
//		sum += value;
//	std::cout << sum <<std:: endl;
//	return 0;
//}

//class Std
//{
//public:
//	std::string m_name;
//	int m_age;
//};
//int main()
//{
//	Std s;
//	//std::cin >> s;
//}
/////int i = 42;
//int main()
//{/*
//	int i = 10;
//	unsigned char u = 10;
//	int i2 = 42;
//	unsigned char u2 = 42;
//	std::cout << u - u2 << std::endl;
//	std::cout << u2 - u <<std:: endl;
//	std::cout << i2 - i << std::endl;
//	std::cout << i - i2 << std::endl;
//	std::cout << i - u << std::endl;
//	std::cout << u - i << std::endl;*/
//	int i = 100;
//
//	int j = i;
//	std::cout << j << std::endl;
//}

//
//int main()
//{
	/*int i = 100,sum=0;
	for (int i = 0; i !=10; i++)
	{
		sum += i;
	}
	std::cout << i << " " << sum << std::endl;*/
	//int i, & ri = i;
	//i = 5;
	////ri = 10;
	//std::cout << i << " " << ri << std::endl;
	/*int i = 42;
	int* p = &i;
	*p = *p * *p;*/
	/*const int i = 10;
	int a = 20;
	 i = a;*/
	//int* p = 0;
	//int null = 0;
	//int* p1 = nullptr;
#include<cctype>
#include<string>
//int main()
//{
//	string str = "1bcdef";
//	/*string str2;
//	while (cin >> str2)
//	{
//		cout << str2 << endl;;
//	}*/
//	/*while (getline(cin,str2))
//	{
//		cout << str2 << endl;;
//	}*/
//	//getline();
//	/*int count = 0;
//	for (char ch : str)
//	{
//		if (ispunct(ch))
//			count++;
//	}
//	cout << count << endl;*/
//	/*for (auto &ch:str)
//	{
//		if (ch >= 'a'&&ch<='z')
//			ch -= 32;
//	}*/
//	/*for (auto &ch : str)
//	{
//		ch = toupper(ch);
//	}*/
//
//	//cout << str << endl;
//
//	return 0;
//}


//int main()
//{
//	string str = "0123456789abcdef";
//	string str0;
//	int n = 0;
//	
//	while (cin >> n)
//	{
//		if (n<str.size())
//		{
//			str0 += str[n];
//		}
//
//	}
//	cout << str0 << endl;
//
//	return 0;
//}


//int main()
//{
//	string str = "ab.cd;ef";
//	for (size_t i = 0; i < str.size(); i++)
//	{
//		if (ispunct(str[i]))
//			str.erase(i,1);
//
//	}
//	cout << str << endl;
//	return 0;
//}

//int main()
//{
//	const string str = "abcd";
//	for (auto& ch : str)
//	{
//		ch = 'c';
//	}
//	return 0;
//}



#include<vector>
#include<algorithm>
//void print(int e1)
//{
//	cout << e1 << endl;
//}
//int main()
//{
//	vector<int>vec;
//	int n = 0;
//	while (cin >> n)
//	{
//		vec.push_back(n);
//	}
//	for (size_t i = 0; i < vec.size(); i += 2)
//	{
//		cout << vec[i] + vec[vec.size()-1-i] << " ";
//	}
//	cout << endl;
//	//for_each(vec.begin(), vec.end(), print);
//	/*for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	for (auto n : vec)
//	{
//		cout << n << endl;
//	}*/
//	return 0;
//}


//int main()
//{
//	vector<int>vec;
//	for (size_t i = 1; i <= 10; i++)
//	{
//		vec.push_back(i);
//	}
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		*it *= 2;
//		cout << *it << " ";
//
//	}
//	/*for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//	}*/
//	cout << endl;
//	return 0;
//}


//int main()
//{
//	vector<int>vec;
//	for (size_t i = 1; i <= 10; i++)
//	{
//		vec.push_back(i);
//	}
//	int k =17;
//	int left = 0;
//	int right = vec.size() - 1;
//	int mid = (left + right) / 2;
//	while (left<=right)
//	{
//		
//		if (vec[mid] < k)
//		{
//			left = mid + 1;
//			mid = (left + right) / 2;
//
//		}
//		else if (vec[mid] == k)
//		{
//			cout << "zdl";
//			break;
//		}
//		else
//		{
//			right = mid - 1;
//			mid = (left + right) / 2;
//
//		}
//	}
//
//	return 0;
//}



//int main()
//{
//	vector<int>vec;
//	for (size_t i = 1; i <= 10; i++)
//	{
//		vec.push_back(i);
//	}
//	int k = 7;
//	vector<int>::iterator beg = vec.begin();
//	vector<int>::iterator end = vec.end();
//
//	auto mid = beg+(end-beg) / 2;
//	while (mid != end&&*mid!=k)
//	{
//		if (k < *mid)
//		{
//			end = mid;
//		}
//		else
//			beg = mid + 1;
//		mid = beg + (end - beg) / 2;
//	}
//	return 0;
//}