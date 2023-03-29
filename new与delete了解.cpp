#include <iostream>
using namespace std;

int main()
{
	int* p1 = new int(90);//申请单个内存并初始化
	cout << *p1 << endl;
	int* p2 = new int[10];//申请连续内存
	for (int i = 0; i < 10; i++)
	{
		p2[i] = i;
		cout << "p2[" << i << "]=" << p2[i] << endl;

	}
	delete p1;
	delete[] p2;//释放一段内存

	return 0;
}