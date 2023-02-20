#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int name(const void* e1, const void* e2)
{
	
	return strcmp(((pea*)e1)->name,((pea*)e2)->name);
}

typedef struct peason {
	char name[20];
	int age;
	char ph[12];
}pea;

int main()
{
	 pea s[3] = { {"张三",20,"12344"},{"李四",13,"12333"},{"王五",29,"12345"} };
	qsort(s, 3, sizeof(s[0]), name);
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		printf("%s %d %s\n", s[i].name, s[i].age, s[i].ph);
	}
	return 0;
}