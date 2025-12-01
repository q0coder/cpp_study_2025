#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[10] = { "abcd,e.gh" };
//	char ch[10] = { ".,"};
//	char *p=strtok(arr, ch);
//	printf("%s", p);
//	return 0;
//}
//#include<iostream>
//using namespace std;
//double PI = 3.14;
//class circle
//{
//	//访问权限
//public:
//	//属性
//	int r;
//	//行为
//	double calculate()
//	{
//		return 2 * r * PI;
//	}
//
//};
//
//int main()
//{
//	circle s;
//	s.r = 10;
//	cout << s.calculate() << endl;
//	system("pause");
//	return 0;
//}
//#include<iostream>
//#include<string>
//using namespace std;
//class Std
//{
//public:
//	string name;
//	//char name[20];
//	int num;
//	void output()
//	{
//		cout << name << " " << num << endl;
//	}
//	void setname()
//	{
//		cin >> name;
//		cin >> num;
//	}
//};
//int main()
//{
//	Std s;
//	//cin >> s.name;
//	//cin >> s.num;
//	//cout << s.name << " " << s.num << endl;
//	s.setname();
//	s.output();
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//class Std
//{
//public:
//	void setname()
//	{
//		cin >> name;
//	}
//	void getname()
//	{
//		cout << name << endl;
//	}
//public:
//	int getsocre()
//	{
//		socre = 100;
//
//		return socre;
//	}
//public:
//	void setnum()
//	{
//		cin >> num;
//	}
//private:
//	string name;
//	int socre;
//	int num;
//};
//int main()
//{
//	Std s;
//	
//	s.setname();
//	s.getname();
//	cout << s.getsocre() << endl;
//	s.setnum();
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class Cube
//{
//public:
//	int m_L;
//	int m_H;
//	int m_W;
//	int calculate_c()
//	{
//		return 2 * m_L * m_W + 2 * m_H * m_L + 2 * m_H * m_W;
//	}
//	int calculate_s()
//	{
//		return m_L * m_H * m_W;
//	}
//	bool judge( Cube c2)
//	{
//		if (m_H == c2.m_H && m_L == c2.m_L && m_W == c2.m_W)
//			return true;
//		else
//			return false;
//	}
//};
////bool judge(Cube c1, Cube c2)
////{
////	if (c1.m_H==c2.m_H&&c1.m_L==c2.m_L&&c1.m_W==c2.m_W)
////		return 1;
////	else
////		return 0;
////}
//
//int main()
//{
//	Cube c1;
//	Cube c2;
//	cin >> c1.m_H >> c1.m_L >> c1.m_W;
//	cin >> c2.m_H >> c2.m_L >> c2.m_W;
//	cout << c1.calculate_c() << " " << c1.calculate_s() << endl;
//	cout << c2.calculate_c() << " " << c2.calculate_s() << endl;
//	bool ch = c1.judge( c2);
//	cout << ch << endl;
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class circle
//{
//public:
//	int d;
//	int r;
//	int judge()
//	{
//		if (d < r)
//			return 1;
//		else if (d = r)
//			return 2;
//		else
//			return 3;
//	}
//};
//int main()
//{
//	circle c;
//	
//	cin >> c.d >> c.r;
//	
//	int ret = c.judge();
//
//	system("pause");
//	return 0;
//}

//#include<iostream>
//using namespace std;
//class Test
//{
//public:
//	Test()
//	{
//		cout << "test" << endl;
//	}
//	~Test()
//	{
//		cout << "~test" << endl;
//	}
//	Test(int a)
//	{ 
//		age = a;
//		cout << "test" << endl;
//	}
//	Test(const Test& p)
//	{
//		age = p.age;
//	}
//	int age;
//};
////void test()
////{
////	Test p;
////
////}
//int main()
//{	//括号法
//	//Test t1;
//	//Test t2(100);
//	//Test t3(t2);
//	//注意：默认构造函数不要带()，编译器会认为是函数声明
//	//显示法
//	//Test t1 = Test(10);Test-匿名对象（仅在当前行有效，后销毁）
//	//Test t2 = Test(t1);
//	//test();
//	//注意：不要使用拷贝构造函数初始化匿名对象，编译器认为：Test (t3)==Test t3
//	//隐式转换法：
//	//Test t1=10   ==Test (10)
//	//Test t2=t3;
//	system("pause");
//	return 0;
//}
//
//


#include<iostream>
using namespace std;
class S
{
public:
	S()
	{
		cout << "1" << endl;
	}
	S(int age)
	{
		m_age = age;
		cout << "1" << endl;
	}
	S(const S &p)
	{
		cout << "1" << endl;
		m_age = p.m_age;
	}
	~S()
	{
		cout << "0" << endl;
	}
	int m_age;
};
int main()
{
	S s1(10);
	S s2(s1);
	cout << s2.m_age << endl;

	system("pause");
	return 0;
}