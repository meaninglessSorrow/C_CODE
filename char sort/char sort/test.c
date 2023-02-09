#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int a = 1;
	char* p = (char*)&a;
	if (*p == 1)
		printf("Ð¡¶Ë");
	else
		printf("´ó¶Ë");
	//printf("%p", a);
	return 0;
}
