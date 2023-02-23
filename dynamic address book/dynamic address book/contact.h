#pragma once

#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>

#define start 3
#define ING_COUNT 2

typedef struct peoinfo {
	char name[20];
	char gen[5];
	int age;
	char address[10];
	char tele[12];
}peoinfo;

typedef struct contact {
	peoinfo*data;//指向存放人的信息的空间
	int count;//当前已经放的信息个数
	int capacity;//当前通讯录的最大容量
}con;

//初始化
void init_address(con* pc);
//添加联系人
void add_address(con* pc);
//删除联系人
void del_address(con* pc);
//查找联系人
void seek_address(con* pc);
//修改联系人
void amend_address(con* pc);
//销毁通讯录
void free_address(con* pc);
//打印通讯录
void show_address(con* pc);
//排序通讯录
void sort_address(con* pc);
