#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	//����
	//assert�п��Է�һ�����ʽ�����ʽ�Ľ�����Ϊ�٣��ͱ������Ϊ��ɶ�¶�������
	//assert��ʵ��release�汾���Ż���
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++)//'\0'��Ϊ������־�����Ҹ���*dest,�ȸ��ƣ����ж�
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[20] = { "xxxxxxxxxxxxxx" };
	char arr2[] = { "hello" };
	/*strcpy(arr1, arr2);*/
	my_strcpy(arr1, arr2);
		printf("%s\n", my_strcpy(arr1, arr2));
	char arr3[20] = { 0 };
	char* p = "hello";
	//��ʽ���� ��һ�������ķ���ֵ��Ϊ����һ�������Ĳ���
	printf("%s\n", my_strcpy(arr3, p));
	return 0;
}

//char arr1[] = { "hello" };
//char arr2[] = { "hello" };//arr1��arr2��ַ��ͬ
//char* p = "hello";
//char* p2 = "hello";//p��p2ָ��ĵ�ַ��ͬ