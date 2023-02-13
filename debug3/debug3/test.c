#define _CRT_SECURE_NO_WARNINGS 1

int a = 10;
//需要先调试才能看到监视
int main()
{
	int b = 20;
	int arr[12] = { 1,2,3,4,5,6,7,8,9 };
	char arr2[] = { "abcdef" };
	int* p = arr;//&p既能看到指针p的地址，也能看到p里面的内容p指向的地址
	//test(arr);

	return 0;
}