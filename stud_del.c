#include"header.c"
void stud_del(ST**ptr)
{
    system("clear");
	char op;
	int r;
	

	printf("R/r:Enter the roll to delete\n");
	printf("N/n:Enter the name to delete\n");
	scanf(" %c",&op);
	if((op=='R')||(op=='r'))
	{	
		printf("Enter the roll number to delete:");
		scanf("%d",&r);
		del_roll(ptr,r);
	}
	else if((op=='N')||(op=='n'))
	{
	    char s[20];
	    printf("Enter the name to delete:");
		scanf(" %s",s);
		del_name(ptr,s);
		
	}
	
}
void del_roll(ST**ptr,int r)
{
	if((*ptr)->roll==r)
	{
		if((*ptr)->next!=0)
		{
			ST*temp=(*ptr);
			(*ptr)=(*ptr)->next;
			free(temp);
			return;
		}
		free(*ptr);
		(*ptr)=0;
	}
	else
	{
		ST*last,*prev;
		last=(*ptr);
		while((last->next!=0)&&(last->roll!=r))
			{
				prev=last;
				last=last->next;
			}
		if(last!=0)
		{
			prev->next=last->next;
			free(last);
			return;
		}
	}
}
void del_name(ST**ptr,char*s)
{
	int i,c,cnt=0,rollnum;
	c=stud_count(*ptr);

	ST*temp=(*ptr);
	for(i=0;i<c;i++)
	{
		if(strcmp(temp->name,s)==0)
			cnt++;
		temp=temp->next;
	}
	temp=(*ptr);
	if(cnt>1)
	{
		while(temp!=0)
		{
			if(strcmp(temp->name,s)==0)
				printf("%d %s %f\n",temp->roll,temp->name,temp->percentage);
			temp=temp->next;
		}
		printf("ENTER THE ROLL YOU WANT TO DELETE:");
		scanf("%d",&rollnum);
		del_roll(ptr,rollnum);
		return;
	}
	else if(cnt==1)
	{	
		if(strcmp((*ptr)->name,s)==0)
    		{
        		if((*ptr)->next!=0)
			{
				ST*temp=(*ptr);
				(*ptr)=(*ptr)->next;
				free(temp);
				return;
			}
			free(*ptr);
			*ptr=0;
   		 }
   	 	else
		{
			ST*last,*prev;
			last=(*ptr);
			while((last->next!=0)&&(strcmp(last->name,s)!=0))
			{
				prev=last;
				last=last->next;
			}
			if(last!=0)
			{
				prev->next=last->next;
				free(last);
				return;
			}
		}
		return; 
	}
	else if(cnt==0)
		printf("Inavild name\n");

}
