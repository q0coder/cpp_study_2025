#include<iostream>
#include<thread>
#include<atomic>
#include<mutex>
#include<list>
#include<vector>
#include<functional>
using namespace std;
//std::atomic_int count = 0;
//std::atomic_bool isready = false;
//void task()
//{
//	if (!isready)
//	{
//		std::this_thread::yield();
//	}
//	++count;
//}
//
//int main()
//{
//	std::list<std::thread> tlist;
//	for (int i = 0; i < 10; ++i)
//	{
//		tlist.push_back(std::thread(task));
//	}
//	std::this_thread::sleep_for(std::chrono::seconds(2));
//
//	isready = true;
//	for (auto& t : tlist)
//	{
//		t.join();
//	}
//	std::cout << "count:" << count << std::endl;
//
//}

using std::cout;
using	std::endl;
//class Test
//{
//public:
//	Test() { cout << "Test()" << endl; }
//	~Test() { cout << "~Test()" << endl; }
//	void testA() { cout << "方法A" << endl; }
//};
//
//void handler(std::weak_ptr< Test > p)
//{
//	std::this_thread::sleep_for(std::chrono::seconds(2));
//	std::shared_ptr<Test>sp = p.lock();
//	if (sp != nullptr)
//	{
//		sp->testA();
//	}
//	else
//	{
//		cout << "对象已经析构" << endl;
//	}
//	
//}
//
//int main()
//{
//	{
//
//	
//	std::shared_ptr<Test>p(new Test());
//	std::thread t1(handler, std::weak_ptr < Test >(p));
//	t1.join();
//	}
//
//	
//	
//
//}

//void threadHandle(int &val)
//{
//	cout << "threadHandle()" << endl;
//}
//
//int main()
//{
//	int val = 10;
//	std::thread t1(threadHandle,std::ref(val));
//	t1.join();
//}

//class Thread
//{
//public:
//	Thread(std::function<void()>func):_func(func){}
//	std::thread start()
//	{
//		std::thread t(_func);
//		return t;
//	}
//private:
//	std::function<void()>_func;
//};
//class ThreadPool
//{
//public:
//	ThreadPool() { }
//	~ThreadPool() 
//	{ 
//		for (int i = 0; i < _pool.size(); ++i)
//		{
//			delete _pool[i];
//		}
//	}
//	void startPool(int size)
//	{
//		for (int i = 0; i < size; ++i)
//		{
//			_pool.push_back(new Thread(std::bind(&ThreadPool::runInThread, this, i)));
//		}
//
//		for (int i = 0; i < size; ++i)
//		{
//			_thread.push_back(_pool[i]->start());
//		}
//		for (auto& t:_thread)
//		{
//			t.join();
//		}
//	}
//private:
//	std::vector<Thread*>_pool;
//	std::vector<std::thread>_thread;
//	void runInThread(int id)
//	{
//		cout << "call runInThread id:" << id << endl;
//	}
//};
//
//int main()
//{
//	ThreadPool pool;
//	pool.startPool(10);
//
//}

//template<typename T>
//class Queue
//{
//public:
//	Queue()
//	{
//		_front = _rear = new QueueItem();
//	}
//	~Queue()
//	{
//
//	}
//	void push(const T& val)
//	{
//		QueueItem* item = new QueueItem(val);
//		_rear->_next = item;
//		_rear = item;
//	}	
//		void pop()
//	{
//			if (empty())
//				return;
//			QueueItem* first = _front->_next;
//			_front->_next = first->_next;
//			if (_front->_next == nullptr)
//				_rear = _front;
//
//			delete first;
//	}
//	T front()const
//	{
//		return _front->_next->_data;
//	}
//	bool empty()const { return _front == _rear; }
//private:
//	struct QueueItem
//	{
//		QueueItem(T data = T()) : _data(data), _next(nullptr) {}
//		void* operator new(size_t size)
//		{
//			if (_itemPool == nullptr)
//			{
//				_itemPool = (QueueItem*) new char[POOL_ITEM_SIZE * sizeof(QueueItem)];
//				QueueItem* p = _itemPool;
//				for (; p < _itemPool + POOL_ITEM_SIZE - 1; ++p)
//				{
//					p->_next = p + 1;
//
//				}
//				p->_next = nullptr;
//			}
//			QueueItem* p = _itemPool;
//			_itemPool= _itemPool->_next;
//			return p;
//		}
//		void operator delete (void* ptr)
//		{
//			QueueItem* p = (QueueItem*)ptr;
//			p->_next = _itemPool;
//			_itemPool = p; 
//		}
//		T _data;
//		QueueItem* _next;
//		static QueueItem* _itemPool;
//		static const int POOL_ITEM_SIZE = 100000;
//	};
//	QueueItem* _front;
//	QueueItem* _rear;
//};
//template<typename T>
//typename Queue<T>::QueueItem*  Queue<T> ::QueueItem::_itemPool = nullptr;
//
//int main()
//{
//	Queue<int> que;
//	for (int i = 0; i < 1000000;++i)
//	{
//		que.push(i); 
//		que.pop(); 
//
//	}
//cout << que.empty() << endl;
//return 0;
//}

//class Singleton
//{
//public:
//	static Singleton* getinstance()
//	{
//		return &instance;
//	}
//private:
//	static Singleton instance;
//	Singleton()
//	{
//
//	}
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//};
//Singleton Singleton::instance;

//std::mutex mtx;
//class Singleton
//{
//public:
//	static Singleton* getinstance()
//	{
//		if (instance == nullptr)
//		{
//			lock_guard<mutex>lock(mtx);
//			if (instance == nullptr)
//			{
//				instance = new Singleton();
//			}
//		}
//		return instance;
//	}
//private:
//	static Singleton* instance;
//	Singleton()
//	{
//
//	}
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//};
//Singleton* Singleton::instance=nullptr;


//class Singleton
//{
//public:
//	static Singleton* getinstance()
//	{
//		static Singleton instance;
//		return &instance;
//	}
//private:
//	
//	Singleton()
//	{
//
//	}
//	Singleton(const Singleton&) = delete;
//	Singleton& operator=(const Singleton&) = delete;
//};
//
//
//
//int main()
//{
//	Singleton* p1 = Singleton::getinstance();
//	Singleton* p2 = Singleton::getinstance();
//	Singleton* p3 = Singleton::getinstance();
//
//}

//class Car
//{
//public:
//	Car(string name) :_name(name) {}
//	virtual void show() = 0;
//protected:
//	string _name;
//};
//class A1 :public Car
//{
//public:
//	A1(string name) :Car(name) {}
//	void show() { cout << "A1" <<" " << _name << endl; }
//};
//class A2 :public Car
//{
//public:
//	A2(string name) :Car(name) {}
//	void show() { cout << "A2" <<" " << _name << endl; }
//};
//enum Cartype
//{
//	A1Type, A2Type
//};
//class SimpleFactory
//{
//public:
//	Car* createCar(Cartype ct)
//	{
//		switch (ct)
//		{
//		case A1Type:
//			return new A1("a1");
//		case A2Type:
//			return new A2("a2");
//		default:
//			cout << "传入参数不正确" << endl;
//			return nullptr;
//		}
//	}
//};
//
//int main()
//{
//	SimpleFactory* simplefactory = new SimpleFactory();
//	Car* p1 = simplefactory->createCar(A1Type);
//	Car* p2 = simplefactory->createCar(A2Type);
//	p1->show();
//	p2->show();
//
//}

class Car
{
public:
	Car(string name) :_name(name) {}
	virtual void show() = 0;
protected:
	string _name;
};
class A1 :public Car
{
public:
	A1(string name) :Car(name) {}
	void show() { cout << "A1" <<" " << _name << endl; }
};
class A2 :public Car
{
public:
	A2(string name) :Car(name) {}
	void show() { cout << "A2" <<" " << _name << endl; }
};

class Factory
{
public:
	virtual Car* createCar() = 0;
};
class A1Factory :public Factory
{
public:
	Car* createCar()
	{
		return new A1("a1");
	}
};
class A2Factory :public Factory
{
public:
	Car* createCar()
	{
		return new A2("a2");
	}
};

int main()
{
	Factory* factoryA1 = new A1Factory();
	Factory* factoryA2 = new A2Factory();
	factoryA1->createCar()->show();
	factoryA2->createCar()->show();


}