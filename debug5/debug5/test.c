#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//调用堆栈
//栈的特点：顶上进，顶上出
void test2()
{
	printf("hehe");
}
void test1()
{
	test2();

}
void test()
{
	test1();

}
int main()
{
	test();
}