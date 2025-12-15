#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<initializer_list>
#include<cstdlib>
#include<vector>
#include<cassert>
using namespace std;
//void print(initializer_list<string> it,const int count)
//{
//	for (initializer_list<string>::iterator beg = it.begin(); beg != it.end(); beg++)
//	{
//		cout << *beg << endl;
//	}
//	cout << count << endl;
//}
//int main()
//{
//	//string str = "abcd";
//	print({"abcd","efgh","sz"},3);
//	return 0;
//}

 
//void print(string str,...)
//{
//	cout<<
//}
//int main()
//{
//
//
//	return 0;
//}

//int Sum(initializer_list<int> it)
//{
//	int s = 0;
//	for (initializer_list<int>::iterator beg = it.begin(); beg != it.end(); beg++)
//	{
//		s += *beg;
//
//	}
//	return s;
//}
//int main()
//{
//	int ret = Sum({ 1,2,3 });
//	cout << ret << endl;
//
//
//	return 0;
//}



//int add(const int x,const int y)
//{
//	return { x+y};
//}
//int main()
//{
//	int ret = add(10, 20);
//	cout << ret << endl;
//	if (ret == 0)
//		return EXIT_FAILURE;
//	else
//		return EXIT_SUCCESS;
//
//
//}


//void print(vector<int>&vec, vector<int>::iterator it)
//{
//	if (it != vec.end())
//		cout << *it << endl;
//	else
//	{
//		return;
//	}
//	print(vec, it+1);
//}
//int main()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	auto it = vec.begin();
//	print(vec,it);
//
//
//	return 0;
//}

//typedef int arr[10];
//using arr = int[10];
//arr* count()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	return &arr;
//}
//int main()
//{
//
//
//
//	return 0;
//}



//int (*func(int i))[10]
//{
//
//}
//int main()
//{
//
//
//
//	return 0;
//}


//auto add(int x, int y) -> int(*) [10]
//	{
//
//	}
//int main()
//{
//
//
//
//	return 0;
//}




//int arr[10];
//decltype(arr)* add()
//{
//
//}


//int (&func(int i))[10]
//{
//
//}
//
//int& add(int x, int y)
//{
//
//}


//constexpr int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = add(a, b);
//	assert(ret);
//	cout << ret << endl;
//
//	return 0;
//}



//using func = int(*)(int*, int);
//func print()
//{
//
//}


//int(*func(int))(int*, int)
//{
//
//}
//


//auto func(int) -> int(*)(int*, int)
//{
//
//}



//using f = int(*)(int, int);
//int add(int x,int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int divd(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	vector<f>vec;
//	vec.push_back(add);
//	vec.push_back(sub);
//	vec.push_back(mul);
//	vec.push_back(divd);
//	for (vector<f>::iterator it=vec.begin();it!=vec.end();it++)
//	{
//		cout << (*(*it))(20,10)<<endl;
//	}
//
//
//
//	return 0;
//}


//class Person
//{
//public:
//	string m_name;
//	string m_address;
//	Person() :m_name("zs"), m_address("0x4400") {};
//	string setout_name()const
//	{
//		 return  this->m_name;
//
//	}
//	string setout_address()const
//	{
//		return this->m_address;
//	}
//};
//void print(Person one)
//{
//	cout << one.setout_name() << endl;
//	cout << one.setout_address() << endl;
//}
//int main()
//{
//	Person one;
//	print(one);
//	
//
//
//	return 0;
//}




//
//class Person;
//void print(Person one);
// int main();
//class Person
//{
//public:
//	friend void print(Person one);
//	friend int main();
//private:
//	string m_name;
//	string m_address;
//	Person() :m_name("zs"), m_address("0x4400") {};
// 	 string setout_name()const
//	{
//		return  this->m_name;
//
//	}
//	string setout_address()const
//	{
//		return this->m_address;
//	}
//};
// void print(Person one)
//{
//	cout << one.setout_name() << endl;
//	cout << one.setout_address() << endl;
//}
//int main()
//{
//	 Person one;
//	print(one);
//	return 0;
//}



