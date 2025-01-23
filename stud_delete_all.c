#include"header.c"
void stud_delete_all(ST**ptr)
{
	ST*prev;
	while(*ptr!=0)
	{
		prev=(*ptr);
		(*ptr)=(*ptr)->next;
		free(prev);
	}
}
