#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//����ջ֡
// ջ����ʹ�øߵ�ַ����ʹ�õ͵�ַ
//����ebp��esp�����Ĵ�����ά��
//ebp--ջ��ָ�� 
//esp--ջ��ָ��
//wordһ���������ֽڣ�dword˫���ĸ��ֽ�
//ѹջ���Ӷ��ϷŽ�һ��Ԫ�أ�push)
//��ջ���Ӷ���ɾ��һ��Ԫ��(pop)
//pop edp :���;��ǰ�ջ����Ԫ�ص������ŵ�edp��ȥ

//�Ĵ������Ǽ��ɵ�CPU�ϵ�
//Ӳ��
//�ڴ�
// �Ĵ���

//���ٿռ�ķ�ʽȡ���ڱ�����

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;//��z��ֵ�ŵ�һ���Ĵ�����ȥ��z����������ᱻ����
}

//main����Ҳ�Ǳ������������õ�
int main()
{
	int a = 10;
	int b = 20;
	int c = 0;

	c = Add(a, b);//���ν�a,b����һ�ݣ���������push

	printf("%d", c);

	return 0;
}