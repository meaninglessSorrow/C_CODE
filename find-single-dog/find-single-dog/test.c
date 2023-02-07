#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void findsingledog(int arr[],int sz,int singledog[2])
{
	int i = 0;
	int count = 0;
	for (i = 0;i < sz;i++)
	{
		count ^= arr[i];
	}
	int pos = 0;
	for (i = 0;i < 32;i++)
	{
		if ((count >>i&1)== 1)
		{
			pos = 1;
			break;
		}
	}
	for (i = 0;i < sz;i++)
	{
		if ((arr[i] >> pos&1) == 1)
		{
			singledog[0] ^= arr[i];
		}
		else
		{
			singledog[1] ^= arr[i];
		}
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int singledog[2] = { 0 };
	findsingledog(arr, sz, singledog);

	printf("%d %d", singledog[0],singledog[1]);
	return 0;
}