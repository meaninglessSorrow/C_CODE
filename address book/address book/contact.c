#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"

void init_address(con* pc)
{
	pc->count = 0;
	memset(pc->data, 0,sizeof(pc->data));
}

void add_address(con* pc)
{
	if (pc->count == 1000)
	{
		printf("通讯录已满，无法添加");
		return;
	}
	//增加一个人的信息
	printf("名字：");
	scanf("%s", pc->data[pc->count].name);
	printf("性别：");
	scanf("%s", pc->data[pc->count].gen);
	printf("年龄：");
	scanf("%d",&pc->data[pc->count].age);
	printf("地址：");
	scanf("%s", pc->data[pc->count].address);
	printf("电话：");
	scanf("%s", pc->data[pc->count].tele);
	pc->count++;
	printf("成功添加\n");
}

int find_address(con* pc)
{
	int i;
	printf("请输入名字:>");
	char arr[20] = { 0 };
	scanf("%s", arr);
	for (i = 0;i < pc->count;i++)
	{
		if (strcmp(arr, pc->data[i].name) == 0)
		{
			int re = i;
			return re;
		}
	}
	return -1;
}

void del_address(con* pc)
{
	int i = 0;
	int re=find_address(pc);
	if (re==-1)
	{
		printf("查无此人\n");
		return;
	}
	for (i= re;i < pc->count;i++)
	{
		pc->data[i] = pc->data[i+ 1];
	}
	pc->count--;
	printf("删除成功\n");
}

void seek_address(con* pc)
{
	int re = find_address(pc);
	if (re == -1)
	{
		printf("查无此人\n");
		return;
	}
	printf("%-20s\t %-5s\t %-4d\t% -10s\t %-12s\t\n", pc->data[re].name,
		pc->data[re].gen,
		pc->data[re].age,
		pc->data[re].address,
		pc->data[re].tele);
}

void  meuu()
{
	printf("****************************\n");
	printf("*****1、姓名    2、性别*****\n");
	printf("*****3、年龄    4、地址*****\n");
	printf("*****5、电话    0、退出*****\n");
	printf("****************************\n");
}

enum address {
	exit1,
	name,
	gen,
	age,
	address,
	tele
};

void amend_address(con* pc)
{
	int re = find_address(pc);
	if (re == -1)
	{
		printf("查无此人\n");
		return;
	}
	int n = 0;
	do {
		meuu();
		printf("请选择要修改的内容：->");
		scanf("%d", &n);
		int m = 0;
		char arr[20] = { 0 };
		switch (n)
		{
		case name:
			printf("请输入新信息：>");
			scanf("%s", arr);
			strcpy(pc->data[re].name, arr);
			break;
		case gen:
			printf("请输入新信息：>");
			scanf("%s", arr);
			strcpy(pc->data[re].gen, arr);
			break;
		case age:
			printf("请输入新信息：>");
			scanf("%d", &m);
			memcpy(&pc->data[re].age, &m,4);
			break;
		case address:
			printf("请输入新信息：>");
			scanf("%s", arr);
			strcpy(pc->data[re].address, arr);
			break;
		case tele:
			printf("请输入新信息：>");
			scanf("%s", arr);
			strcpy(pc->data[re].tele, arr);
			break;
		case exit1:
			printf("修改成功\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
		memset(arr, 0, sizeof(arr));
	} while (n);
}

void show_address(const con* pc)
{
	int i = 0;
	printf("%-20s\t %-5s\t %-4s\t% -10s\t %-12s\t\n","姓名","性别","年龄","地址","电话");
	for (i = 0;i < pc->count;i++)
	{
		printf("%-20s\t %-5s\t %-4d\t% -10s\t %-12s\t\n", pc->data[i].name, 
			pc->data[i].gen,
			pc->data[i].age,
			pc->data[i].address, 
			pc->data[i].tele);
	}
}

int name_sort(const void* e1, const void* e2)
{
	return strcmp(((peoinfo*)e1)->name, ((peoinfo*)e2)->name);
}

void sort_address(con* pc)
{
	int sz = sizeof(pc->data) / sizeof(pc->data[0]);
	/*printf("%d", sizeof(pc->data[0]));*/
	qsort(pc->data, pc->count, sizeof(pc->data[0]), name_sort);
}