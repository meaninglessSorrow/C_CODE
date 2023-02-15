#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//本代码仅在特定环境下适用
//栈区的习惯是先使用高地址，后使用低地址
//数组元素地址由低到高
int main()
{
	int i = 0;//&i>arr,把arr放在i前面会报错，是因为程序结束了，反过来，不会报错，因为程序正处于死循环中
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//在release版本下不会发生死循环
	/*printf("%p\n", &arr[9]);
	printf("%p\n", arr);
	printf("%p\n", &i);*/
	for (i = 0;i <=12;i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}

	return 0;
}