#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<iostream>
using namespace std;
int main()
{
	char arr[] = { "Happy Fools' Day" };
	char arr2[17] = { "                " };
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		arr2[left] = arr[left];
		arr2[right] = arr[right];
		cout << arr2;
		Sleep(1000);
		system("cls");
		left++;
		right--;
	}
	printf("%s", arr2);

	return 0;
}
//day2
