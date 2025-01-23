#include"header.c"
void stud_rev(ST*ptr)
{
	int i,j,c=stud_count(ptr),size;
	ST temp;
	size=sizeof(ST)-sizeof(ST*);
	ST**p=(ST**)malloc(c*sizeof(ST*));

	for(i=0;i<c;i++,ptr=ptr->next)
		p[i]=ptr;

	for(i=0,j=c-1;i<j;i++,j--)
	{
					memcpy(&temp.roll,&p[i]->roll,size);
					memcpy(&p[i]->roll,&p[j]->roll,size);
					memcpy(&p[j]->roll,&temp.roll,size);

	}

	
}

