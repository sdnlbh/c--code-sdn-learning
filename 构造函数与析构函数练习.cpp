#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<string.h>
using namespace std;

class juice
{
private:
	char name[19] ;
	int appraise ;
public:

	void init()
	{
		memset(name, '0', sizeof(name));
		int a = 0;
	}

	juice(const char* arr,int a)
	{
		void init();
		strcpy(name, arr);
		appraise = a;
		cout << "调用构造函数" << endl;
	}
	~juice()
	{
		cout << "调用析构函数";
	}
	void show()
	{
		cout << "name:" << name << endl << "appraise:" << appraise << endl;
	}
};

int main()
{
	juice coco("coco",5);//若构造函数没有参数则不加括号。
	coco.show();
	return 0;
}
