#include <iostream>
using namespace std;

class juice
{
private:
	char name[19] = { "coco"};
	int appraise = 5;
public:
	void set_name()
	{
		cin >> name;
	}
	void set_appraise()
	{
		cin >> appraise;
	}
	void show()
	{
		cout << "name:" << name << endl << "appraise:" << appraise;
	}


};


int main()
{
	juice spirit;
	spirit.set_name();
	spirit.set_appraise();
	spirit.show();



	return 0;
}//2
