#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//template <typename T>
//auto add(T x,T y)
//{
//	return x + y;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	char a = 'a';
//	char b = 'b';
//	//cout << add<int>(a, b) << endl;
//	//cout << add(a, b);
//	//cout << add<int>(a, b);
//	//add(a, b);
//	//add<>(a, b);
//	add(a, b);
//}
//#include<string>
//template <typename T>
//int cam(T a, T b)
//{
//	if (a == b)
//	{
//		return 0;
//	}
//	else
//	{
//		return -1;
//	}
//}
//
//class Std
//{
//public:
//	string m_name;
//	int m_age;
//	Std(string name, int age)
//	{
//		this->m_age = age;
//		this->m_name = name;
//	}
//	/*bool operator==(Std s2)
//	{
//		if (this->m_age == s2.m_age && this->m_name == s2.m_name)
//			return true;
//		else
//			return false;
//	}*/
//};
//template<> int cam(Std s1, Std s2)
//{
//	if (s1.m_age == s2.m_age && s1.m_name == s2.m_name)
//		return 0;
//	else
//		return -1;
//}
////bool operator==(Std s1, Std s2)
////{
////	if (s1.m_age==s2.m_age&&s1.m_name==s2.m_name )
////		return true;
////	else
////		return false;
////}
//int main()
//{
//	Std s1("zs", 18);
//	Std s2("zs", 18);
//	
//	int ret = cam(s1, s2);
//	if (ret == 0)
//		cout << "==" << endl;
//	else
//		cout << "!=" << endl;
//	return 0;
//}

//template<class S=int,class T>
//class Std
//{
//public:
//	//S m_age;
//	S m_score;
//	T m_name;
//	Std( S score,T name)
//	{
//		//this->m_age = age;
//		this->m_score = score;
//		this->m_name = name;
//	}
//};
////class Std
////{
////public:
////	int m_age;
////	int m_score;
////
////};
//int main()
//{
//	//Std s1("zs", 18);
//	Std<int,string>s1( 100,"zs");
//	cout << s1.m_name << endl;
//
//}
//#include<vector>
//int main()
//{
//	vector<int>vec = { 1,2,3 };
//	cout << typeid(vec.begin()).name() << endl;
//	int* p = &vec[0];
//	cout << typeid(p).name() << endl;
//}

//class Std1
//{
//public:
//	Std1()
//	{
//		cout << "Std1" << endl;
//	}
//};
//class Std2
//{
//public:
//	Std2()
//	{
//		cout << "Std2" << endl;
//	}
//};
//template <class T>
//class test
//{
//public:
//	T s;
//	void test1()
//	{
//		s.Std1;
//
//	}
//
//	void test2()
//	{
//		s.Std2;
//
//	}
//};
//int main()
//{
//	test<Std1> t1;
//	t1.test1();
//	t1.test2();
//	return 0;
//}

//template<class T1,class T2>
//class Std
//{
//public:
//	T1 m_name;
//	T2 m_age;
//	Std(T1 name, T2 age)
//	{
//		this->m_age = age;
//		this->m_name = name;
//	}
//
//};
////template<class T3,class T4>
//template <class T3>
//void show(T3 &s1)
//{
//	cout << s1.m_age << " " << s1.m_name << endl;
//}
//int main()
//{
//	Std<string, int>s1("zs", 18);
//	show(s1);
//	return 0;
//}

//template <class T>
//class base
//{
//public:
//	T m;
//	int a;
//};
//template <class T1,class T2>
//class Std :public base<T2>
//{
//public:
//	T1 b;
//};
//int main()
//{
//	Std<int, char>;
//	
//	return 0;
//}

//template <class typeName,class typeAge>
//class Std
//{
//public:
//	typeName m_name;
//	typeAge m-age;
//	Std(typeName name, typeAge age);
//	void show();
//};
//template <class typeName, class typeAge>
//Std<typeName, typeAge>::Std(typeName name, typeAge age)
//{
//
//}
//template <class typeName, class typeAge>
//void Std<typeName, typeAge>::show()
//{
//
//}