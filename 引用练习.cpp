#include<iostream>
using namespace std;

int& add(int& a, int& b,const int& x)
{
	static int c = a + b + x;//若不以static修饰则因数据被销毁而出错

	return c;
}

int main()
{
	int aa = 8, bb = 9;
	int& c = aa;
	int& d = bb;
	const int& x = 'x';//const对引用自动转换
	int& e = add(c, d, x);
	cout << e;



	return 0;
}