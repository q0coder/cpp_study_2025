#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
using namespace std;
//using namespace std;
//unsigned int a[10];
////string arr1[10];
////int arr2;
//int main()
//{
//	int arr3[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int arr4[10] = {0,1,2,3,4,5,6,7,8,9};
//	vector<int>vec1;
//	vector<int>vec2;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec1.push_back(i);
//		vec2.push_back(i);
//	}
//	int count = 0;
//	//cout << arr1[0] << " " <<  endl;
//	//cout << a[0]+1 << endl;
//	//int* p = &arr4[3];
//	//cout << p[-2] << endl;
//	if (sizeof(arr3) == sizeof(arr4) && sizeof(arr3[0]) == sizeof(arr4[0]))
//	{
//		for (size_t i = 0; i < 10; i++)
//		{
//			if (arr3[i] == arr4[i])
//				count++;
//		}
//		if (count == 10)
//			cout << "arr3==arr4" << endl;
//	}
//	if (vec1 == vec2)
//		cout << "vec1==vec2" << endl;
//	return 0;
//}



//int main()
//{
//	const char ca[] = { 'a','b','c','d','\0' };
//	string str = ca;
//	const char* ch = str.c_str();
//	cout << ch << endl;
//	
//	cout << str << endl;
//	/*const char* p = ca;
//	while (*p)
//	{
//		cout << *p << endl;
//		p++;
//	}*/
//	vector<char>vec (begin(ca), end(ca));
//	cout << vec[0] << endl;
//	return 0;
//}

//#include<algorithm>
//int main()
//{
//	/*int i = 0;
//	cout << i << " " << ++i << endl;*/
//	//int a = 10;
//	/*int b = 20;
//	int c = 30;
//	int d = 40;*/
//	//vector<int>vec = {1,2};
//	/*int i;
//	double d;
//	i = d = 3.5;
//	if (i = 42)
//		cout << "?" << endl;*/
//	//int grade = 80;
//	//cout << (grade < 60) ? "fail" : "pass";
//	//cout << grade < 60 ? "fail" : "pass";
//	//bool a = true;
//	//bool ret = cout << a>10 ;
//	/*int b = 10;
//	if (a < b)
//	{
//		cout << "a>b";
//	}*/
//	//d = i = 3.5;
//	//cout << d << " " << i << endl;
//	//double a={10.4}
//	//cout << max(a, b) << endl;
//	return 0;
//}


//int main()
//{
//	vector<int>vec;
//	for (size_t i = 0; i < 10; i++)
//	{
//		vec.push_back(i);
//	}
//	for (vector<int>::iterator it=vec.begin();it!=vec.end();it++)
//
//	{
//		*it % 2 == 0 ? *it = *it : *it = 2 * *it;
//	}
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
//
//	{
//		cout << *it<<endl;
//	}
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
//	cout << sizeof(vec) << endl;
//
//
//	return 0;
//}

//int main()
//{
//	/*int i = 5;
//	int j = 2;
//	double d = static_cast<double>(i) / j;
//	cout << d << endl;*/
//	/*int a = 10;
//	int b = 20;
//	const int *p = &a;
//	int *pl=const_cast<int*>(p);
//	*pl = b;
//	cout << *p << endl;*/
//	return 0;
//}


//int main()
//{
//	int i = 2;
//	switch (i)
//	{
//	case 1:
//		int j = 0;
//		break;
//	case 2:
//		j++;
//		cout << j << endl;
//		break;
//		
//	}
//	
//
//
//	return 0;
//}

//int main()
//{
//	char ch;
//	cin >> ch;
//	int vowelcnt = 0;
//	switch (ch)
//	{
//	case 'a':case 'e':case 'i':case 'o':case 'u':
//		vowelcnt++;
//	}
//	switch (ch)
//	{
//	case 'a':
//	case 'e':
//	case 'i':
//	case 'o':
//	case 'u':
//		vowelcnt++;
//	}
//
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int a = 10;
//	switch (i)
//	{
//	case a:
//	}
//
//	return 0;
//}

//int main()
//{
//	/*for (size_t i = 0; i < 10; i++)
//	{
//
//	}*/
//	
//	try 
//	{
//		int i = 10;
//		int j = 10;
//		if (i == j)
//			throw runtime_error("i!=j!!!");
//	}
//	catch(runtime_error)
//	{
//		int i = 20;
//		cout << "i!=j";
//	}
//	
//	return 0;
//}

//#include<exception>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	while (true)
//	{
//		try {
//			if (b == 0)
//			{
//				throw exception();
//				
//			}
//			int c = a / b;
//			break;
//
//		}
//		catch (exception)
//		{
//			cout << "b!=0" << endl;
//			cin >> b;
//
//		}
//	}
//	
//
//	return 0;
//}