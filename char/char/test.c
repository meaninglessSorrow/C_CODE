#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//int a = 1;
	///*int a = 0x11223344;*/
	//if (*(char*)&a == 0)
	//{
	//	printf("´ó¶Ë");
	//}
	//else if (*(char*)&a == 1)
	//{
	//	printf("Ð¡¶Ë");
	//}
	////char a = 129;
	////printf("%d", a);
	//return 0;
	int pea[5] = { 0 };
	int i, j;
	int n = 1;
	int a = 0;
	while (1)
	{
		switch (1)
		{
		case 1:pea[1] = 2;
				pea[2] = 1;
				pea[3] = 3;
				pea[4] = 4;

		}
		for (i = 0;i < 5;i++)
		{
			for (j = 0;j < 5;j++)
			{
				if (i != j)
				{				
					if (pea[i] != pea[j])
						a++;
				}
			}
		}
		if (a == 16)
		{
			break;
		}
	}
}