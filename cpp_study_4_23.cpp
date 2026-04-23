#include<iostream>
using namespace std;



class Complex
{
public:
	Complex(int r=0,int i=0)
		:mreal(r)
		,mimage(i)
	{ }
	Complex operator+(const Complex& c)
	{
		return Complex(c.mreal + mreal, c.mimage + mimage);
	}
	void show()
	{
		cout << "meral: " << mreal <<" " << "mimage: " << mimage << endl;
	}
private:
	int mreal;//Êµ²¿
	int mimage;//Ðé²¿

	friend Complex operator+(const Complex& c1, const Complex& c2);

};

Complex operator+(const Complex& c1,const Complex& c2)
{
	return Complex(c1.mreal + c2.mreal, c1.mimage + c2.mimage);
}

int main()
{
	Complex c1(10,10),c2(20,20);
	Complex c3 = c1 + c2;
	Complex c4 = c1 + 10;
	Complex c5= 10 + c1;
	c3.show();
	c4.show();
	c5.show();
}