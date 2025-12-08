#define _CRT_SECURE_NO_WARNINGS
#include"test.h"

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = add(a, b);
//	cout << ret << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	double a=3.14;
//	int b = 20;
//	//int ret = add(a, b);
//	//cout << add(a, b) << endl;
//	///double ret = add(a, b);
//	cout << add(a, b) << endl;
//
//	return 0;
//}
//template <typename elemType1, typename elemType2>
//
//auto add(elemType1 x, elemType2 y)
//{
//	return x + y;
//}
//
//int main()
//{
//	double a = 3.14;
//	int b = 20;
//	
//	cout << add(a, b) << endl;
//
//	return 0;
//}

//template <typename elemType1, typename elemType2>
//
//auto add(elemType1 x, elemType2 y)
//{
//	return x + y;
//}
//
//int main()
//{
//	double a = 3.14;
//	int b = 20;
//	
//	cout << add(a, b) << endl;
//
//	return 0;
//}

//#include<vector>
//template <typename elemtype>
//elemtype* find(elemtype first, elemtype end, elemtype value)
//{
//	if (!first || !end)
//	{
//		return 0;
//	}
//	else
//	{
//		for (;first!=end; ++first)
//		{
//			if (*first == value)
//			{
//				return first;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	vector<int>vec={1, 2, 3, 4, 5, 6, 7, 8, 9};
//	//cout << vec[0];
//	int value = 0;
//
//	cin >> value;
//	//int* first =begin(vec);
//	//int* end = end(vec);
//	find(begin(vec), end(vec), value);
//	
//	return 0;
//}

//#include<vector>
//int main()
//{
//	vector<int> vec;
//	vector<int>::iterator iter = vec.begin();
//
//	return 0;
//}

template<typename T>
void sort(T arr[], int len)
{ 
	int min= 0;
	for (size_t i = 0; i < len-1; i++)
	{
		int min = i;
		for (size_t j = i+1; j < len; j++)
		{
			if (arr[min] > arr[j])
				min = j;
		}
		if (min != i)
		{
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
	

}
int main()
{
	char arr[10] = { "adfghc"};
	int len = sizeof(arr)/sizeof(arr[0]);
	sort(arr, len);
	for (size_t i = 0; i < len; i++)
	{
		cout << arr[i]<<" ";
	}
	cout << endl;
	return 0;
}