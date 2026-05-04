#include<iostream>
#include<functional>
#include<thread>
#include<list>
#include<mutex>
#include <condition_variable>
#include<queue>
using namespace std;
using namespace placeholders;



//int sum(int a, int b)
//{
//	return a + b;
//}
//class Sum
//{
//public:
//	int sum(int a, int b)
//	{
//		return a + b;
//	}
//};
//int main()
//{
//	function<int(int, int)>func1(&sum);
//	cout << func1(10, 20) << endl;
//	function<int(int, int)>func2 = [](int a, int b)->int {return a + b; };
//	cout<<func2(20, 30)<<endl;
//	function<int(Sum*, int, int)>func3 = &Sum::sum;
//	Sum s;
//	cout<<func3(&s, 50, 50) << endl;
//}


//class Sum
//{
//public:
//	int sum(int a, int b)const
//	{
//		return a + b;
//	}
//};
//int main()
//{
//	function<int(const Sum&, int, int)>func3 = &Sum::sum;
//	cout << func3(Sum(), 50, 50) << endl;
//}


//template<typename T>
//void func(T a)
//{
//    cout << typeid (T).name() << endl;
//}
//int sum(int a, int b) { return a + b; }
//
//
//template<typename R, typename A1, typename A2>
//void func2(R(*a) (A1, A2))
//{
//    cout << typeid (R).name() << endl;
//    cout << typeid (A1).name() << endl;
//    cout << typeid (A2).name() << endl;
//
//}
//int main()
//{
//    func2(sum);
//}

//int sum(int a, int b) { return a + b; }
//
//int main()
//{
//	cout << bind(sum, _1,20)(10) << endl;
//}

//void threadHandle(int time)
//{
//    std::this_thread::sleep_for(std::chrono::seconds(time));
//        cout << "threadHandle()" << endl;
//
//}
//
//int main()
//{
//    thread t1(threadHandle, 2);
//    t1.join();//t1.detach()
//}

//std::mutex mtx;
//int ticketcount = 100;
//void sellTicket(int index)
//{
//    mtx.lock();
//    while (ticketcount > 0)
//    {
//        --ticketcount;
//        cout << ticketcount << endl;
//        std :: this_thread::sleep_for (std::chrono::milliseconds(100));
//    }
//    mtx.unlock();
//}
//int main()
//{
//    list<std::thread> tlist;
//    for (int i = 1; i <= 3; ++i)
//    {
//        tlist.push_back(std::thread(sellTicket, i));
//    }
//    for (auto& t : tlist)
//    {
//        t.join();
//    }
//    cout << "所有票买完" << endl;
//    return 0;
//}

//std::mutex mtx;
//int ticketcount = 100;
//void sellTicket(int index)
//{
//
//    while (ticketcount > 0)
//    {
//        unique_lock<std::mutex>lock(mtx);
//        lock.lock();
//        if (ticketcount > 0)
//        {
//            --ticketcount;
//            cout << ticketcount << endl;
//           
//            
//        }
//        lock.unlock();
//        std::this_thread::sleep_for(std::chrono::milliseconds(100));
//
//    }
//}
//
//int main()
//{
//    list<std::thread> tlist;
//    for (int i = 1; i <= 3; ++i)
//    {
//        tlist.push_back(std::thread(sellTicket, i));
//    }
//    for (auto& t : tlist)
//    {
//        t.join();
//    }
//    cout << "所有票买完" << endl;
//    return 0;
//}
std::mutex mtx;
condition_variable cv;
class Queue
{
public:
	void put(int val)
	{
		std::unique_lock<std::mutex> lock(mtx);
		while (!que.empty())
		{
			cv.wait(lock);
		}
		que.push(val);
		cv.notify_all();
		cout << "生产者 生产：" << val << "号物品" << endl;
	}
	int get()
	{
		std::unique_lock<std::mutex> lock(mtx);
		while (que.empty())
		{
			cv.wait(lock);
		}
		int val = que.front();
		que.pop();
		cv.notify_all();
		cout << "消费者 消费：" << val << "号物品" << endl;
		return val;
	}
private:
	queue<int>que;
};

void producer(Queue* que)
{
	for (int i = 1; i <= 10; ++i)
	{
		que->put(i);
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	}
}

void comsumer(Queue* que)
{
	for (int i = 1; i <= 10; ++i)
	{
		que->get();
		std::this_thread::sleep_for(std::chrono::milliseconds(100));
	}
}

int main()
{
	Queue que;
	thread t1(producer, &que);
	thread t2(comsumer, &que);
	t1.join();
	t2.join();
	return 0;
}