#include<iostream>
#include<vector>
#include<deque>

using namespace std;



//int main()
//{
//	vector<int>vec{ 1,2,3 };
//	find(vec.begin(), vec.end(), 1);
//	vector<int>vec2{ 4,5,6 };
//	vec.swap(vec2);
//	cout<<vec[0]<<endl;
//	deque<int>que;
//	que[0];
//}


class Complex
{
public:
	Complex(int r = 0, int i = 0)
		:mreal(r)
		, mimage(i)
	{
	}
	Complex operator+(const Complex& c)//成员方法
	{
		return Complex(c.mreal + mreal, c.mimage + mimage);
	}
	void show()
	{
		cout << "meral: " << mreal << " " << "mimage: " << mimage << endl;
	}
private:
	int mreal;//实部
	int mimage;//虚部

	friend Complex operator+(const Complex& c1, const Complex& c2);
	friend istream& operator>>(istream& in, Complex& src);
};

Complex operator+(const Complex& c1, const Complex& c2)//全局重载
{
	return Complex(c1.mreal + c2.mreal, c1.mimage + c2.mimage);
}
istream& operator>>(istream& in, Complex& src)
{
	in >> src.mreal >> src.mimage;
	return in;
}

int main()
{
	Complex c1;
	Complex c2;
	cin >> c1 >> c2;
	

}