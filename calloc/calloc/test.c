#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

int main()
{
	//会初始化为0
	int* p =(int*) calloc(10, sizeof(int));
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	p = NULL;
	return 0;
}