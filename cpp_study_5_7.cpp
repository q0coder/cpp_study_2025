#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std;

//class Test
//{
//public:
//	Test(int a, int b) { cout << "Test(int a,int b)" << endl; }
//	Test(int a) { cout << "Test(int a)" << endl; }
//	~Test() { cout << "~Test()" << endl; }
//	Test(const Test& t) { cout << "Test(const Test&)" << endl; }
//	Test(const Test&& t) { cout << "Test(const Test&&)" << endl; }
//};
//int main()
//{
//	vector<Test>vec;
//	Test t(10);
//	//两者相同
//	vec.push_back(t);
//	vec.emplace_back(t);
//	//两者相同
//	vec.emplace_back(Test(10));
//	vec.push_back(Test(10));
//
//	//支持调用构造函数直接在容器中构造
//	vec.emplace_back(10, 20);//push_back不支持这种写法
//
//	//两者相同
//	vector<int>vec;
//	vec.push_back(10);
//	vec.emplace_back(10);
//}


//int main()
//{
//	//创建输出流对象并打开文件（如果文件不存在会自动创建）
//	fstream outFile("test.txt", ios::out);//这里的打开方式也可以不加，使用默认的
//	///检查文件是否成功打开
//	if (!outFile.is_open())
//	{
//		throw "文件打开失败";
//	}
//	//写文件
//	outFile << "ABCD" << endl;
//	//关闭文件
//	outFile.close();
//}

//int main()
//{
//	//创建输入流对象并打开文件
//	ifstream inFile("test.txt", ios::in);//这里的打开方式也可以不加，使用默认的
//	///检查文件是否成功打开
//	if (!inFile.is_open())
//	{
//		throw "文件打开失败";
//	}
//	//读文件（按行读取）
//	/*string line;
//	while (getline(inFile, line)) {
//		cout << line << endl;
//	}*/
//
//	/*string word;
//	while (inFile >> word) {
//		cout << word << endl;
//	}*/
//
//	char c;
//	while (inFile.get(c)) {
//		cout << c;
//	}
//	//关闭文件
//	inFile.close();
//
//	
//}

struct Student
{
	char _name[20];
	int _age;
};

int main()
{
	Student s1 {"zhangsan",18};
	//指定多种打开方式时，可以使用"|"
	ofstream outFile("Student.dat", ios::out | ios::binary);
	if (!outFile.is_open())
	{
		throw "文件打开失败";
	}

	outFile.write(reinterpret_cast<const char*>(&s1), sizeof(Student));
	outFile.close();

	Student s2;
	ifstream inFie("Student.dat", ios::in | ios::binary);
	inFie.read(reinterpret_cast<char*>(&s2), sizeof(Student));

	if (inFie.gcount() == sizeof(Student))
	{
		cout << "name:" << s2._name << endl
			<< "age:" << s2._age<<endl;
	}
	else
	{
		cerr << "读取数据不完整" << endl;
	}
	inFie.close();
}