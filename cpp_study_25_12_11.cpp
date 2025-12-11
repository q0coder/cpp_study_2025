#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
using namespace std;
//void print(vector<int> v)
//{
//	for (vector<int>::iterator first = v.begin(); first != v.end(); first++)
//	{
//		cout << *first;
//	}
// }
//int main()
//{
//	vector<int>vec;
//	//vector<int>vec1(10, 100);
//	//vector<int>vec(vec1);
//	//cout << vec.at(0)<<endl;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	vector<int>vec1(vec.begin(), vec.end());
//	cout << vec1.at(0);
//	print(vec);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	vector<int>vec1(10, 1);
//	vector<int>vec2;
//	//vec2 = vec1;
//	//vec2.assign(vec1.begin(), vec1.end());
//	vec2.assign(10, 10);
//	cout << vec2.at(1);
//	return 0;
//}

//int main()
//{
//	vector<int>vec(10, 6);
//	//bool ret = vec.empty();
//	//int ret = vec.capacity();
//	//int ret = vec.size();
//	//vec.resize(15);
//	//int ret = vec.capacity();
//	//int ret = vec.size();
//	vec.resize(15, 10);
//	cout << vec.at(12) << endl;
//	return 0;
//}


//int main()
//{
//	vector<int>vec;
//	//vec.push_back(0);
//	//cout << vec.at(0);
//	//vec.pop_back();
//	//cout << vec.at(0);
//	vec.insert(vec.begin(), 10, 6);
//	//cout << vec.at(5)<<endl;
//	//vec.erase(vec.begin());
//	//cout << vec.at(0) << endl;
//	//vec.erase(vec.begin(),vec.end());
//	vec.clear();
//	cout << vec.at(0)<<endl;
//	return 0;
//}

//int main()
//{
//	vector<int>vec(10, 6);
//	vec[9] = 9;
//	int ret = vec.front();
//	 ret = vec.back();
//
//	cout << ret << endl;
//	return 0;
//}
//void print(vector<int>v)
//
//{
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	vector<int>vec1(10,6);
//	print(vec1);
//
//	vector<int>vec2(10,9);
//	vec1.swap(vec2);
//	print(vec1);
//	return 0;
//}

//int main()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10000; i++)
//	{
//		vec.push_back(i);
//	}
//	cout << vec.size() << endl;
//	cout << vec.capacity()<<endl;
//	vec.resize(3);
//	cout << vec.size() << endl;
//	cout << vec.capacity()<<endl;
//	vector<int>(vec).swap(vec);
//	cout << vec.size() << endl;
//	cout << vec.capacity() << endl;
//	return 0;
//}

//int main()
//{
//	vector<int>vec(100, 6);
//	cout << vec.capacity() << endl;
//	vec.reserve(200);
//	cout << vec.capacity() << endl;
//	return 0;
//}
//int main()
//{
//	//eque<int>de;
//	deque<int>de1(10,6);
//
//	deque<int>de2(de1.begin(), de1.end());
//	deque<int>de2(de1);
//	cout << de2.at(0)<<endl;
//	return 0;
//}
//#include<deque>

//void print(deque<int>v)
//
//{
//	for (deque<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//int main()
//{
//	deque<int>de1(10, 6);
//	//deque<int>de2 = de1;
//	//deque<int>de2 (de1.begin(),de1.end());
//	deque<int>de2;
//	de2.assign(10, 5); // 正确用法：分配10个值为5的元素
//	//de2.assign(de1.begin(), de1.end());
//	print(de2);
//
//	return 0;
//}
//#include<cstdlib>
//#include<algorithm>
//int main()
//{
//	deque<int>de;
//	srand(time(NULL));
//	for (size_t i = 0; i < 10; i++)
//	{
//		de.push_back(rand() % 11 + 10);
//	}
//	print(de);
//
//	sort(de.begin(), de.end());
//	print(de);
//	return 0;
//}
//#include<stack>
//int main()
//{
//	stack<int>stk1;
//	/*stack<int>stk2(stk1);
//	stk1 = stk2;*/
//	/*stk1.push(6);
//	int ret = stk1.top();
//	cout << ret << endl;
//	stk1.pop();*/
//	cout << stk1.empty() << endl;
//	
//
//	return 0;
//}
//
//#include<set>
//void print(set<int>v)
//
//{
//	for (set<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	set<int>st;
//	st.insert(10);
//	st.insert(10);
//	print(st);
//	return 0;
//}

//int main()
//{
//	pair<string, int>p("zs", 18);
//	cout << p.first << " " << p.second<<endl;
//	pair<string, int>p1 = make_pair("sz", 20);
//	cout << p1.first << " " << p1.second << endl;
//}

//#include<set>
//class com
//{
//public:
//	bool operator()(const int e1, const int e2)
//	{
//		return e1 > e2;
//	}
//};
////void print(set<int>v)
////
////{
////	for (set<int>::iterator it = v.begin(); it != v.end(); it++)
////	{
////		cout << *it << " ";
////	}
////	cout << endl;
////}
//void comprint(set<int,com>v)
//
//{
//	for (set<int,com>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//
//int main()
//{
//	set<int,com>st;
//	st.insert(10);
//	st.insert(60);
//	st.insert(40);
//	st.insert(90);
//	st.insert(80);
//	for (set<int, com>::iterator it = st.begin(); it != st.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	//comprint(st);
//}

//#include<set>
//class com
//{
//public:
//	bool operator()(const int e1, const int e2)const
//	{
//		return e1 > e2;
//	}
//};
//void comprint(set<int, com>v)
//
//{
//	for (set<int, com>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//int main()
//{
//	set<int, com>st;
//	st.insert(10);
//	st.insert(60);
//	st.insert(40);
//	st.insert(90);
//	st.insert(80);
//	comprint(st);
//}

//
//#include<set>
//class Std
//{
//public:
//	int m_age;
//	string m_name;
//	Std(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//};
//class com
//{
//public:
//	bool operator()(const Std& e1, const Std& e2)const
//	{
//		return e1.m_age > e2.m_age;
//	}
//};
//void comprint(set<Std, com>v)
//
//{
//	for (set<Std, com>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << it->m_age << " "<<it->m_name<<endl;
//	}
//	cout << endl;
//}
//int main()
//{
//	set<Std,com>st;
//	Std s1("zs",20);
//	Std s2("ls", 18);
//	Std s3("ww", 24);
//	st.insert(s1);
//	st.insert(s2);
//	st.insert(s3);
//	comprint(st);
//	return 0;
//}