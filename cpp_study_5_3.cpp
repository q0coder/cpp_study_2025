#include<iostream>
#include<memory>
using namespace std;

//class A
//{
//public:
//	A(int data=10)
//		:ma(data)
//	{cout << "A()" << endl;}
//	~A()
//	{cout << "~A()" << endl;}
//	A(const A& t)
//		:ma(t.ma)
//	{	cout << "A(const A & t)" << endl;}
//	A& operator=(const A& t)
//	{
//		cout << "operator=" << endl;
//		ma = t.ma;
//		return *this;
//	}
//private:
//	int ma;
//};
//
//int main()
//{
//	A a1;
//	A a2(a1);
//	A a3 = a1;
//	A a4 = A(20);
//	cout << "--------------------" << endl;
//
//	a4 = a2;
//	a4 = A(30);
//	a4 = (A)30;
//	a4 = 30;
//
//	
//	 A* p = &A(40);
//	const A& ref = A(50);
//}

//template<typename T>
//class CsmartPtr
//{
//public:
//	CsmartPtr(T* ptr=nullptr)
//		:mptr(ptr)
//	{ }
//	~CsmartPtr() { delete mptr; }
//	T& operator*() { return *mptr; }
//	T* operator->() { return mptr; }
//private:
//	T* mptr;
//};
//
//int main()
//{
//	CsmartPtr<int>p1(new int(10));
//	CsmartPtr<int>p2(p1);
//	*p2 = 20;
//	cout << *p1 << endl;
//}

//int main()
//{
//	unique_ptr<int>p1(new int(10));
//	unique_ptr<int>p2(std::move(p1));
//	*p2 = 20;
//	cout << *p1 << endl;
//
//}
class B;
class A
{
public:
	A() { cout<<"A()"<<endl; }
	~A() { cout << "~A()"; }
	shared_ptr<B> _pb;
};
class B
{
public:
	B() { cout << "B()" << endl; }
	~B() { cout << "~B()"; }
	shared_ptr<A> _pa;
};

int main()
{
	shared_ptr<A>pa(new A());
	shared_ptr<B>pb(new B());
	pa->_pb = pb;
	pb->_pa = pa;

	cout << pa.use_count() << endl;
	cout << pb.use_count() << endl;


}