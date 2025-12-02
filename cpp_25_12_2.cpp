#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//class Std
//{
//public:
//	int num;
//	/*Std()
//	{
//		cout << "无参构造函数" << endl;
//	}*/
//	/*Std(int num0)
//	{
//		cout << "有参构造函数" << endl;
//		num = num0;
//	}*/
//	Std(const Std& p)
//	{
//		cout << "拷贝构造函数" << endl;
//		num = p.num;
//	}
//	~Std()
//	{
//		cout << "析构函数" << endl;
//	}
//	
//};
//void test()
//{
//	//Std s;
//	//Std s3(10);
//	Std s1(s);
//	s.num = 20;
//	cout << s.num << endl;
//}
//
//int main()
//{
//
//	test();
//	
//	system("pause");
//	return 0;
//}


//#include<iostream>
//using namespace std;
//class Std
//{
//public:
//	int num;
//	int* Height;
//	Std():A(10),B(20)
//	{
//		cout << "无参构造函数" << endl;
//	}
//	/*Std(int num0,int height)
//	{
//		cout << "有参构造函数" << endl;*/
//		/*num = num0;
//		Height = new int(height);*/
//	}
//	/*Std(const Std& p)
//	{
//		cout << "拷贝构造函数" << endl;
//		num = p.num;
//	}*/
//	~Std()
//	{
//		/*if (Height != NULL)
//		{
//			delete Height;
//			Height = NULL;
//		}*/
//		cout << "析构函数" << endl;
//		
//	}
//	int A;
//	int B;
//};
//void test()
//{
//	Std s;
//	cout << s.A << " " << s.B;
//	//Std s(10,160);
//	//Std s1(s);
//	//s.num = 20;
//	//cout << s.num << " " << *s.Height << endl;
//}
//
//int main()
//{
//
//	test();
//	
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//class P_name
//{public:
//	P_name(string p)
//	{
//		pname = p;
//	}
//	string pname;
//};
//class Std
//{public:
//	Std(string s_name,string p_name ):name(s_name),Pname(p_name)
//	{
//
//	}
//	string name;
//	P_name Pname;
//};
//int main()
//{
//
//	Std S("znhangsan", "hor");
//	cout << S.name << " "<< S.Pname.pname << endl;
//	system("pause");
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//class Std
//{
//public:
//	static string name;
//};
//string Std::name="zhangsan";
//int main()
//{
//	Std S;
//	cout << S.name << endl;
//	cout << Std::name << endl;
//	Std S1;
//	S1.name = "lisi";
//	cout << S.name << endl;
//	system("pause");
//	return 0;
//}