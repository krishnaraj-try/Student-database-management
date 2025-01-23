#include"header.c"
void stud_sort(ST*ptr)
{
	char op;

	printf("Enter the option to sort:\n");
	printf("n/N:name\n");
	printf("p/P:percentage\n");
	scanf(" %c",&op);

	int i,j,c=stud_count(ptr);
	int size=sizeof(ST)-sizeof(ST*);
	ST**p=(ST**)malloc(c*sizeof(ST*));
	ST temp;
	for(i=0;i<c;i++)
	{
		p[i]=ptr;
		ptr=ptr->next;
	}
	if((op=='n')||(op=='N'))
	{
		for(i=0;i<c-1;i++)
			for(j=0;j<c-1-i;j++)
			{
				if(strcmp(p[j]->name,p[j+1]->name)>0)
				{
					memcpy(&temp.roll,&p[j]->roll,size);
					memcpy(&p[j]->roll,&p[j+1]->roll,size);
					memcpy(&p[j+1]->roll,&temp.roll,size);
				}
			}

	}
	if((op=='p')||(op=='P'))
	{
		for(i=0;i<c-1;i++)
			for(j=0;j<c-1-i;j++)
			{
				if(p[j]->percentage > p[j+1]->percentage)
				{
					memcpy(&temp.roll,&p[j]->roll,size);
					memcpy(&p[j]->roll,&p[j+1]->roll,size);
					memcpy(&p[j+1]->roll,&temp.roll,size);
				}
			}

	}



}
