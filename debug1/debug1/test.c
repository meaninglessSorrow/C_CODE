#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//debug�汾���԰汾
//reease�汾�����汾
//VS2022�� IDE�����ɿ�������
//�༭��+������+������
//linux
//gcc ������
//       ������
int main()
{
	int n = 0;
	int a = 0;
	scanf("%d %d", &n, &a);
	//����
	int sum = 0;
	int i = 0;
	int k = 0;
	for (i = 0;i < n;i++)
	{
		k = k * 10 + a;
		sum += k;
	}
	printf("%d", sum);
	return 0;
}