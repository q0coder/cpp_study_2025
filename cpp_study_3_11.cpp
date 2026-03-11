#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


//class Std
//{
//public:
//	int m_age;
//	int* m_Height;
//public:
//	Std(int age,int Height)
//	{
//		m_age = age;
//		m_Height=new int(Height);
//	}
//	Std(const Std& s)
//	{
//		m_age = s.m_age;
//		m_Height = new int(*s.m_Height);
//	}
//	~Std()
//	{
//		if (m_Height != nullptr)
//		{
//			delete m_Height;
//			m_Height = nullptr;
//		}
//	}
//};
//
//int main()
//{
//	Std s1(18, 160);
//	cout << "s1:age:" << s1.m_age <<"s1:Height:"<<*s1.m_Height<< endl;
//	Std s2(s1);
//	cout << "s2:age:" << s2.m_age << "s2:Height:" << *s2.m_Height << endl;
//
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int* p1 = arr;
//	int* p2 = &arr[1];
//	cout << p2 - p1 << endl;
//
//
//}