#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//���ö�ջ
//ջ���ص㣺���Ͻ������ϳ�
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