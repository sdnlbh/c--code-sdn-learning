#include <iostream>
using namespace std;

int main()
{
	int* p1 = new int(90);//���뵥���ڴ沢��ʼ��
	cout << *p1 << endl;
	int* p2 = new int[10];//���������ڴ�
	for (int i = 0; i < 10; i++)
	{
		p2[i] = i;
		cout << "p2[" << i << "]=" << p2[i] << endl;

	}
	delete p1;
	delete[] p2;//�ͷ�һ���ڴ�

	return 0;
}