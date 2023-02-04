#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"

//³õÊ¼»¯
void SeqlistInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqlistPrintf(SL* ps)
{
	int i = 0;
	for (i = 0;i < ps->size;i++)
	{
		printf("%d ", ps->a[i]);
	}
}

void SeqlistPushBack(SL* ps,int x)
{
	if (ps->size == ps->capacity)
	{
		ps->capacity = ps->capacity == 0 ? ps->capacity = 4 : ps->capacity * 2;
		SLDateType* temp= (SLDateType*)malloc(sizeof(SLDateType)*(ps->capacity));
		ps->a = temp;
	}
	ps->a[ps->size] = x;
	ps->size++;
}


