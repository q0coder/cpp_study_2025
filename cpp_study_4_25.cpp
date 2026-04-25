#include<iostream>
using namespace std;

//class Father
//
//{
//public:
//	Father(int data = 10)
//		:ma(data)
//	{
//		cout << "Father()" << endl;
//	}
//	virtual ~Father()
//	{
//		cout << "~Father()" << endl;
//	}
//	virtual void show()
//	{
//		cout << "Father::show" << endl;
//	}
//	virtual void show(int)
//	{
//		cout << "Father::show(int)" << endl;
//	}
//private:
//	int ma;
//};
//
//class Son :public Father
//{
//public:
//	Son(int data = 10, int* p = new int(10))
//		:mb(data)
//		, mptr(p)
//	{
//		cout << "Son()" << endl;
//	}
//	~Son()
//	{
//		cout << "~Son()" << endl;
//		delete mptr;
//		mptr = nullptr;
//	}
//	virtual void show()
//	{
//		cout << "Son::show" << endl;
//	}
//private:
//	int mb;
//	int* mptr;
//};
//
//int main()
//{
//	Father f;
//	Son s;
//	f.show();
//	s.show();
//	Father* pf1 = &f;
//	pf1->show();
//	Father* pf2 = &s;
//		pf2->show();
//
//	/*Father* ps = new Son;
//	ps->show();
//	delete ps;*/
//
//
//
//}

//bool compare(int a, int b)
//{
//	return a < b;
//}
//
//bool compare(double a, double b)
//{
//	return a < b;
//}



//int main()
//{
//	string name;
//
//}

//#include<string>
//class Animals
//{
//public:
//	Animals(string name)
//		:name(name)
//	{ }
//	virtual void bark()  = 0;
//private:
//	string name;
//
//};
//
//class Cat :public Animals
//{
//public:
//
//	Cat(string name)
//		:Animals(name)
//	{ }
//	void bark()
//	{
//		cout << "miao miao!" << endl;
//	}
//};
//class Dog :public Animals
//{
//public:
//
//	Dog(string name)
//		:Animals(name)
//	{
//	}
//	void bark()
//	{
//		cout << "Wang Wang!" << endl;
//	}
//};
//
//
//void bark(Animals& animal)
//{
//	animal.bark();
//}
//
//int main()
//{
//	Animals* p1 = new Cat("¼Ó·ÆÃ¨");
//	Animals* p2 = new Dog("¶þ¹þ");
//
//	int* p11 = (int*)p1;
//	int* p22 = (int*)p2;
//	int tmp = p11[0];
//	p11[0] = p22[0];
//	p22[0] = tmp;
//
//	p1->bark();
//	p2->bark();
//
//	delete p1;
//	delete p2;
//}


class Base
{
public:
	virtual void show(int i = 10)
	{
		cout << "call Base :: show i:" << i << endl;
	}
};
class Derive : public Base
{
public:
	void show(int i = 20)
	{
		cout << "call Derive :: show i:" << i << endl;

	}
};
int main()
{
	Base* p = new Derive();
	p->show();
	delete p;

	return 0;
}

