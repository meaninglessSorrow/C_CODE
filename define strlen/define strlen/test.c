#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//数数
size_t de_strlen1(const char* arr)
{
	int count = 0;
	while (*arr != '\0')
	{
		count++;//过一位，数一个
		arr++;
	}
	return count;
}

//指针-指针
size_t de_strlen2(const char* arr)
{
	const char* arr1 = arr;
	while (*arr != '\0')
	{
		arr++;//放在while中会多移一位
	}
	return arr- arr1;
}

//递归
size_t de_strlen3(const char* arr)
{
	if (*arr != '\0')
	{
		return 1 + de_strlen3(arr + 1);
	}
	else
		return 0;
}


int main()
{
	char arr[] = { "abcdef" };
	int re1=de_strlen1(arr);
	printf("%d\n", re1);

	int re2 = de_strlen2(arr);
	printf("%d\n", re2);

	int re3 = de_strlen3(arr);
	printf("%d\n", re3);
	return 0;
}