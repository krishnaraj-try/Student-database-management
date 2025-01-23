#include"header.c"
void stud_save(ST*ptr)
{
	FILE*fp=fopen("student.txt","w");

	while(ptr!=0)
	{
		fprintf(fp,"%d %s %f",ptr->roll,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
}
