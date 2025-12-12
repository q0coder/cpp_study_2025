#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//#include<map>
//class com
//{
//public:
//	bool operator()(int e1,int e2)const
//	{
//		return e1 > e2;
//	}
//};
//void print(map<int, int,com>& x)
//{
//	for (map<int, int>::iterator it = x.begin(); it != x.end(); it++)
//	{
//		cout << it->first << ":" << it->second << endl;
//	}
//}
//int main()
//{
//	map<int, int,com>mp;
//	mp.insert(pair<int,int>(1, 6));
//	mp.insert(pair<int, int>(3, 666));
//	mp.insert(pair<int, int>(2, 66));
//	mp.insert(make_pair<int,int>(4, 6666));
//	//mp.erase(3);
//	print(mp);
//	//cout << mp[3] << endl;
//	//cout << mp.size() << endl;
//	//print(mp);
//	return 0;
//}

//class Add
//{
//public:
//	int operator()(int x, int y)
//	{
//		return x + y;
//	}
//};
//class print
//{
//public:
//	int count;
//	print()
//	{
//		this->count = 0;
//	}
//	void operator()(string name)
//	{
//		cout << name << endl;
//		this->count++;
//	}
//};
//void test1()
//{
//	Add myadd;
//	cout << myadd(10, 20) << endl;
//
//}
//void test2()
//{
//	print myprint;
//	myprint("zhangsan");
//	myprint("zhangsan");
//	myprint("zhangsan");
//	myprint("zhangsan");
//	myprint("zhangsan");
//	cout << myprint.count << endl;
//}
//void doprint(print &mp,string test)
//{
//	mp(test);
//}
//void test3()
//{
//	print myprint;
//	doprint(myprint, "hello");
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}
//
//


//#include<vector>
//class myfind
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//int main()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	vector<int>::iterator it=find_if(vec.begin(), vec.end(), myfind());
//	if (it == vec.end())
//	{
//		cout << "wzd"<<endl;
//	}
//	else
//		cout << "zdl" << endl;
//	return 0;
//}
//#include<algorithm>
//class mysort
//{
//public:
//	bool operator()(int e1,int e2)
//	{
//		return e1 > e2;
//	}
//};
//void test1()
//{
//	vector<int>vec;
//	vec.push_back(10);
//	vec.push_back(40);
//	vec.push_back(30);
//	vec.push_back(50);
//	vec.push_back(20);
//	sort(vec.begin(), vec.end(),mysort());
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//int main()
//{
//	test1();
//
//	return 0;
//}
//#include<vector>
//#include<functional>
//#include<algorithm>
//void test1()
//{
//	negate<int>n;
//	cout << n(10) << endl;
//}
//void test2()
//{
//	plus<int>add;
//	cout << add(10, 20) << endl;
//}
//void test3()
//{
//	equal_to<int>is_equal;
//	cout << is_equal(10, 10) << endl;
//}
//void test4()
//{
//	vector<int>vec;
//	greater<int>bigger;
//	vec.push_back(10);
//	vec.push_back(30);
//	vec.push_back(50);
//	vec.push_back(40);
//	vec.push_back(20);
//	//sort(vec.begin(), vec.end(), bigger);
//	sort(vec.begin(), vec.end(), greater<int>());
//
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	return 0;
//}

//#include<vector>
//#include<functional>
//#include<algorithm>
//void test()
//{
//	vector<bool>vec1;
//	vec1.push_back(true);
//	vec1.push_back(true);
//	vec1.push_back(true);
//	vec1.push_back(true);
//	for (vector<bool>::iterator it = vec1.begin(); it != vec1.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//	vector<bool>vec2;
//	vec2.resize(vec1.size());
//	transform(vec1.begin(), vec1.end(), vec2.begin(), logical_not<bool>());
//	for (vector<bool>::iterator it = vec2.begin(); it != vec2.end(); it++)
//	{
//		cout << *it << " ";
//	}
//	cout << endl;
//
//}
//int main()
//{
//	test();
//
//	return 0;
//}


#include<algorithm>
#include<vector>
#include<functional>
//void myprint(int val)
//{
//	cout << val<<" ";
//	
//}
//class Myprint
//{
//public:
//	
//	void operator()(int val)
//	{
//		cout << val << " ";
//	}
//};
//void mysort(vector<int>v)
//{
//	sort(v.begin(), v.end(), greater<int>());
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//}
//int x(int val)
//{
//	return val;
//}
//void test1()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	for_each(vec.begin(), vec.end(), Myprint());
//}
//void test2()
//{
//	vector<int>vec1;
//	vec1.push_back(10);
//	vec1.push_back(20);
//	vec1.push_back(30);
//	vec1.push_back(40);
//	vec1.push_back(50);
//	vector<int>vec2;
//	vec2.resize(vec1.size());
//	transform(vec1.begin(), vec1.end(), vec2.begin(),x);
//}
//int main()
//{
//	//test1();
//
//	return 0;
//}


//class Std
//{
//public:
//	string m_name;
//	int m_age;
//	Std(string name, int age)
//	{
//		m_name = name;
//		m_age = age;
//	}
//	bool operator==(const Std& s)
//	{
//		if (this->m_age == s.m_age && this->m_name == s.m_name)
//			return true;
//		else
//			return false;
//	}
//};
//class Find_if
//{
//public:
//	bool operator()(int val)
//	{
//		return val > 5;
//	}
//};
//class Find_if1
//{
//public:
//	bool operator()(Std val)
//	{
//		return val.m_age > 20;
//	}
//};
//class count_If
//{
//public:
//	bool operator()(int val)
//	{
//		if (val >= 10)
//			return true;
//		else
//		{
//			return false;
//		}
//	}
//};
//void test1()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	vector<int>::iterator it1 = find(vec.begin(), vec.end(), 5);
//	cout << *it1 << endl;
//}
//void test2()
//{
//	vector<Std>vec1;
//	Std s1("aaa", 18);
//	Std s2("bbb", 19);
//	Std s3("ccc", 20);
//	Std s4("ddd", 21);
//
//	vec1.push_back(s1);
//	vec1.push_back(s2);
//	vec1.push_back(s3);
//	vec1.push_back(s4);
//	vector<Std>::iterator it2 = find(vec1.begin(), vec1.end(), s3);
//	cout << it2->m_name << ":" << it2->m_age << endl;
//}
//void test3()
//{
//	vector<int>vec3;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec3.push_back(i);
//	}
//	vector<int>::iterator it = find_if(vec3.begin(), vec3.end(), Find_if());
//	cout << *it << endl;
//}
//void test4()
//{
//	vector<Std>vec4;
//	Std s1("aaa", 18);
//	Std s2("bbb", 19);
//	Std s3("ccc", 20);
//	Std s4("ddd", 21);
//
//	vec4.push_back(s1);
//	vec4.push_back(s2);
//	vec4.push_back(s3);
//	vec4.push_back(s4);
//	vector<Std>::iterator it = find_if(vec4.begin(), vec4.end(), Find_if1());
//	cout << it->m_name << ":" << it->m_age << endl;
//
//}
//void test5()
//{
//	vector<int>vec;
//	vec.push_back(10);
//	vec.push_back(11);
//	vec.push_back(11);
//	vec.push_back(10);
//	vector<int>::iterator it = adjacent_find(vec.begin(), vec.end());
//	cout << *it << endl;
//}
//void test6()
//{
//
//	vector<int>vec;
//	vec.push_back(10);
//	vec.push_back(11);
//	vec.push_back(11);
//	vec.push_back(10);
//	bool t= binary_search(vec.begin(), vec.end(),21);
//	cout << t << endl;
//}
//void test7()
//{
//
//	vector<int>vec;
//	vec.push_back(10);
//	vec.push_back(11);
//	vec.push_back(11);
//	vec.push_back(10);
//	int t = count(vec.begin(), vec.end(), 11);
//	cout << t << endl;
//}
//void test8()
//{
//	vector<Std>vec4;
//	Std s1("aaa", 18);
//	Std s2("bbb", 19);
//	Std s3("ccc", 20);
//	Std s4("ddd", 21);
//
//	vec4.push_back(s1);
//	vec4.push_back(s2);
//	vec4.push_back(s3);
//	vec4.push_back(s4);
//	vec4.push_back(s4);
//	vec4.push_back(s4);
//	vec4.push_back(s4);
//
//	int it = count(vec4.begin(), vec4.end(), s4);
//	cout << it << endl;
//
//}
//void test9()
//{
//
//	vector<int>vec;
//	vec.push_back(10);
//	vec.push_back(11);
//	vec.push_back(11);
//	vec.push_back(10);
//	vec.push_back(10);
//	vec.push_back(10);
//
//	int t = count_if(vec.begin(), vec.end(), count_If());
//	cout << t << endl;
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	//test7();
//	//test8();
//	//test9();
//	return 0;
//}

//void print(int val)
//{
//	cout << val << endl;;
//}
//class my_sort
//{
//public:
//	bool operator()(int e1, int e2)
//	{
//		return e1 > e2;
//	}
//};
//void test1()
//{
//	vector<int>vec;
//	vec.push_back(666);
//	vec.push_back(66);
//	vec.push_back(6666);
//	vec.push_back(6);
//	sort(vec.begin(), vec.end());
//	for_each(vec.begin(), vec.end(), print);
//	cout << endl;
//}
//void test2()
//{
//	vector<int>vec;
//	vec.push_back(666);
//	vec.push_back(66);
//	vec.push_back(6666);
//	vec.push_back(6);
//	sort(vec.begin(), vec.end(), my_sort());
//	for_each(vec.begin(), vec.end(), print);
//	cout << endl;
//}
//void test3()
//{
//	vector<int>vec;
//	vec.push_back(666);
//	vec.push_back(66);
//	vec.push_back(6666);
//	vec.push_back(6);
//	sort(vec.begin(), vec.end(), my_sort());
//	for_each(vec.begin(), vec.end(), print);
//	random_shuffle(vec.begin(), vec.end());
//	for_each(vec.begin(), vec.end(), print);
//	random_shuffle(vec.begin(), vec.end());
//	for_each(vec.begin(), vec.end(), print);
//
//	cout << endl;
//}
//void test4()
//{
//	vector<int>vec1;
//	vec1.push_back(6);
//	vec1.push_back(66);
//	vec1.push_back(666);
//	vec1.push_back(6666);
//	vector<int>vec2;
//	vec2.push_back(6);
//	vec2.push_back(66);
//	vec2.push_back(666);
//	vec2.push_back(6666);
//	vector<int>vec3;
//	vec3.resize(vec1.size() + vec2.size());
//	merge(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());
//	for_each(vec3.begin(), vec3.end(), print);
//	cout << endl;
//}
//void test5()
//{
//	vector<int>vec;
//	vec.push_back(6);
//	vec.push_back(66);
//	vec.push_back(666);
//	vec.push_back(6666);
//	for_each(vec.begin(), vec.end(), print);
//	cout << endl;
//	reverse(vec.begin(), vec.end());
//	for_each(vec.begin(), vec.end(), print);
//
//}
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	return 0;
//}



//class myp
//{
//public:
//	bool operator()(int val)
//	{
//		return val < 10000;
//	}
//};
//void print(int val)
//{
//	cout << val << endl;;
//}
//void test1()
//{
//	vector<int>vec1;
//	vec1.push_back(6);
//	vec1.push_back(66);
//	vec1.push_back(666);
//	vec1.push_back(6666);
//	vector<int>vec2;
//	vec2.resize(vec1.size());
//	copy(vec1.begin(), vec1.end(), vec2.begin());
//	for_each(vec2.begin(), vec2.end(), print);
//}
//void test2()
//{
//	vector<int>vec1;
//	vec1.push_back(6);
//	vec1.push_back(66);
//	vec1.push_back(666);
//	vec1.push_back(6666);
//	replace(vec1.begin(), vec1.end(), 6666, 9999);
//	for_each(vec1.begin(), vec1.end(), print);
//}
//void test3()
//{
//	vector<int>vec1;
//	vec1.push_back(6);
//	vec1.push_back(66);
//	vec1.push_back(666);
//	vec1.push_back(6666);
//	replace_if(vec1.begin(), vec1.end(),myp(), 666);
//	for_each(vec1.begin(), vec1.end(), print);
//}
//void test4()
//{
//	vector<int>vec1;
//	vec1.push_back(6);
//	vec1.push_back(66);
//	vec1.push_back(666);
//	vec1.push_back(6666);
//	for_each(vec1.begin(), vec1.end(), print);
//	cout << endl;
//	vector<int>vec2;
//	vec2.push_back(666);
//	vec2.push_back(666);
//	vec2.push_back(666);
//	vec2.push_back(666);
//	for_each(vec2.begin(), vec2.end(), print);
//	cout << endl;
//
//	swap(vec1, vec2);
//	for_each(vec1.begin(), vec1.end(), print);
//	cout << endl;
//
//	for_each(vec2.begin(), vec2.end(), print);
//	cout << endl;
//
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	return 0;
//}

//#include<numeric>
//void print(int val)
//{
//	cout << val << endl;;
//}
//
//void test1()
//{
//	vector<int>vec;
//	for (size_t i = 1; i <= 10; i++)
//	{
//		vec.push_back(i);
//	}
//	int sum = 0;
//	sum = accumulate(vec.begin(), vec.end(), 0);
//	cout << sum << endl;
//}
//void test2()
//{
//	vector<int>vec;
//	for (size_t i = 1; i <= 10; i++)
//	{
//		vec.push_back(i);
//	}
//	for_each(vec.begin(), vec.end(), print);
//	cout << endl;
//	fill(vec.begin(), vec.end(), 666);
//	for_each(vec.begin(), vec.end(), print);
//
//}
//int main()
//{
//	//test1();
//	test2();
//
//	return 0;
//}



//void print(int val)
//{
//	cout << val << endl;;
//}
//
//void test1()
//{
//	vector<int>vec1;
//	for (size_t i = 0; i <= 10; i++)
//	{
//		vec1.push_back(i);
//	}
//	vector<int>vec2;
//	for (size_t i = 5; i <= 15; i++)
//	{
//		vec2.push_back(i);
//	}
//	vector<int>vec3;
//	vec3.resize(10);
//	vector<int>::iterator it=set_intersection(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());
//	for_each(vec3.begin(), it, print);
//
//}
//void test2()
//{
//	vector<int>vec1;
//	for (size_t i = 0; i <= 10; i++)
//	{
//		vec1.push_back(i);
//	}
//	vector<int>vec2;
//	for (size_t i = 5; i <= 15; i++)
//	{
//		vec2.push_back(i);
//	}
//	vector<int>vec3;
//	vec3.resize(vec1.size()+vec2.size());
//	vector<int>::iterator it = set_union(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());
//	for_each(vec3.begin(), it, print);
//
//}
//void test3()
//{
//	vector<int>vec1;
//	for (size_t i = 0; i <= 10; i++)
//	{
//		vec1.push_back(i);
//	}
//	vector<int>vec2;
//	for (size_t i = 5; i <= 15; i++)
//	{
//		vec2.push_back(i);
//	}
//	vector<int>vec3;
//	vec3.resize(max(vec1.size(),vec2.size()));
//	vector<int>::iterator it = set_difference(vec1.begin(), vec1.end(), vec2.begin(), vec2.end(), vec3.begin());
//	for_each(vec3.begin(), it, print);
//
//}
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	return 0;
//}

//int main()
//{
//
//	return -1;
//}


