#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//class Std
//{
//public:
//	int m_age;
//	char m_name;
//	static int b;
//	Std (int age)
//	{
//		this->m_age = age;
//	}
//	Std& add_age(Std p)
//	{
//		this->m_age += p.m_age;
//		return *this;
//	}
//};
//int main()
//{
//	Std s(10);
//	Std s1(10);
//	Std p=s.add_age(s1).add_age(s1);
//	cout << s.m_age << endl;
//	//cout << sizeof(Std) << endl;
//	system("pause");
//	return 0;
//}
//class Std
//{
//public:
//	void test1()
//	{
//		cout << "1" << endl;
//	}
//	void test2()
//	{
//		if (this == NULL)
//			return ;
//		cout << "2" << m_age << endl;
//	}
//	int m_age;
//};
//void test()
//{
//	Std* p=NULL;
//	p->test1();
//	p->test2();
//}
//int main()
//{
//	test();
//	return 0;
//}

//class Std
//{
//public:
//	void test()const
//	{
//		this-> m_age = 10;
//	}
//	void test1()
//	{
//
//	}
//	mutable int m_age;
//	char m_name;
//};
//
//int main()
//{
//	const Std s;
//	s.m_age = 10;
//	//s.test1();
//	//s.m_name = "abc";
//	system("pause");
//	return 0;
//}
//class Std
//{
//friend void test(Std s);
//
//public:
//	string m_name;
//	Std()
//	{
//		m_name = "qzy";
//		score = 100;
//	}
//
//private:
//	int score;
//	
//};
//void test(Std s)
//{
//	cout << s.m_name << endl;
//	cout << s.score << endl;
//}
//int main()
//{
//	Std s;
//	test(s);
//
//	system("pause");
//	return 0;
//}


//class Std
//{
//public:
//	int m_a;
//	int m_b;
//	/*Std()
//	{
//
//	}*/
//	Std(int x, int y)
//	{
//		this->m_a = x;
//		this->m_b = y;
//	}
//	Std operator+(Std s2)
//	{
//		Std s3(10, 20);
//
//		s3.m_a = this->m_a + s2.m_a;
//		s3.m_b = this->m_b + s2.m_b;
//		return s3;
//	}
//
//};
////Std operator+(Std s1, Std s2)
////{
////	Std s3(10,20);
////
////	s3.m_a = s1.m_a + s2.m_a;
////	s3.m_b = s1.m_b + s2.m_b;
////	return s3;
////}
//int main() {
//	Std s1(10, 20);
//	Std s2(30, 40);
//
//	Std s3 = s1 + s2;
//	//Std s3 = operator+(s1, s2);
//	cout << s3.m_a << " " << s3.m_b << endl;
//	system("pause");
//	return 0;
//}
//#include<string>
//class Std
//{
//public:
//	Std(string name,int score)
//	{
//		m_name = name;
//		m_score = score;
//	}
//	string m_name;
//	int m_score;
//	
//};
//ostream& operator<<(ostream &cout ,Std s1)
//{
//	cout << s1.m_name << " " << s1.m_score;
//	return cout;
//}
//int main()
//{
//	Std s1("qzy",100);
//	cout << s1 << endl ;
//	system("pause");
//	return 0;
//}