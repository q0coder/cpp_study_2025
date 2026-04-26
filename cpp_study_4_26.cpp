#include<iostream>
using namespace std;

//class Base
//{
//private:
//	virtual void show()
//	{
//		cout << "call Base :: show " << endl;
//	}
//};
//class Derive : public Base
//{
//private:
//	void show()
//	{
//		cout << "call Derive :: show " << endl;
//
//	}
//};
//int main()
//{
//	Base* p = new Derive();
//	p->show();
//	delete p;
//
//	return 0;
//}

//class Base
//{
//public:
//	Base()
//	{
//		cout << "call Base()" << endl;
//		clear();
//	}
//	void clear() { memset(this, 0, sizeof(*this)); }
//	virtual void show()
//	{
//		cout << "call Base::show()" << endl;
//	}
//
//};
//class Derive :public Base
//{
//public:
//	Derive()
//	{
//		cout << "call Derive()" << endl;
//	}
//	void show()
//	{
//		cout << "call Derive: :show()" << endl;
//
//	}
//};
//
//int main()
//{
//	//Base* pb1 = new Base();//1
//	//pb1->show();
//	//delete pb1;
//
//	Base* pb2 = new Derive();//2
//	pb2->show();
//	delete pb2;
//
//	return 0;
//}

//class A
//{
//private:
//	int ma;
//
//};
//class B : virtual public  A
//{
//private:
//	int mb;
//};
//int main()
//{
//	cout << sizeof(A) << endl;
//	cout << sizeof(B) << endl;
//}


//int main()
//{
//	const int a = 10;
//	int* p1 = (int*)&a;//double* p1=(double*)&a;可行
//	int* p2 = const_cast<int*>(&a);//double* p2=const_cast<int*>(&a)不可行
//}

class Base
{
public:
	virtual void show() { cout << "Base::show()" << endl; }
};

class Derivel1 :public Base
	
{
public:
	void show() { cout << "Derivel1::show()" << endl; }
};

class Derivel2 :public Base
{
public:
	void show() { cout << "Derivel2::show()" << endl; }
	void Derivel2show() { cout << "Derivel2::Derivel2show()" << endl; }
};

void showFunc(Base* p)
{
	Derivel2* pd = dynamic_cast<Derivel2*>(p);
	if (pd != nullptr)
	{
		pd->Derivel2show();
	}
	else
	{
		p->show();

	}
}

int main()
{
	Derivel1 d1;
	Derivel2 d2;
	showFunc(&d1);
	showFunc(&d2);
}