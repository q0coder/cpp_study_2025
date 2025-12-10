#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
////void print(int x) algorithm
////{
////	cout << x << endl;
////}
//int main()
//{
//	vector<int>vec;
//	vec.push_back(1);
//	vec.push_back(2);
//	vec.push_back(3);
//	vec.push_back(4);
//	//1
//
//	/*vector<int>::iterator first = vec.begin();
//	vector<int>::iterator last = vec.end();
//	while (first != last)
//	{
//		cout << *first << endl;
//		first++;
//	}*/
//
//	//2
//
//	/*for (vector<int>::iterator first = vec.begin(); first != vec.end(); first++)
//	{
//		cout << *first << endl;
//	}*/
//
//	//3
//
//	//for_each(vec.begin(), vec.end(), print);
//	return 0;
//}

//class Std
//{
//public:
//	string m_name;
//	int m_age;
//	Std(string name,int age)
//	{
//		this->m_age = age;
//		this->m_name = name;
//
//	}
//};
////void print(Std* s)
////{
////	cout << s->m_age << " " << s->m_name<<endl;
////}
//int main()
//{
//	vector<Std*>vec;
//	Std s1("a", 1);
//	Std s2("a", 1);
//	Std s3("a", 1);
//	Std s4("a", 1);
//	Std s5("a", 1);
//	vec.push_back(&s1);
//	vec.push_back(&s2);
//	vec.push_back(&s3);
//	vec.push_back(&s4);
//	vec.push_back(&s5);
//	for (vector<Std*>::iterator first = vec.begin(); first != vec.end(); first++)
//	{
//		cout << (*first)->m_age<< " " <<(*first)->m_name << endl;
//	}
//	//for_each(vec.begin(), vec.end(), print);
//	return 0;
//}
//


//int main()
//{
//	vector<vector<int>> VEC;
//	vector<int> vec1;
//	vector<int> vec2;
//	vector<int> vec3;
//	vector<int> vec4;
//
//	for (size_t i = 1; i < 5; i++)
//	{
//		vec1.push_back(i);
//		vec2.push_back(i + 1);
//		vec3.push_back(i + 2);
//		vec4.push_back(i + 3);
//
//	};
//	VEC.push_back(vec1);
//	VEC.push_back(vec2);
//	VEC.push_back(vec3);
//	VEC.push_back(vec4);
//
//	for (vector<vector<int>>::iterator it1=VEC.begin();it1!=VEC.end();it1++)
//	{
//		for (vector<int>::iterator it2 = (*it1).begin(); it2 != (*it1).end(); it2++)
//		{
//			cout << *it2 << " ";
//		}
//		cout << endl;
//	}
//}


//int main()
//{
//	const char* ch = "abcdef";
//	//cout << ch << endl;
//	//string str(ch);
//	//string str1 = "abcd";
//	//string str2(str1);
//	//int n = 10;
//	//string str2(10,'c');
//	cout << str2 << endl;
//	return 0;
//}


//int main()
//{
//	string str1="efgh";
//	string str2="abcd";
//	//str1 = str2;
//	//str1 = 'c';
//	//str1.assign("abcd");
//	//str1.assign("Hello world", 5);
//	//str1.assign(str2);
//	//str1.assign(10, 'c');
//	//str2 += "efgh";
//	//str2 += 'e';
//	//str2 += str1;
//	//str2.append("efgh");
//	//str2.append("efgh", 2);
//	//str2.append(str1);
//	//str2.append("efgh", 1, 2);
//	cout << str2 << endl;
//	return 0;
//}


//int main()
//{
//	string str1="abcdef";
//	string str2 = "cd";
//	//int ret=str1.find(str2,3);
//	//int ret = str1.find('c', 1);
//	//int ret=str1.rfind()
//	//cout << ret << endl;
//	str1.replace(0, 4, "str2");
//	cout << str1 << endl;
//	return 0;
//}

//int main()
//{
//	string str1 = "abcd";
//	string str2 = "abcd";
//	int ret = str1.compare(str2);
//	cout << ret << endl;
//	int ret1 = str1.compare("str2");
//	cout << ret1 << endl;
//
//	return 0;
//}


//int main()
//{
//	string str = "abcdef";
//	cout << str[0] << endl;
//	cout << str.at(0)<<endl;
//	for (size_t i = 0; i <str.size() ; i++)
//	{
//		cout << str[i];
//		cout << str.at(i);
//	}
//	return 0;
//}

//int main()
//{
//	string str = "abcdef";
//	str.insert(0, 10,'c');
//	str.erase(0, 10);
//	cout << str << endl;
//	return 0;
//}

//int main()
//{
//	string str = "abcdef";
//	string str1=str.substr(0, 4);
//	cout << str1 << endl;
//	return 0;
//}