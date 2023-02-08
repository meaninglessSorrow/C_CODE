#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<ctype.h>

enum equ
{
	equitable,
	inequity,
}able=inequity;

int de_atio(const char* arr)
{
	assert(arr);
	if (*arr =='\0')
	{
		return 0;
	}
	while (isspace( * arr))
	{
			arr++;
	}
	int flag = 1;
	if (*arr == '-')
	{
		flag = -1;
		arr++;
	}
	else if (*arr == '+')
	{
		arr++;
	}
	if (isalpha(*arr))
	{
		return 0;
	}
	long long ret = 0;
	while (isdigit(*arr))
	{
		ret = ret * 10 +flag* (*arr - '0');
		if (ret > INT_MAX)
		{
			return INT_MAX;
		}
		else if (ret < INT_MIN)
		{
			return INT_MIN;
		}
		arr++;
	}
	if (*arr == '\0')
	{
		able = equitable;
	}
	return ret;
}

int main()
{
	char arr1[100] = { "     -+12" };
	//printf("%c\n", arr1[1]);
	///*int  ret = atoi(arr1);*/
	/*printf("%d\n", ret);*/
	int ret=de_atio(arr1);
	if (able == 0)
	{
		printf("%d\n", ret);
	}
	else if (able == 1)
	{
		printf("·Ç·¨×Ö·û×ª»»,%d\n",ret);
	}
	return 0;
}