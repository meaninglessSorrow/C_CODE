#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

		//const 修饰指针变量的时候
		//1.const放在*的左边，const修饰的是指针指向的内容，表示指针指向的内容，不能通过指针来改变了；但是指针变量本身可以修改
		 int n = 1000;
		const int num = 10;
		const int* p = &num;//等价于int const*p
		//*p= 20;//err
		p = &n;//ok

	//2.const放在*的右边，const修饰的指针变量本身，表示指针变量的内容不能被修改，但是指针指向的内容，可以通过指针来改变
	int* const pp = &num;
	*pp = 20;
	//pp = &n;//err

	const int* const qq = &n;//两个都不能改
	*qq = 20;
	qq = &num;

	printf("%d\n", num);

		//char arr[] = { "hello" };
		//const char* pt = arr;
		//char** ph = &pt;
		//*(*ph + 2) = 'h';
		//pt = "world";
		////*(pt + 2) = 'h';
		//printf("%d\n", num);
		//printf("%s\n", arr);
		//printf("%s", pt);

		return 0;
}