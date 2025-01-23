#include"header.c"
int stud_count(ST*ptr)
{
	int count=0;
	while(ptr!=0)
	{
		count++;
		ptr=ptr->next;
	}
	return count;
}
