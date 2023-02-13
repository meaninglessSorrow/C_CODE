#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//鼠标右键反汇编能够看到C语言汇编的代码是什么
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	for (i = 0;i < 10;i++)
	{
		arr[i] = 0;
	}

	return 0;
}