#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 1;
	int n = (++i) + (++i) + (++i);
	//vs 12 在反汇编中查看
	//gcc 10
	printf("%d\n", i);
	return 0;
}