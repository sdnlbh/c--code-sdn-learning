#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include<string.h>
using namespace std;

class juice
{
private:
	char name[19];
	int appraise;
public:

	void init()
	{
		memset(name, '0', sizeof(name));
		int a = 0;
	}

	juice(const char* arr, int a)
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

	juice(const juice& ex)//浅拷贝（不涉及地址）
	{
		void init();
		strcpy(name, ex.name);
		appraise = ex.appraise;
	}

	void show()
	{
		cout << "name:" << name << endl << "appraise:" << appraise << endl;
	}
};


int main()
{
	juice coco("coco", 5);
	coco.show();
	juice coco_cp(coco);
	coco_cp.show();
	return 0;
}