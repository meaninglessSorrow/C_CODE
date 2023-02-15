#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>

char* my_strcpy(char* dest, const char* src)
{
	//断言
	//assert中可以放一个表达式，表达式的结果如果为假，就报错，如果为真啥事都不发生
	//assert其实在release版本中优化了
	assert(dest && src);
	char* ret = dest;
	while (*dest++ = *src++)//'\0'作为结束标志，并且赋给*dest,先复制，再判断
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
	//链式访问 把一个函数的返回值作为另外一个函数的参数
	printf("%s\n", my_strcpy(arr3, p));
	return 0;
}

//char arr1[] = { "hello" };
//char arr2[] = { "hello" };//arr1和arr2地址不同
//char* p = "hello";
//char* p2 = "hello";//p和p2指向的地址相同