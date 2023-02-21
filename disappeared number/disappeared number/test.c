#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//两个相同的数异或为0，
// 任何数和0异或，结果还为这个数
//int main()
//{
//	int sum=0;
//	int arr[5] = { 1,1,3,2,2 };
//	int arr1[5] = { 1,3,2,2,1 };
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		sum = arr[i] ^ sum;
//	}
//	printf("%d ", sum);
//	int sum1=0;
//	for (i = 0;i < 5;i++)
//	{
//		sum1 = arr1[i] ^ sum1;
//	}
//	printf("%d ", sum1);
//	return 0;
//}

int main()
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr1[9] = { 2,5,6,7,9,1,3,8,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int sum = 0;
	for (i = 0;i < sz;i++)
	{
		sum = arr[i] ^ sum;
	}
	for (i = 0;i < sz-1;i++)
	{
		sum = arr1[i] ^ sum;
	}
	printf("%d\n ", sum);
	return 0;
}