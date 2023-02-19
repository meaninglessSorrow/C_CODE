#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int de_strcmp(const char* s1, const char* s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return 0;
		}
			s1++;
			s2++;
	}
	return *s1 - *s2;
}

int main()
{
	char arr1[] = { "app"};
	char arr2[] = { "apid" };
	int re1=de_strcmp(arr1, arr2);
	char arr3[] = { "app" };
	char arr4[] = { "app" };
	int re2= de_strcmp(arr3, arr4);
	char arr5[] = { "add" };
	char arr6[] = { "app" };
	int re3 = de_strcmp(arr5, arr6);
	if (re1>0)
	{
		printf("arr1>arr2\n");
	}
	else if(re1<0)
	{
		printf("arr1<arr2\n");
	}
	else
	{
		printf("arr1=arr2\n");
	}
	printf("%d\n", re2);
	printf("%d\n", re3);

}