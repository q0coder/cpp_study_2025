#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//class score;
//class score
//{
//public:
//	int m_score{ 100 };
//	score retu(int x);
//	
//};
//class Std
//{
//	//friend class score;
//	friend score score::retu(int x);
//private:
//	int m_age{18};
//	/*Std* retu()
//	{
//		return this;
//	}*/
//
//};
//score score::retu(int x)
//{
//	Std s;
//	s.m_age;
//}
//
//int main()
//{
//	score S;
//	
//	//S.retu(s.m_age);
//	/*Std* p = s.retu();
//	(*p).m_age = 20;
//	cout << s.m_age << endl;
//	cout << p->m_age << endl;*/
//	return 0;
//}


//class Std
//{
//public:
//	int m_age;
//
//};
//int main()
//{
//	vector<Std>vec(10);
//
//
//
//	return 0;
//


//#include <iostream>
//#include <string>
//
//class Person {
//public:
//    // 主构造函数 —— 所有初始化最终都来到这里
//    Person(const std::string& name, int age, const std::string& city)
//        : name(name), age(age), city(city) 
//{
//        std::cout << "Hello! I'm " << name
//            << ", " << age << " years old, from " << city << ".\n";
//    }
//
//    // 委托构造函数：只给名字，默认年龄18，城市"Unknown"
//    Person(const std::string& name)
//        : Person(name, 18, "Unknown") {
//    }  // 委托！
//
//// 委托构造函数：啥也不给，用默认值
//    Person()
//        : Person("Anonymous", 0, "Earth") {
//    }
//
//private:
//    std::string name;
//    int age;
//    std::string city;
//};
//
//int main() {
//    std::cout << "1. 创建默认人：\n";
//    Person p1;
//
//    std::cout << "\n2. 只给名字：\n";
//    Person p2("Alice");
//
//    std::cout << "\n3. 全参数：\n";
//    Person p3("Bob", 25, "Beijing");
//
//    return 0;
//}



//class x
//{
//public:
//	x(int x)
//	{
//		cout << x << endl;
//	}
//	
//};
//void print(x o)
//{
//
//}
//int main()
//{
//	x obj1 = 10;	
//	print(10);
//
//	return 0;
//}

//
//int main()
//{
//	int a = 0;
//	while (cin >> a)
//		cout << "ok" << endl;
//
//	return 0;
//}



//istream& test(istream& m)
//{
//	auto old_state = cin.rdstate();
//	cin.clear();
//	
//
//
//	
//
//}
//int main()
//{
//	int i = 0;
//
//	test(cin >> i);
//
//
//	return 0;
//}

//class std
//{
//public:
//	 int& m_age;
//	std(int age)
//	{
//		m_age = age;
//
//	}
//};