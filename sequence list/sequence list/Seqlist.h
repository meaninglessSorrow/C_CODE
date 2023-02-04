#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef int SLDateType;
//typedef struct Seqlist SL;

typedef struct Seqlist {
	SLDateType* a;
	int size;//数据个数
	int capacity;
}SL;

void SeqlistPrintf(SL* ps);
void SeqlistInit(SL* ps);
void SeqlistDestory(SL* ps);

//增
void SeqlistPushBack(SL* ps,int x);
