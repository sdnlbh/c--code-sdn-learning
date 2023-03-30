#include <iostream>
using namespace std;

class student
{
private:
	int age;
	int money=0;
	char name[10];
	char number[10];


public:
	void set_age(int n)
	{
		age = n;
	}

	void add_money(int n)
	{
		money += n;
	}

	void cost_money(int n)
	{
		money -= n;
	}

	void set_name()
	{
		scanf_s("%s", &name,10);
	}

	void set_number()
	{
		scanf_s("%s", &number,10);
	}

	void show_info()
	{
		cout << name << endl << age << endl << number << endl << money;
	}


};


int main()
{
	student a1;
	a1.set_name();
	a1.set_age(18);
	a1.set_number();
	a1.add_money(100);//这里如果不初始化变量会出现随机值
	a1.show_info();

	return 0;
}