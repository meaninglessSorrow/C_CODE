#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

char* de_strcpy( char*s1,const char*s2)
{
	char* ph = s1;
	while (*s1++=*s2++)
	{
		;
	}
	return ph;
}

int main()
{
	char arr1[10] = { 0 };
	char arr2[] = { "arm" };
	char arr3[10] = { "homeless" };
	de_strcpy(arr1, arr2);
	de_strcpy(arr3, arr2);
	printf("%s\n", arr1);
	printf("%s\n", arr3);//将arr2中的\0也拷贝到arr3中


	//char* ph = "abcdef";//默认为常量；
	//char a[]= { "abcdef" };
	//char* p = a;
	//*p = 'f';
	//printf("%s", p);

	return 0;
}