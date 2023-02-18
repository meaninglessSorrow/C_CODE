#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

char* de_strcat(char*s1, const char* s2)
{
	/*char* pt = (char*)s1;
	char* p = (char*)s1+1;
	while (*--p = *s2++)
	{
		;
	}
	return pt;*/
	char* p = s1;
	while (*s1)
	{
		s1++;
	}
	while (*s1++ = *s2++)
	{
		;
	}
	return p;
}

int main()
{
	char arr1[20] = { "hello " };
	char arr2[] = { "world" };
	char *re=de_strcat(&arr1, arr2);
	printf("%s", re);
	return 0;
}