#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//class Std
//{
//public:
//	int m_age;
//	/*Std& operator++()
//	{
//		m_age++;
//		return *this;
//	}*/
//	/*Std operator++(int)
//	{
//		Std temp = *this;
//		m_age++;
//		return temp;
//	}*/
//
//};
//ostream& operator<<(ostream& cout, Std s)
//{
//	cout << s.m_age;
//	return cout;
//}
//Std operator++(Std s)
//{
//	s.m_age++;
//	return s;
//}
//int operator++(Std s, int)
//{
//	int temp = s.m_age;
//	s.m_age++;
//		return temp;
//}
//int main()
//{
//	Std s;
//	s.m_age = 18;
//	//cout << ++s << endl;
//	//cout << (s++)++ << endl;
//
//	system("pause");
//	return 0;
//}
//class Std
//{
//public:
//	Std(int age)
//	{
//		m_age = new int (age);
//	}
//	
//	~Std()
//	{
//		if (m_age != NULL)
//		{
//			delete(m_age);
//			m_age = NULL;
//		}
//		
//	}
//	Std& operator=(Std &s)
//	{
//		if (m_age != NULL)
//		{
//			delete(m_age);
//			m_age = NULL;
//		}
//		m_age=new int (*s.m_age);
//		 
//		return *this;
//	}
//	 int* m_age;
//};
//ostream& operator<<(ostream &cout, Std s)
//{
//	cout << s.m_age;
//	return cout;
//}
//int main()
//{
//
//	Std s1(18);
//	Std s2(20);
//	s1 = s2;
//	cout << *s1.m_age << endl;
//	cout << *s2.m_age << endl;
//	system("pause");
//	return 0;
//}
#include<string>
//class Std
//{
//public:
//	Std(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//
//	/*bool operator==(Std s)
//	{
//		if (m_name == s.m_name && m_age == s.m_age)
//			return true;
//		else
//			return false;
//	}*/
//	bool operator!=(Std s)
//	{
//		if (m_name == s.m_name && m_age == s.m_age)
//			return false;
//		else
//			return true;
//	}
//	int m_age;
//	string m_name;
//
//};
//int main()
//{
//	Std s1("zhangsan", 18);
//	Std s2("zhangsan", 18);
//	/*if (s1 == s2)
//		cout << "相等" << endl;
//	else
//		cout << "不相等" << endl;*/
//	if (s1 != s2)
//		cout << "不相等" << endl;
//	else
//		cout << "相等" << endl;
//	system("pause");
//	return 0;
//}



//class Std
//{
//public:
//	string m_name;
//	Std(string name)
//	{
//		m_name =name ;
//	}
//	void operator()(string name)
//	{
//		cout << name << endl;
//	}
//};
//int main()
//{
//
//	Std s("zhangsan");
//	s(s.m_name);
//	system("pause");
//	return 0;
//}
//class base
//{
//public:
//	string name = "姓名";
//	string score = "成绩";
//};
//class Std :public base
//{
//public:
//	Std(string name,int score)
//	{
//		m_name = name;
//		m_score = score;
//	}
//	string m_name;
//	int m_score;
//};
//int main()
//{
//
//	Std s("zhangsan",100);
//	cout << s.base::name << ": " << s.m_name << s.base::score << " : " << s.m_score<<endl;
//	system("pause");
//	return 0;
//}

//class calculator
//{
//public:
//	int m_num1;
//	int m_num2;
//	calculator(int num1,int num2)
//	{
//		m_num1 = num1;
//		m_num2 = num2;
//	}
//	int plus(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//	int decrease(int num1, int num2)
//	{
//		return num1 - num2;
//	}
//
//};
//int main()
//{
//
//	calculator s(10, 20);
//	int ret = s.plus(10, 20);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}


//class abstructcalculator
//{
//public:
//	int m_num1;
//	int m_num2;
//	
//	virtual int getresult()
//	{
//		return 0;
//	}
//};
//class addcalculator:public abstructcalculator
//{
//public:
//	int getresult()
//	{
//		return m_num1 + m_num2;
//	}
//};
//class subcalculator :public abstructcalculator
//{
//public:
//
//	int getresult()
//	{
//		return m_num1 - m_num2;
//	}
//};
//class mulcalculator :public abstructcalculator
//{
//public:
//
//	int getresult()
//	{
//		return m_num1 * m_num2;
//	}
//};
//class divcalculator :public abstructcalculator
//{
//public:
//
//	int getresult()
//	{
//		return m_num1 / m_num2;
//	}
//};
//int main()
//{
//	/*addcalculator s;
//	abstructcalculator& p = s;*/
//	/*abstructcalculator* p = new addcalculator;
//	p->m_num1 = 10;
//	p->m_num2 = 20;
//	cout << p->m_num1 << "+" << p->m_num2 << "=" << p->getresult() << endl;
//	delete(p);
//	p = NULL;
//	p = new subcalculator;*/
//	/*s.m_num1 = 10;
//	s.m_num2 = 10;
//	cout << s.m_num1 << "+" << s.m_num2 << "=" << s.getresult() << endl;*/
//
//	system("pause");
//	return 0;
//}


//class base
//{
//public:
//	int m_num1;
//	int m_num2;
//	virtual int test() = 0;
//};
//class Std:public base
//{
//public:
//	virtual int test()
//	{
//		return m_num1 + m_num2;
//	}
//};
//int main()
//
//{
//	/*base* p = new Std;
//	p->m_num1 = 10;
//	p->m_num2 = 20;
//	
//	cout << p->test() <<endl;*/
//	Std s;
//	base& p = s;
//	p.m_num1 = 10;
//	p.m_num2 = 20;
//	cout << p.test() << endl;
//	system("pause");
//	return 0;
//}

//class base
//{
//public:
//
//	virtual void step1() = 0;
//	virtual void step2() = 0;
//	virtual void step3() = 0;
//	virtual void step4() = 0;
//
//};
//class Step_to_coffee:public base
//{
//public:
//	virtual void step1()
//	{
//		cout << "0" << endl;
//	}
//	virtual void step2()
//	{
//		cout << "1" << endl;
//	}
//	virtual void step3()
//	{
//		cout << "2" << endl;
//	}
//	virtual void step4()
//	{
//		cout << "3" << endl;
//	}
//
//};
//class Step_to_tea :public base
//{
//public:
//	virtual void step1()
//	{
//		cout << "4" << endl;
//	}
//	virtual void step2()
//	{
//		cout << "5" << endl;
//	}
//	virtual void step3()
//	{
//		cout << "6" << endl;
//	}
//	virtual void step4()
//	{
//		cout << "7" << endl;
//	}
//};
// 
//int main()
//{
//	base* p = new Step_to_coffee;
//	p->Step_to_coffee::step1();
//	
//	system("pause");
//	return 0;
//}