#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{

		//const ����ָ�������ʱ��
		//1.const����*����ߣ�const���ε���ָ��ָ������ݣ���ʾָ��ָ������ݣ�����ͨ��ָ�����ı��ˣ�����ָ�������������޸�
		 int n = 1000;
		const int num = 10;
		const int* p = &num;//�ȼ���int const*p
		//*p= 20;//err
		p = &n;//ok

	//2.const����*���ұߣ�const���ε�ָ�����������ʾָ����������ݲ��ܱ��޸ģ�����ָ��ָ������ݣ�����ͨ��ָ�����ı�
	int* const pp = &num;
	*pp = 20;
	//pp = &n;//err

	const int* const qq = &n;//���������ܸ�
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