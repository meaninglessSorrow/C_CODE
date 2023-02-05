#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

 typedef struct peoinfo {
	char name[20];
	char gen[5];
	int age;
	char address[10];
	char tele[12];
}peoinfo;

typedef struct contact {
	 peoinfo data[1000];
	int count;
}con;

void init_address(con* pc);
void add_address(con* pc);
void del_address(con* pc);
void seek_address(con* pc);
void amend_address(con* pc);
void show_address(con* pc);
void sort_address(con* pc);