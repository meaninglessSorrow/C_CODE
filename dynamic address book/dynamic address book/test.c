#define _CRT_SECURE_NO_WARNINGS 1

#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void meu()
{
	printf("********************************\n");
	printf("*****1、添加        2、删除*****\n");
	printf("*****3、查找        4、修改*****\n");
	printf("*****5、打印        6、清空*****\n");
	printf("*****7、排序        0、退出*****\n");
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
	//初始化
	init_address(&Con);
	do {
		meu();
		printf("请选择：>");
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
			printf("退出成功\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);
}