#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<memory>
#include<string>
#include<vector>
#include<new>
#include<algorithm>
using namespace std;
//int main()
//{
//	shared_ptr<string>p1=make_shared<string>("zs");
//	auto p2 = make_shared<string>("zs");
//	vector<int>vec;
//	auto p_n_vec1 = new vector<int>(vec);
//
//	auto p_n_vec2 = new(nothrow) vector<int>{ 1,2,3 };
//
//
//	return 0;
//}
//auto pv = new vector<int>;
//decltype(pv) retu()
//{
//	return pv;
//}
//decltype(pv) c_pv(decltype(pv) pv)
//{
//	int i = 0;
//	while (cin >> i)
//	{
//		(*pv).push_back(i);
//	}
//	return pv;
//}
//void print_pv(decltype(pv) pv)
//{
//	for_each(pv->begin(), pv->end(), [](int val) {cout << val << " "; });
//}
//int main()
//{
//	auto ret_pv=retu();
//	auto ret2_pv=c_pv(ret_pv);
//	print_pv(ret2_pv);
//	delete pv;
//	pv = nullptr;
//
//	return 0;
//}





//auto pv = make_shared<vector<int>>(); // 修正：加上括号以调用构造函数
//decltype(pv) retu()
//{
//	return pv;
//}
//decltype(pv) c_pv(decltype(pv) pv)
//{
//	int i = 0;
//	while (cin >> i)
//	{
//		pv->push_back(i); 
//	}
//	return pv;
//}
//void print_pv(decltype(pv) pv)
//{
//	for_each(pv->begin(), pv->end(), [](int val) {cout << val << " "; });
//}
//int main()
//{
//	auto ret_pv=retu();
//	auto ret2_pv=c_pv(ret_pv);
//	print_pv(ret2_pv);
//	
//
//	return 0;
//}


//int main()
//{
//	auto p = make_shared<int>(); 
//
//	//shared_ptr<int>p2(new int(10));
//	int* pi = p.get();
//	delete pi;
//	//auto sp = make_shared<int>();
//	return 0;
//}


//int main()
//{
//	int* pi (new int(10));
//	unique_ptr<int>p(pi);
//	
//
//
//	return 0;
//}


//int main()
//{
//	//auto pi = new int[10] {1,2,3};
//	//delete [] pi;
//	/*shared_ptr<int[]>pi;
//	pi.reset();*/
//	//unique_ptr<int[]>pi;
//	shared_ptr<int>pi(new int[10], [](int* p) {delete[]p; });
//	pi.reset();
//	return 0;
//}

//int main()
//{/*
//	 char* ch1 = "ab";
//	const char* ch2 = "cd";
//	const char ch3[10] = strcat(ch1, ch2);*/
//	/*const auto pi = make_shared<const char*>("ab"+"cd");*/
//
//
//	//const char* ch3 = ch1 + ch2;
//	/*string str1 = "ab";
//	string str2="cd";
//	string str3 = str1 + str2;*/
//
//
//	return 0;
//}


//int main()
//{
//	char ch[10];
//
//	cin >> ch;
//	
//	shared_ptr<char[]>pch(ch);
//
//
//	return 0;
//}
//
//int main()
//{
//	allocator<string>alloc;
//	auto pstr = alloc.allocate(3);
//	alloc.construct(pstr, 10, 'c');
//	cout << *pstr << endl;
//	alloc.destroy(pstr);
//	alloc.deallocate(pstr, 3);
//	return 0;
//}



