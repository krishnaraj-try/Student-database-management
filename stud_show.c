#include"header.c"
void stud_show(ST*ptr)
{
    system("clear");
    char ch;
	while(ptr!=0)
	{
		printf("%d %s %f\n",ptr->roll,ptr->name,ptr->percentage);
		ptr=ptr->next;
	}
	printf("PRESS ENTER '0' TO MENU:\n");
	while(1)
	{
	    scanf("%c",&ch);
	    if(ch=='0')
	        break;
	}
}
