#include<iostream>
using namespace std;

int& add(int& a, int& b,const int& x)
{
	static int c = a + b + x;//������static�����������ݱ����ٶ�����

	return c;
}

int main()
{
	int aa = 8, bb = 9;
	int& c = aa;
	int& d = bb;
	const int& x = 'x';//const�������Զ�ת��
	int& e = add(c, d, x);
	cout << e;



	return 0;
}