#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	//int a[4] = { 1,2,3,4 };
	//int(*p)[4] =&a;
	//for (int i = 0;i < 4;i++)
	//{
	//	printf("%d ",(*p)[i]);
	//}
	//printf("\n");
	//const char* pt = "abcdef";
	//pt = "bcd";
	//printf("%s\n", pt);
	//printf("%d\n", sizeof('a'));
	//strlen�����ǵ�ַ
	//���������Ҫ��������
	//ȡָ��p�ĵ�ַ ����ԭ�ַ����޹�
	//sizeof����ı��ʽ���ᷢ������
	//sizeof��* ��a��3��������������
		//��ַ����ַ��֮��Ԫ�ظ���
	short arr[2][3] = { 1,2,3,4,5,6 };
	printf("%d %p %p", &arr[0][1] - &arr[0][0],&arr[0][0],&arr[0][1]);
	/*	p = a[0];*/
	return 0;
}