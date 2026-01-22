#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
#include<list>
#include<fstream>
#include<string>
#include<numeric>
#include<memory>
using namespace std;
//int main()
//{
//	vector<int>vec;
//	list<int>lst;
//	fill_n(back_inserter(vec), 10, 6);
//	auto it = inserter(vec, vec.begin());
//	*it = 10;
//	vec.insert(vec.begin(), 10);
//	/*auto iter=unique(vec.begin(), vec.end());
//	vec.erase(iter, vec.end());*/
//	unique_copy(vec.begin(), vec.end(), back_inserter(lst));
//	for_each(lst.begin(), lst.end(), [](int val) {cout << val<<" "; });
//
//
//	return 0;
//}



//int main()
//{
//	ifstream ifs("1.txt");
//	istream_iterator<string> str_it(ifs);
//	istream_iterator<string> str_it_eof;
//	vector<string>vec;
//	string str;
//	while (str_it != str_it_eof)
//	{
//		vec.push_back(*str_it++);
//	}
//	for_each(vec.begin(), vec.end(), [](string val) {cout << val << " "; });
//	/*istream_iterator<int> int_it(cin), int_eof;
//	vector<int>vec(int_it, int_eof);
//	cout << vec.at(0)<<endl;
//	for_each(vec.begin(), vec.end(), [](int val) {cout << val << " "; });*/
//	/*istream_iterator<int> int_it(cin), int_eof;
//	cout << accumulate(int_it, int_eof, 0) << endl;
//	return 0;*/
//}


//int main()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	ostream_iterator<int> out_int_it(cout, " ");
//	copy(vec.begin(), vec.end(), out_int_it);
//	/*for (auto val : vec)
//		out_int_it = val;
//	cout << endl;*/
//	return 0;
//}
//




//int main()
//{
//	vector<int>vec;
//	/*vec.push_back(10);
//	vec.push_back(40);
//	vec.push_back(30);
//	vec.push_back(50);
//	vec.push_back(20);
//	sort(vec.begin(), vec.end());
//	for_each(vec.begin(), vec.end(), [](int val) {cout << val << " "; });*/
//	istream_iterator<int> in_int_it(cin);
//	istream_iterator<int> in_int_eof;
//
//	while (in_int_it != in_int_eof)
//	{
//		vec.push_back(*in_int_it++);
//	}
//	sort(vec.begin(), vec.end());
//	ostream_iterator<int> out_int_it(cout, " ");
//	unique_copy(vec.begin(), vec.end(), out_int_it);
//
//	return 0;
//}



//int main()
//{
//	vector<int>vec;
//	ifstream ifs("1.txt");
//	istream_iterator<int> in_int_it(ifs);
//	istream_iterator<int> in_int_eof;
//	while (in_int_it != in_int_eof)
//	{
//		vec.push_back(*in_int_it++);
//	}
//	ofstream ofs3("3.txt");
//
//	ofstream ofs2("2.txt");
//
//	ostream_iterator<int> out_int_it3(ofs3, "\n");
//	ostream_iterator<int> out_int_it2(ofs2, "\n");
//	for (auto val : vec)
//	{
//		if (val % 2 == 0)
//		{
//			out_int_it2 = val;
//			
//		}
//		else if (val % 2 != 0)
//		{
//			out_int_it3 = val;
//			
//		}
//	}
//	return 0;
//}



//int main()
//{
//	string str = "abcd";
//	cout << string(str.rbegin(), str.rend()) << endl;
//
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
//
//	for_each(vec.rend().base(), vec.rbegin().base(),[](int val) {cout << val << " "; });
//	for_each(vec.rend().base(), vec.end(), [](int val) {cout << val << " "; });
//	
//
//	return 0;
//}
//


//int main()
//{
//	list<int>lst;
//	lst.push_back(10);
//	lst.push_back(10);
//	lst.push_back(20);
//	lst.push_back(10);
//	lst.push_back(40);
//	lst.unique();
//	for_each(lst.begin(), lst.end(), [](int val) {cout << val << "\n"; });
//	vector<int>vec;
//	vec.push_back(10);
//	vec.push_back(10);
//	vec.push_back(40);
//	vec.push_back(10);
//	vec.push_back(20);
//	auto it=unique(vec.begin(), vec.end());
//	vec.erase(it, vec.end());
//	for_each(vec.begin(), vec.end(), [](int val) {cout << val << " "; });
//
//	return 0;
//}

#include<map>
#include<set>
//int main()
//{
//	map<string, int>mp;
//	string word;
//	while (cin >> word)
//	{
//		++mp[word];
//	}
//	for (const auto w:mp)
//	{
//		cout << w.first << " " << w.second << " " << endl;
//	}
//
//
//	return 0;
//}


//int main()
//{
//	string str;
//	map<string, int>mp{ {"zs",18},{"ls",20},{"ww",22}};
//	
//	set<int>st{ 1,3,1,2,4 };
//	for_each(st.begin(), st.end(), [](int val) {cout <<val<< " "; });
//	return 0;
//}



//int main()
//{
//	list<int>lst{ 1,2,3,4 };
//	map<list<int>, string>mp{ {{1,2,3,4},"abcd"},{{4,5,6,7},"efgh"}};
//	for (auto n : mp)
//	{
//		cout<<n.first.
//	}
//
//
//
//	return 0;
//}


//int main()
//{
//	vector<int>vec;
//	list<int>lst;
//	map<vector<int>::iterator, int>mp{ {vec.begin(),0},{vec.begin()+1,1}};
//	map<list<int>::iterator, int>mp2{ {lst.begin(),0},{lst.begin()++,1}};
//
//
//
//	return 0;
//}


//class m_sort
//{
//public:
//	bool sort(int e1,int e2)
//	{
//		return e1 > e2;
//	}
//};
//bool my_sort(int e1,int e2)
//{
//	return e1 > e2;
//}
//int main()
//{
//	m_sort s;
//	//set<int, decltype(my_sort)*>st(my_sort);
//	set<int, >st;
//
//	st={ 1,2,3,4,5 };
//	for_each(st.begin(), st.end(), [](int val) {cout << val << "\n"; });
//	return 0;
//}



//int main()
//{
//	pair<string, int>pr;
//	vector< pair<string, int>>vec;
//	vec.push_back({ "zs",18 });
//	vec.push_back({ "ls",20 });
//	vec.push_back({"ww",22});
//	for_each(vec.begin(), vec.end(), [](pair<string, int>pi) {cout << pi.first << " " << pi.second << endl; });
//	/*for (auto n : vec)
//	{
//		cout<<n.first
//	}*/
//	return 0;
//}


//int main()
//{
//	map<string, int>mp;
//	mp.insert({ "zs",18 });
//
//
//
//	return 0;
//}


//int main()
//{
//	/*vector<int>vec;
//	vec[0] = 1;
//	cout << vec[0] << endl;*/
//	//map<string, int>mp;
//	//mp.insert({ "zs",18 });
//	//mp.insert({ "ls",20 });
//	//mp.insert({ "ww",22 });
//	//cout << mp["zs"] << endl;
//	//cout << mp.at("zs") << endl;
//
//	////mp.erase(mp.begin(),mp.end());
//	//for_each(mp.begin(), mp.end(), [](pair<string, int>pi) {cout << pi.first << " " << pi.second << endl; });
//
//
//	return 0;
//}



//int main()
//{
//	map<int, int>mp{ {0,1},{1,2},{2,3},{3,4} };
//	auto it1 = mp.find(0);
//	cout << (*it1).first <<":" <<(*it1).second << endl;
//	auto it2 = mp.lower_bound(1);
//	cout << (*it2).first << ":" << (*it2).second << endl;
//	auto it3 = mp.upper_bound(1);
//	cout << (*it3).first << ":" << (*it3).second << endl;
//	multimap<int, int>mulmp{ {0,0}, { 0,0 },{0,0},{0,0},{0,0} };
//	auto it=mulmp.equal_range(0);
//	cout << it.first->second<<":"<<it.first->second<<endl;
//	cout << it.second->first << ":" << it.second->second;
//
//	/*int ret=mulmp.count(0);
//	cout << ret << endl;*/
//	return 0;
//}



//int main()
//{
//	auto ptr = make_shared<vector<int>>();
//
//
//	return 0;
//}