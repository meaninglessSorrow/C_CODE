#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	//int a[4] = { 1,2,3,4 };
	//int(*p)[4] =&a;
	//for (int i = 0;i < 4;i++)
	//{
	//	printf("%d ",(*p)[i]);
	//}
	//printf("\n");
	//const char* pt = "abcdef";
	//pt = "bcd";
	//printf("%s\n", pt);
	//printf("%d\n", sizeof('a'));
	//strlen传的是地址
	//发生运算就要整形提升
	//取指针p的地址 ，与原字符串无关
	//sizeof里面的表达式不会发生运算
	//sizeof（* （a【3】）），这样呢
		//地址减地址是之间元素个数
	short arr[2][3] = { 1,2,3,4,5,6 };
	printf("%d %p %p", &arr[0][1] - &arr[0][0],&arr[0][0],&arr[0][1]);
	/*	p = a[0];*/
	return 0;
}