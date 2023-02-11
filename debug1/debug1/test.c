#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//debug版本测试版本
//reease版本发布版本
//VS2022是 IDE—集成开发环境
//编辑器+编译器+调试器
//linux
//gcc 编译器
//       调试器
int main()
{
	int n = 0;
	int a = 0;
	scanf("%d %d", &n, &a);
	//计算
	int sum = 0;
	int i = 0;
	int k = 0;
	for (i = 0;i < n;i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d", sum);
	return 0;
}