#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//函数栈帧
// 栈区先使用高地址，后使用低地址
//依靠ebp和esp两个寄存器来维护
//ebp--栈低指针 
//esp--栈顶指针
//word一个字两个字节，dword双字四个字节
//压栈：从顶上放进一个元素（push)
//出栈：从顶上删除一个元素(pop)
//pop edp :解释就是把栈顶的元素弹出来放到edp中去

//寄存器，是集成到CPU上的
//硬盘
//内存
// 寄存器

//开辟空间的方式取决于编译器

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;//把z的值放到一个寄存器中去，z出这个函数会被销毁
}

//main函数也是被其他函数调用的
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = Add(a, b);//传参将a,b拷贝一份，从右向左push

	printf("%d", c);

	return 0;
}