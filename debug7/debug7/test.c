#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//����������ض�����������
//ջ����ϰ������ʹ�øߵ�ַ����ʹ�õ͵�ַ
//����Ԫ�ص�ַ�ɵ͵���
int main()
{
	int i = 0;//&i>arr,��arr����iǰ��ᱨ������Ϊ��������ˣ������������ᱨ����Ϊ������������ѭ����
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//��release�汾�²��ᷢ����ѭ��
	/*printf("%p\n", &arr[9]);
	printf("%p\n", arr);
	printf("%p\n", &i);*/
	for (i = 0;i <=12;i++)
	{
		printf("hehe\n");
		arr[i] = 0;
	}

	return 0;
}