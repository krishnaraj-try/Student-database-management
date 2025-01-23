#include"header.c"
void stud_add(ST**ptr,int*roll_)
{
    system("clear");
        ST*temp=(ST*)malloc(sizeof(ST));

        printf("ENTER THE STUDENT RECORD:\n");
        scanf("%s%f",temp->name,&temp->percentage);
        temp->roll=(*roll_);
	(*roll_)++;

        if((*ptr)==0)
        {
                temp->next=(*ptr);
                (*ptr)=temp;
        }
        else
        {
                ST*last=(*ptr);
                while(last->next!=0)
                        last=last->next;

                temp->next=last->next;
                last->next=temp;
        }
}

