#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
#include<functional>
using namespace std;

//int main()
//{
//	//实际代码
//	vector<int>vec{ 1,2,3 };
//	for (auto v : vec)
//	{
//		cout << v << endl;
//	}
//
//	//编译器展开
//	auto it_begin = vec.begin();
//	auto it_end = vec.end();
//	for (; it_begin < it_end; ++it_begin)
//		cout << *it_begin << endl;
//}
//template<typename T>
//bool mygreater(T a, T b)
//{
//	return a > b;
//}
//template<typename T>
//bool myless(T a, T b)
//{
//	return a < b;
//}
//
//template<typename T, typename Compare>
//bool compare(T a, T b, Compare comp)
//{
//	return comp(a, b);
//}
//
//int main()
//{
//	cout << compare(10, 20, mygreater<int>);
//	cout << compare(10, 20, myless<int>);
//
//}

//template<typename T>
//class mygreater
//{
//public:
//	bool operator()(T a, T b)
//	{
//		return a > b;
//	}
//};
//template<typename T>
//class myless
//{
//public:
//	bool operator()(T a, T b)
//	{
//		return a < b;
//	}
//};
//template<typename T, typename Compare>
//bool compare(T a, T b, Compare comp)
//{
//	return comp(a, b);
//}
//
//
//int main()
//{
//	priority_queue<int,vector<int>,greater<int>()>que;
//
//	cout << compare(10, 20, mygreater<int>());
//	cout << compare(10, 20, myless<int>());
//
//}


int main()
{
	using namespace placeholders;
	vector<int>vec{ 12,23,34,45,56 };
	auto it=find_if(vec.begin(), vec.end(), bind(greater<int>(), _1,30));
	cout << *it << endl;
}