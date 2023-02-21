#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

char* cmp( char* arr1,  char* arr2)
{
	char* s1 = arr1;
	char* s2 = arr2;
	while (*arr1)
	{
		s1 = arr1;
		s2 = arr2;
		while (*s1!='\0' && *s2!='\0' && *s1 == *s2)
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return arr1;
		}
		arr1++;
	/*	s1 = arr1;
		s2 = arr2;*/
	/*	*s1 = *arr1;
		*s2 = *arr2;*/
	}
	return NULL;
}

int main()
{
	char arr1[] = "abbcdef";
	char arr2[] = "bcde";
	char* p = cmp(arr1, arr2);
	if (p == NULL)
	{
		printf("NULL");
	}
	else
	{
		printf("%s", p);
	}return 0;
}