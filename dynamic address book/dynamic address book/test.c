#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void meu()
{
	printf("********************************\n");
	printf("*****1�����        2��ɾ��*****\n");
	printf("*****3������        4���޸�*****\n");
	printf("*****5����ӡ        6�����*****\n");
	printf("*****7������        0���˳�*****\n");
	printf("********************************\n");
}

enum meu {
	Exit,
	add,
	del,
	seek,
	amend,
	show,
	empty,
	sort
};

int main()
{
	int input;
	con Con;
	//��ʼ��
	init_address(&Con);
	do {
		meu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case add:
			add_address(&Con);
			break;
		case del:
			del_address(&Con);
			break;
		case seek:seek_address(&Con);
			break;
		case amend:
			amend_address(&Con);
			break;
		case show:
			show_address(&Con);
			break;
		case empty:
			init_address(&Con);
			break;
		case sort:
			sort_address(&Con);
			break;
		case Exit:
			free_address(&Con);
			printf("�˳��ɹ�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);
}