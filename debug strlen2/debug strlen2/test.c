#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>

size_t my_strlen(char* arr)
{
	assert(arr!=NULL);
	char* eos = arr;
	while(*arr)
	{
		arr++;
	}
	return arr - eos;

	/*if (*arr != '\0')
	{
		return 1 + my_strlen(arr+1);
	}
	else
	{
		return 0;
	}*/

	/* unsigned int count=0;
	while (*arr++!='b')
	{
		count++;
	}
	return count;*/
}

int main()
{
	char arr[] = { "abcdef" };
	printf("%d\n",my_strlen(arr));
	return 0;
}