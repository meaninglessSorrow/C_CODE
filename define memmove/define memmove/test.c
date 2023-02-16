#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

void* de_memmove(void* dest, const void* src, size_t num)
{
	void* re = dest;

	if (dest<src)
	{
		//前—>后
		while (num--)
		{
			*((char*)dest)++ = *((char*)src)++;
		}
	}
	else if (dest > src)
	{//后—>前
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
	}
	return re;
}

void test1()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9 };
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	de_memmove(arr1, arr1 + 2, 16);
	for (int i = 0;i < sz1;i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
}

void test2()
{
	int arr2[] = { 1,2,3,4,5,6,7,8,9 };
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	/*memmove(arr2 + 2, arr2, 16);*/
	de_memmove(arr2 + 2, arr2, 16);
	for (int i = 0;i < sz2;i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");
}

void test3()
{
	int arr3[] = { 9,8,7,6,5,4,3,2,1 };
	int arr4[] = { 1,2,3,4,5,6,7,8,9 };
	int sz3 = sizeof(arr3) / sizeof(arr3[0]);
	memmove(arr3 + 2, arr4, 16);
	for (int i = 0;i < sz3;i++)
	{
		printf("%d ", arr3[i]);
	}
	printf("\n");
}

int main()
{
	test1();
	test2();
	test3();
	return 0;
}