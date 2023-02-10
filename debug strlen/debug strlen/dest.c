#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

int my_strlen(const char* arr)
{
	assert(arr);
	int count = 0;
	/* 1 + my_strlen(arr + 1);*/
	while (*arr++)
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = { "abcdef" };
	printf("%d\n", my_strlen(arr));
	printf("%s\n", arr + 1);
	return 0;
}