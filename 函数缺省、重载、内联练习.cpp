#include <iostream>
using namespace std;

inline int add(const int& a=1,const int& b=1)
{
	return a+b;
}

void add(int a, int b, int c)
{
	a += b;
	cout << a;
}

int main()
{
	int a = 3;
	int b = 4;
	int c = 0;
	c = add();
	add(c, c, 1);
	return 0;
}
