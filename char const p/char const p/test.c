#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int main()
{
	//const char* p�������һ��ָ���ַ���ָ���������Ȼ������p�����ݣ�Ҳ���ǵ�ַ���Ա䣬����ָ������ݲ����Ա䡣
	//char ch[6] = {"abcde"};���ַ����洢����󶼻����һ��������'\0'�����Դ洢5���ַ����ַ���Ӧ��Ҫ��6���ռ䡣
	//int ret = strlen(ch);
	//printf("%d\n", ret);
	//const char(* ph)[6] =&ch;
	//ph= 'new';//��ȷ
	//*ph = 'c';//����
	/*char* const p�������һ��ָ���ַ��͵�ָ�볣������P�ǳ��������Ե�ַ�����Ըģ�ָ������ݿ����޸ġ�*/


	char ch1[6] = { "abcde" };
	const char(*ph) = ch1;
	char ch2[4] = { "bit"};
	ph = ch2;//��ȷ
	printf("%s", ph);
	//char a[6] = "abcde";
 //   char* const p = a;/*
	////p = "new"; /*����*/
	//*p= 'c';/*��ȷ*/
	//printf("%s\n",p);
	////printf("%p", ch);

	return 0;
}