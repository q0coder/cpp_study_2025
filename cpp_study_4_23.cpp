#include<iostream>
using namespace std;


//void* operator new(size_t size)
//{
//	void* p = malloc(size);
//	if (p == nullptr)
//		throw bad_alloc();
//	return p;
//}
//void operator delete(void* ptr)
//{
//	free(ptr);
//}
//void* operator new[](size_t size)
//{
//	void* p = malloc(size);
//	if (p == nullptr)
//		throw bad_alloc();
//	return p;
//}
//void operator delete[](void* ptr)
//{
//	free(ptr);
//}

//class a
//{
//public:
//	int ma;
//protected:
//	int mb;
//private:
//	int mc;
//};
//
//class b :public a
//{
//public:
//	int md;
//protected:
//	int me;
//private:
//	int mf;
//};

//class Father
//{
//public:
//	Father(int data)
//		:ma(data)
//	{ }
//	~Father()
//	{ }
//protected:
//	int ma;
//};
//
//class Son :public Father
//{
//public:
//	Son(int data)
//		:mb(data)
//		,Father(data)
//	{ }
//	~Son()
//	{ }
//private:
//	int mb;
//};

//class Father
//{
//public:
//	void show()
//	{
//		cout << "Father::show" << endl;
//	}
//	void show(int)
//	{
//		cout << "Father::show(int)" << endl;
//	}
//};
//
//class Son :public Father
//{
//public:
//	void show()
//	{
//		cout << "Son::show" << endl;
//	}
//};
//
//int main()
//{
//	Son s;
//	
//}


//class Father
//{
//public:
//	Father(int data)
//		:ma(data)
//	{ }
//	~Father()
//	{ }
//protected:
//	int ma;
//};
//
//class Son :public Father
//{
//public:
//	Son(int data)
//		:mb(data)
//		,Father(data)
//	{ }
//	~Son()
//	{ }
//private:
//	int mb;
//};
//
//int main()
//{
//	Father f(10);
//	Son s(10);
//	f = s;
//	s = f;//错误：派生类无法转化为基类
//}

#include<typeinfo>
 class Father
{
public:
	Father(int data=10)
		:ma(data)
	{ 
		cout << "Father()"<<endl;
	}
	virtual ~Father()
	{
		cout << "~Father()" << endl;
	}
	void show()
	{
		cout << "Father::show" << endl;
	}
	void show(int)
	{
		cout << "Father::show(int)" << endl;
	}
private:
	int ma;
};

class Son :public Father
{
public:
	Son(int data=10,int* p= new int(10))
		:mb(data)
		,mptr(p)
	{ 
		cout << "Son()" << endl;
	}
	~Son()
	{
		cout << "~Son()" << endl;
		delete mptr;
		mptr = nullptr;
	}
	void show()
	{
		cout << "Son::show" << endl;
	}
private:
	int mb;
	int* mptr;
};

int main()
{
	
	Father* ps = new Son;
	ps->show();
	delete ps;
	
	

}
