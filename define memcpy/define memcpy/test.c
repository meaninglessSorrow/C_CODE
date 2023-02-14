#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

void* de_memcpy(void* e1, const void* e2, int n)
{
	void* re = e1;
	while (n--)
	{
		*(char*)e1 = *(char*)e2;
		++(char*)e1;
		++(char*)e2;
	}
	return re;
}

int main()
{
	char arr1[20] = { "arm"};
	char arr2[10] = { "rmy" };
	//strcpy(arr1 + 1,arr2);
	/*memcpy(arr1 + 2, arr2+1, 2);*/
	char*p=(char*)de_memcpy(arr1 + 1, arr2, 3);
	printf("%s\n", arr1);
	printf("%s\n", p);
	return 0;

}