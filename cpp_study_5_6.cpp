#include<iostream>
#include<thread>
#include<atomic>
#include<mutex>
#include<list>
#include<vector>
#include<unordered_map>
#include<memory>
#include<functional>
using namespace std;

//class VideoSite
//{
//public:
//	virtual void freemovie() = 0;
//	virtual void VIPmovie() = 0;
//};
//
//class VideoSiteBackend :public VideoSite
//{
//public:
//	void freemovie()
//	{
//		cout << "see freemovie" << endl;
//	}
//	void VIPmovie()
//	{
//		cout << "see VIPmovie" << endl;
//	}
//
//};
//
//class Ordinarymember :public VideoSite
//{
//public:
//	Ordinarymember() { p = new VideoSiteBackend(); }
//	~Ordinarymember() { delete p; }
//	void freemovie()
//	{
//		p->freemovie();
//	}
//	void VIPmovie()
//	{
//		cout << "Insuffcient permissions at present " << endl;
//	}
//private:
//	VideoSite* p;
//};
//
//class VIPmember :public VideoSite
//{
//public:
//	VIPmember() { p = new VideoSiteBackend(); }
//	~VIPmember() { delete p; }
//	void freemovie()
//	{
//		p->freemovie();
//	}
//	void VIPmovie()
//	{
//		p->VIPmovie();
//	}
//private:
//	VideoSite* p;
//};
//
//int main()
//{
//	unique_ptr< VideoSite>p1(new Ordinarymember());
//	unique_ptr< VideoSite>p2(new VIPmember());
//	p1->freemovie();
//	p1->VIPmovie();
//	p2->freemovie();
//	p2->VIPmovie();
//
//}


//class Car//汽车基类
//{
//public:
//	Car(){}
//	Car(string name) :_name(name) {}
//	virtual void show() = 0;
//protected:
//	string _name;
//};
//class A1 :public Car//汽车类型A1
//{
//public:
//	A1(string name) :Car(name) {}
//	void show() { cout << "A1" << " " << _name << endl; }
//};
//class A2 :public Car//汽车类型A2
//{
//public:
//	A2(string name) :Car(name) {}
//	void show() { cout << "A2" << " " << _name << endl; }
//};
//class Decorate1:public Car
//{
//public:
//	Decorate1(Car* p):_p(p){ }
//public:
//	void show()
//	{
//		_p->show();
//		cout << "功能1" << endl;
//	}
//private:
//	Car* _p;
//};
//class Decorate2 :public Car
//{
//public:
//	Decorate2(Car* p) :_p(p) {}
//public:
//	void show()
//	{
//		_p->show();
//		cout << "功能2" << endl;
//	}
//private:
//	Car* _p;
//};
//
//int main()
//{
//	Car* p1 = new Decorate1(new A1("a1"));
//	p1 = new Decorate2(p1);
//	p1->show();
//	Car* p2 = new Decorate1(new A2("a2"));
//	p2 = new Decorate2(p2);
//	p2->show();
//}


//class VGA
//{
//public:
//	virtual void show()=0;
//};
//
//class TV :public VGA
//{
//	void show()
//	{
//		cout << "VGA connection" << endl;
//	}
//};
//
//class HDMI
//{
//public:
//	virtual void show() = 0;
//};
//
//class Computer
//{
//public:
//	void show(HDMI* p)
//	{
//		p->show();
//	}
//};
//
//class ComputerAdapt:public HDMI
//{public:
//	ComputerAdapt(TV* p):_p(p){}
//	void show()
//	{
//		_p->show();
//	}
//private:
//	VGA* _p;
//};
//
//int main()
//{
//	Computer computer;
//	computer.show(new ComputerAdapt(new TV()));
//
//}

class Observer
{
public:
	virtual void handle(int msgid) = 0;
};
class Observer1 :public Observer
{
	void handle(int msgid)
	{
		switch (msgid)
		{
		case 1:
			cout << "Observer1 recv 1 msg " << endl;
			break;
		}
	}
	
};
class Observer2 :public Observer
{
	void handle(int msgid)
	{
		switch (msgid)
		{
		case 2:
			cout << "Observer2 recv 2 msg " << endl;
			break;
		}
	}
};
class Subject
{
public:
	void addObserver(Observer* obser, int msgid)
	{
		mp[msgid].push_back(obser);
	}
	void dispatch(int msgid)
	{
		auto it = mp.find(msgid);
		if (it != mp.end())
		{
			for (Observer* pObser : it->second)
			{
				pObser->handle(msgid);
			}
		}
	}
private:
	unordered_map<int, list<Observer*>> mp;
};
int main()
{
	Subject subject;
	Observer* p1 = new Observer1();
	Observer* p2 = new Observer2();
	subject.addObserver(p1, 1);
	subject.addObserver(p2, 2);
	subject.dispatch(1);
	subject.dispatch(2);
}

