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
	peoinfo*data;//ָ�����˵���Ϣ�Ŀռ�
	int count;//��ǰ�Ѿ��ŵ���Ϣ����
	int capacity;//��ǰͨѶ¼���������
}con;

//��ʼ��
void init_address(con* pc);
//�����ϵ��
void add_address(con* pc);
//ɾ����ϵ��
void del_address(con* pc);
//������ϵ��
void seek_address(con* pc);
//�޸���ϵ��
void amend_address(con* pc);
//����ͨѶ¼
void free_address(con* pc);
//��ӡͨѶ¼
void show_address(con* pc);
//����ͨѶ¼
void sort_address(con* pc);
