#define _CRT_SECURE_NO_WARNINGS 1
#include"Seqlist.h"

void test()
{
	SL ps;
	 SeqlistInit(&ps);

	 SeqlistPushBack(&ps,1);
	 SeqlistPushBack(&ps,2);
	 SeqlistPushBack(&ps,3);
	 SeqlistPushBack(&ps,4);
	 SeqlistPushBack(&ps,5);

	SeqlistPrintf(&ps);
}

int main()
{
	test();
	return 0;
}