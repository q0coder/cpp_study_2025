#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<algorithm>
#include<numeric>
#include<iterator>
#include<functional>
using namespace std;
//int main()
//{
//	string str1 = "123";
//	string str2 = "ab";
//	string str3 = to_string(1234);
//	int ret = stoi(str1, 0, 10);
//	//int ret=str1.compare(0,2,str2,0,2);
//	//int ret = str1.find_first_not_of(str2);
//	cout << ret << endl;
//	//cout << str3 << endl;
//	return 0;
//}

//#include<deque>
//#include<stack>
//int main()
//{
//	deque<int>deq;
//	stack<int>stk(deq);
//
//
//
//	return 0;
//}

//#include<vector>
//int main()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	auto ret=find(vec.begin(), vec.end(), 10);
//	if (ret == vec.end())
//		cout << "not find" << endl;
//	else
//		cout << "find" << endl;
//	return 0;
//}

#include<vector>
using namespace placeholders;

//int main()
//{
//	vector<double>vec;
//	vec.push_back(10.2);
//	vec.push_back(10.2);
//	vec.push_back(10.2);
//	vec.push_back(10.3);
//	vec.push_back(10.2);
//	fill_n(vec.begin(), 2, 10);
//	vector<int>vec1;
//	vec1.push_back(10);
//	vec1.push_back(10);
//	vec1.push_back(20);
//	vec1.push_back(10);
//	vec1.push_back(10);
//	double ret=accumulate(vec.begin(), vec.end(), 0.0);
//	//bool ret = equal(vec.begin(), vec.end(), vec1.begin());
//	cout << ret << endl;
//	return 0;
//}

//void print(int val)
//{
//	cout << val<<" ";
//}
//int main()
//{
//	vector<int>vec;
//	vec.resize(10);
//	fill_n(vec.begin(), 10, 6);
//	//vector<int>vec2;
//	//fill_n(back_inserter(vec), 10, 6);
//	////replace(vec.begin(), vec.end(), 6, 10);
//	//replace_copy(vec.begin(), vec.end(), back_inserter(vec2), 6, 10);
//	//vector<int>vec1;
//	//copy(vec.begin(), vec.end(), back_inserter(vec1));
//	for_each(vec.begin(), vec.end(), print);
//	/*auto it = back_inserter(vec);
//	*it = 42;
//	cout << vec.at(0) << endl;*/
//
//	return 0;
//}



//void print(int val)
//{
//	cout << val<<" ";
//}
//int main()
//{
//	vector<int>vec;
//	vec.push_back(10);
//	vec.push_back(50);
//	vec.push_back(20);
//	vec.push_back(30);
//	vec.push_back(10);
//	sort(vec.begin(), vec.end());
//	auto unique_end = unique(vec.begin(), vec.end());
//	//vec.erase(unique_end, vec.end());
//
//	for_each(vec.begin(), vec.end(), print);
//	return 0;
//}


//bool rule(string str)
//{
//	if (str.size() > 2)
//		return true;
//	else
//		return false;
//}
//void print(string str)
//{
//	cout << str << " ";
//}
//int main()
//{
//	vector<string>vec;
//	vec.push_back("abcd");
//	vec.push_back("abcde");
//	vec.push_back("abcdf");
//	vec.push_back("cd");
//	vec.push_back("ab");
//	auto ret=partition(vec.begin(), vec.end(), rule);
//	for_each(ret, vec.end(), print);
//	return 0;
//}

//bool rule(string str)
//{
//	if (str.size() > 10)
//		return true;
//	else
//		return false;
//}
//int main()
//{
//	vector<string>vec;
//	vec.push_back("abcd");
//	vec.push_back("abcde");
//	vec.push_back("abcdf");
//	vec.push_back("cd");
//	vec.push_back("ab");
//	/*auto f=[vec]()mutable {vec.at(0)="ab"; };
//	f();*/
//
//	for_each(vec.begin(), vec.end(), [](string val) {cout << val<<" "; });
//
//
//	return 0;
//}


//int main()
//{
//	auto f = [](int x, int y)mutable->int { x++; y++; return x + y; };
//	cout << f(10,50) << endl;
//
//
//	return 0;
//}


//int main()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	int ret = count_if(vec.begin(), vec.end(), [](int val) {if (val < 5)return true; else return false; });
//	cout << ret << endl;
//
//	return 0;
//}


//bool check_num(int val1,int val2)
//{
//	return val1 > val2;
//}
//int main()
//{
//	int val1=5;
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	//auto check = bind(check_num, _1, 6);
//	auto t = find_if(vec.begin(), vec.end(), bind(check_num, _1, val1));
//	cout << *t << endl;
//
//
//	return 0;
//} nb