#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
#include<string>
//class Cpu
//{
//public:
//	virtual void calculate() = 0;
//};
//class ViedoCard
//{
//public:
//	virtual void display() = 0;
//}; 
//class Memory
//{
//public:
//	virtual void storage() = 0;
//};
//class computer
//{
//public:
//	computer(Cpu* m_Cpu, ViedoCard* m_ViedoCard, Memory* m_Memory)
//	{
//		Cpu = m_Cpu;
//		ViedoCard = m_ViedoCard;
//		Memory = m_Memory;
//	}
//	void work()
//	{
//		Cpu->calculate();
//		ViedoCard->display();
//		Memory->storage();
//	}
//	
//private:
//	Cpu* Cpu;
//	ViedoCard* ViedoCard;
//	Memory* Memory;
//};
//class InterCpu :public Cpu
//{
//public:
//	virtual void calculate()
//	{
//		cout << "Inter's Cpu work" << endl;
//	}
//
//};
//class InterViedoCard :public ViedoCard
//{
//public:
//	virtual void display()
//	{
//		cout << "Inter's ViedoCard work" << endl;
//	}
//
//};
//class InterMemory :public Memory
//{
//public:
//	virtual void storage()
//	{
//		cout << "Inter's Memory work" << endl;
//	}
//
//};
//void cumputer1()
//{
//	computer s(new InterCpu,new InterViedoCard,new InterMemory);
//	s.work();
//}
//
//int main()
//{
//
//	cumputer1();
//
//	system("pause");
//	return 0;
//}

//#include<fstream>
//int main()
//{
//	ofstream ofs;
//	ofs.open("1.txt", ios::out);
//	ofs << "abcdefg";
//	ofs.close();
//	system("pause");
//	return 0;
//}


//#include<fstream>
//int main()
//{
//	ifstream ifs;
//	ifs.open("1.txt", ios::in);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//	}

	//第一种

	//string c;
	//char c
	//char c[20];
	/*while (ifs >> c)
	{
		cout << c << endl;
	}*/

	//第二种

	/*char c[20];
	while (ifs.getline(c,20))
	{
		cout << c << endl;
	}*/

	//第三种

	/*string c;
	while (getline(ifs, c))
	{
		cout << c << endl;
	}*/

	//第四种

	/*char c;
	while ((c=ifs.get())!=EOF)
	{
		cout << c << endl;

	}
	ifs.close();
	system("pause");
	return 0;
}*/

//#include<fstream>
//int main()
//{
//	char buf[20] = { "张三，李四" };
//	ofstream ofs;
//	ofs.open("1.txt", ios::out | ios::binary);
//	ofs.write(buf, 20);
//	ofs.close();
//	system("pause");
//	return 0;
//}

//int main()
//{
//	char buf[20];
//	ifstream ifs;
//	ifs.open("1.txt", ios::in | ios::binary);
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//	}
//	ifs.read(buf, 20);
//	ifs.close();
//	cout << buf << endl;
//	system("pause");
//	return 0;
//}