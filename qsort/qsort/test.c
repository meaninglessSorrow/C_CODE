#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

//int cmp_int(const void* e1, const void* e2)
//{
//	return (*((int*)e1))-(*((int*)e2)) ;
//}
//
//void test1()
//{
//	int arr1[10] = { 0 };
//	int i;
//	srand((unsigned)time(NULL));
//	for (i = 0;i < 10;i++)
//	{
//		arr1[i] = rand();
//	}
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	qsort(arr1,sz,sizeof(arr1[0]),cmp_int);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//}
//
//struct STU {
//	char name[20];
//	int age;
//};
//
//int cmp_struct_age(const void* e1, const void* e2)
//{
//	return ((struct STU*)e1)->age - ((struct STU*)e2)->age;
//}
//
//int cmp_struct_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct STU*)e1)->name, ((struct STU*)e2)->name);
//}
//
//void test2()
//{
//	struct STU S[3] = { {"zhangshan",20},{"lisi",58},{"wuwang",55} };
//	int sz = sizeof(S)/sizeof(S[0]);
//	qsort(S, sz, sizeof(S[0]), cmp_struct_age);
//	for (int i = 0;i < 3;i++)
//	{
//		printf("%s %d", S[i].name, S[i].age);
//		printf("\n");
//	}
//	qsort(S, sz, sizeof(S[0]), cmp_struct_name);
//	for (int i = 0;i < 3;i++)
//	{
//		printf("%s %d", S[i].name, S[i].age);
//		printf("\n");
//	}
//}
//
//int cmp_double(const void* e1, const void* e2)
//{
//	return (*((double*)e1)) - (*((double*)e2));
//}
//
//void test3()
//{
//	int i = 0;
//	srand((unsigned)time(NULL));
//	double arr2[10] = {0};
//	for (i = 0;i < 10;i ++)
//	{
//		arr2[i] = rand()/(double)(RAND_MAX/10000);
//	}
//	int sz = sizeof(arr2) / sizeof(arr2[0]);
//	qsort(arr2, sz, sizeof(arr2[0]), cmp_double);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%lf ", arr2[i]);
//	}
//	printf("\n");
//}
//
//int cmp_char(const void* e1, const void* e2)
//{
//	return strcmp(*(char ( * )[10])(e1), *(char(*)[10])(e2));
//}
//
//void test4()
//{
//	int i = 0;
//	char arr3[10][10] = { "skt","fpx","lgd","lng","wbg","rng","edg","we","tes","ig"};
//	////srand((unsigned char)time(NULL));
//	/////*while(i<10)
//	////{
//	//	if (rand() >= 65 && rand() <= 122)
//	//	{
//	//		arr3[i] = rand();
//	//		i++;
//	//	}
//	//}*
//	int sz = sizeof(arr3) / sizeof(arr3[0]);
//	qsort(arr3, sz, sizeof(arr3[0]), cmp_char);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%s ", arr3[i]);
//	}
//}
//
//int main()
//{
//	test1();
//	test2();
//	test3();
//	test4();
//	return 0;
//}

typedef struct peason {
	char name[20];
	int age;
	char ph[12];
}pea;

int name(const void* e1, const void* e2)
{

	return strcmp((( pea*)e1)->name, (( pea*)e2)->name);
}


int main()
{
	struct peason s[3] = { {"张三",20,"12344"},{"李四",13,"12333"},{"王五",29,"12345"} };
	qsort(s, 3, sizeof(s[0]), name);
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("%s %d %s\n", s[i].name, s[i].age, s[i].ph);
	}
	return 0;
}