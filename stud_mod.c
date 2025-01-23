#include"header.c"
void stud_mod(ST*ptr)
{
      system("clear");
	char op;
	int r,cnt=0;
	
    printf("Enter which record to search for modification\n");
	printf("R/r:to search a rollno\n");
	printf("N/n:to search a name\n");
	printf("P/p:percentage based\n");
	scanf(" %c",&op);
	
	if((op=='r')||(op=='R'))
	{
	    printf("Enter the rollno to search:\n");
	    scanf("%d",&r);
	    while((ptr!=0)&&(ptr->roll!=r))
	            ptr=ptr->next;
	    if(ptr!=0)
	        stud_mod_roll(ptr,r);
	    else
	    {
		    printf("Rollno not found\n");
		    return;
	    }

	}

	if((op=='N')||(op=='n'))
	{
		char s[20];
	    printf("Enter the name to search:\n");
	    scanf("%s",s);
	    ST *temp=ptr;
	    while(temp!=0)
	    {
		    if(strcmp(s,temp->name)==0)
			    cnt++;
		    temp=temp->next;
	    }
	    if(cnt==1)
	    {
		    temp=ptr;
		    while((temp!=0)&&(strcmp(temp->name,s)!=0))
		    temp=temp->next;

		    stud_mod_per_name(temp);
		    return;
	    }
	    else if(cnt>1)
	    {
		 temp=ptr;
                 while(temp!=0)
		 {
		    if(strcmp(s,temp->name)==0)
			    printf("%d %s %f\n",temp->roll,temp->name,temp->percentage);
		    temp=temp->next;
		 }

		 printf("Enter the roll no. for modification\n");
		 scanf(" %d",&r);
	        stud_mod_roll(ptr,r);
	    }
	    else if(cnt==0)
	    {
		    printf("Name not found\n");
	    		return;

            }
	}

	if((op=='P')||(op=='p'))
	{
		float f;
	    printf("Enter the percentage to search:\n");
	    scanf("%f",&f);
	    ST *temp=ptr;
	
	    while(temp!=0)
	    {
		    if(temp->percentage==f)
			    cnt++;
		    temp=temp->next;
	    }
	    if(cnt==1)
	    {
		    temp=ptr;
		    while((temp!=0)&&(temp->percentage!=f))
		    temp=temp->next;

		    stud_mod_per_name(temp);
		    return;
			    
	    }
	    else if(cnt>1)
	    {
		    temp=ptr;
                 while(temp!=0)
		 {
		    if(temp->percentage==f)
			 printf("%d %s %f\n",temp->roll,temp->name,temp->percentage);
		    temp=temp->next;
			 
		 }
		 printf("Enter the roll no. for modification\n");
		 scanf("%d",&r);
	        stud_mod_roll(ptr,r);
		return;
	    }
	    else if(cnt==0)
	    {
		    printf("Percentage not found\n");
		    return;
	    }

	}
}
void stud_mod_roll(ST *ptr,int r)
{
	system("clear");
	char ch;
	printf("What you want to modify:\n");

	printf("P/p:Percentage\n");
	printf("N/n:Name\n");


	while((ptr!=0)&&(ptr->roll!=r))
		ptr=ptr->next;
	scanf(" %c",&ch);

	if((ch=='P')||(ch=='p'))
	{
		float input;
		printf("Enter the percentage to modify:\n");
		scanf("%f",&input);
		ptr->percentage=input;
	}
	if((ch=='n')||(ch=='N'))
	{
		char s[20];
		printf("Enter the name to modify:\n");
		scanf(" %s",s);
		strcpy(ptr->name,s);
	}
}
void stud_mod_per_name(ST*ptr)
{
	system("clear");
	char ch;
	printf("What you want to modify:\n");

	printf("P/p:Percentage\n");
	printf("N/n:Name\n");
	scanf(" %c",&ch);

	if((ch=='P')||(ch=='p'))
	{
		float input;
		printf("Enter the percentage to modify:\n");
		scanf("%f",&input);
		ptr->percentage=input;
	}
	if((ch=='n')||(ch=='N'))
	{
		char s[20];
		printf("Enter the percentage to modify:\n");
		scanf(" %s",s);
		strcpy(ptr->name,s);
	}

}
