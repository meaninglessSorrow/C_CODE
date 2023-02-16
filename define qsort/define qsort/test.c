#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

int cmp_int(const void* e1, const void* e2)
{
	return *(int *)e1- *(int*)e2;
}

void Swep(char* h1, char* h2, int lg)
{
	int i;
	for (i = 0;i < lg;i++)
	{
		char temp = *h1;
		*h1 = *h2;
		*h2 = temp;
		h1++;
		h2++;
	}
}

void bubble_sort(void* arr, size_t sz,size_t lg,int (* img)(const void* e1, const void* e2))
{
	size_t i, j;
	for (i = 0;i < sz-1;i++)
		for (j = 0;j < sz - i-1;j++)
		{
			if (img((char*)arr+j*lg,(char*)arr+(j+1)*lg)>0)
			{
				//½»»»
				Swep((char*)arr + j * lg, (char*)arr + (j + 1) * lg,lg);
			}
		}
}

void test1()
{
	int arr[10] = { 3,2,4,5,6,7,9,10,8,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

struct STU
{
	char name[20];
	int age;
};

int cmp_struct_name(const void*e1,const void*e2)
{
	return strcmp(((struct STU*)e1)->name,( (struct STU*)e2)->name);
}

int cmp_struct_age(const void* e1, const void* e2)
{
	return ((struct STU*)e1)->age-((struct STU*)e2)->age;
}

void test2()
{
	struct STU s[3] = { {"zhangsan",22},{"lisi",19},{"wangwu",55} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_name);
	int i = 0;
	for (i = 0;i < sz;i++)
	{
		printf("%s  %d ", s[i].name, s[i].age);
		printf("\n");
	}
	bubble_sort(s, sz, sizeof(s[0]), cmp_struct_age);
	for (i = 0;i < sz;i++)
	{
		printf("%s  %d ", s[i].name, s[i].age);
		printf("\n");
	}
}

int imp_int(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}

void swap(char* e1, char* e2, int loog)
{
	int i = 0;
	for (i = 0;i < loog;i++)
	{
		char* temp = e1;
		*e1 = *e2;
		*e2 = *temp;
		e1++;
		e2++;
	}
}

void boulle(void* arr, size_t num, size_t loog, int(*imp)(const void* e1, const void* e2))
{
	size_t i, j;
	for (i = 0;i < num - 1;i++)
		for (j = 0;j < num - 1 - i;i++)
		{
			if (imp((char*)arr + j * loog, (char*)arr + (j + 1) * loog) > 0)
			{
				//½»»»
				swap((char*)arr + j * loog, (char*)arr + (j + 1) * loog, loog);
			}
		}
}


void test3()
{
	/*srand((unsigned int)time(NULL));*/
	int arr[10] = { 0,3,5,1,2,4,7,6,9,8 };
	/*for (int i = 0;i < 10;i++)
	{
		arr[i] = rand();
	}*/
	int sz = sizeof(arr) / sizeof(arr[0]);
	boulle(arr, sz, sizeof(arr[0]), imp_int);
	int i;
	for (i = 0;i < sz;i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	test1();
	test2();
	test3();
	return 0;
}