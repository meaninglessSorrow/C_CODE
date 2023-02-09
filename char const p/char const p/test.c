#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	//const char* p定义的是一个指向字符型指针变量，既然这样，p的内容，也就是地址可以变，但是指向的内容不可以变。
	//char ch[6] = {"abcde"};在字符串存储中最后都会加上一个结束符'\0'。所以存储5个字符的字符串应该要有6个空间。
	//int ret = strlen(ch);
	//printf("%d\n", ret);
	//const char(* ph)[6] =&ch;
	//ph= 'new';//正确
	//*ph = 'c';//错误
	/*char* const p定义的是一个指向字符型的指针常量，即P是常量，所以地址不可以改，指向的内容可以修改。*/


	char ch1[6] = { "abcde" };
	const char(*ph) = ch1;
	char ch2[4] = { "bit"};
	ph = ch2;//正确
	printf("%s", ph);
	//char a[6] = "abcde";
 //   char* const p = a;/*
	////p = "new"; /*错误*/
	//*p= 'c';/*正确*/
	//printf("%s\n",p);
	////printf("%p", ch);

	return 0;
}