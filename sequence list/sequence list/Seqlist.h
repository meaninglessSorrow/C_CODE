#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

typedef int SLDateType;
//typedef struct Seqlist SL;

typedef struct Seqlist {
	SLDateType* a;
	int size;//���ݸ���
	int capacity;
}SL;

void SeqlistPrintf(SL* ps);
void SeqlistInit(SL* ps);
void SeqlistDestory(SL* ps);

//��
void SeqlistPushBack(SL* ps,int x);
