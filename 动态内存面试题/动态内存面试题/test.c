#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//void  GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//
//void test(void)
//{
//	char* str = NULL;//NULL��ʾû��ָ��Ŀռ�,0��ַ
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//
//int main()
//{
//	test();
//		return 0;
//}

//char*  GetMemory()
//{
//	char*p = (char*)malloc(100);
//	return p;
//}
//
//void test(void)
//{
//	char* str = NULL;//NULL��ʾû��ָ��Ŀռ�,0��ַ
//	str=GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//
//
//int main()
//{
//	test();
//	return 0;
//}

int main()
{

	int a = 3;
	printf("3\n");
	printf(&a);

}