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
		printf("ͨѶ¼�������޷����");
		return;
	}
	//����һ���˵���Ϣ
	printf("���֣�");
	scanf("%s", pc->data[pc->count].name);
	printf("�Ա�");
	scanf("%s", pc->data[pc->count].gen);
	printf("���䣺");
	scanf("%d",&pc->data[pc->count].age);
	printf("��ַ��");
	scanf("%s", pc->data[pc->count].address);
	printf("�绰��");
	scanf("%s", pc->data[pc->count].tele);
	pc->count++;
	printf("�ɹ����\n");
}

int find_address(con* pc)
{
	int i;
	printf("����������:>");
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
		printf("���޴���\n");
		return;
	}
	for (i= re;i < pc->count;i++)
	{
		pc->data[i] = pc->data[i+ 1];
	}
	pc->count--;
	printf("ɾ���ɹ�\n");
}

void seek_address(con* pc)
{
	int re = find_address(pc);
	if (re == -1)
	{
		printf("���޴���\n");
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
	printf("*****1������    2���Ա�*****\n");
	printf("*****3������    4����ַ*****\n");
	printf("*****5���绰    0���˳�*****\n");
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
		printf("���޴���\n");
		return;
	}
	int n = 0;
	do {
		meuu();
		printf("��ѡ��Ҫ�޸ĵ����ݣ�->");
		scanf("%d", &n);
		int m = 0;
		char arr[20] = { 0 };
		switch (n)
		{
		case name:
			printf("����������Ϣ��>");
			scanf("%s", arr);
			strcpy(pc->data[re].name, arr);
			break;
		case gen:
			printf("����������Ϣ��>");
			scanf("%s", arr);
			strcpy(pc->data[re].gen, arr);
			break;
		case age:
			printf("����������Ϣ��>");
			scanf("%d", &m);
			memcpy(&pc->data[re].age, &m,4);
			break;
		case address:
			printf("����������Ϣ��>");
			scanf("%s", arr);
			strcpy(pc->data[re].address, arr);
			break;
		case tele:
			printf("����������Ϣ��>");
			scanf("%s", arr);
			strcpy(pc->data[re].tele, arr);
			break;
		case exit1:
			printf("�޸ĳɹ�\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
		memset(arr, 0, sizeof(arr));
	} while (n);
}

void show_address(const con* pc)
{
	int i = 0;
	printf("%-20s\t %-5s\t %-4s\t% -10s\t %-12s\t\n","����","�Ա�","����","��ַ","�绰");
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