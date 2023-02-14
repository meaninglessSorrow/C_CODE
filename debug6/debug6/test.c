#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>


//可以右键点击断点设置条件
int main()
{
	int n = 0;
	/*scanf("%d", &n);*/
	int i = 0;
	int ret = 1;
	int sum = 0;
	for (n = 1;n <=3;n++)
	{
		ret = 1;
		for (i = 1;i <= n;i++)
		{
			ret *= i;
		}
		sum += ret;
	}
	printf("%d", sum);
	/*for (i = 1;i <=n;i++)
	{
		ret *= i;
	}
	printf("%d\n", ret);*/
	return 0;
}