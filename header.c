#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct student{
	
	int roll;
	char name[30];
	float percentage;
	struct student*next;
}ST;
void stud_show(ST*ptr);
void stud_add(ST**ptr,int*);
void stud_del(ST**ptr);
void del_roll(ST**ptr,int r);
void del_name(ST**ptr,char*s);
void stud_mod_per_name(ST*ptr);
void stud_mod_roll(ST *ptr,int r);
int stud_count(ST*ptr);
void stud_mod(ST*ptr);
void stud_save(ST*ptr);
void stud_sort(ST*ptr);
void stud_delete_all(ST**ptr);
void stud_rev(ST*ptr);
