#include<stdio.h>
#include<stdlib.h>
struct QueueNode
{

    int item;
    struct QueueNode *next;
};
void Insertion(struct QueueNode **S,int data)
{
    struct QueueNode *temp,*t;
    temp=(struct QueueNode*)malloc(sizeof(struct QueueNode));
    temp->item=data;
    temp->next=NULL;
    if(*S==NULL)
        *S=temp;
    else
    {
        t=*S;
        while(t->next!=NULL)
            t=t->next;
        t->next=temp;
    }

}
void Deletion(struct QueueNode **S)
{
    struct QueueNode *t;
    if(*S==NULL)
        printf("Queue is empty! ");
    else if((*S)->next==NULL)
    {
        printf("pooped item : %d",(*S)->item);
        free(*S);
        *S=NULL;
    }
    else
    {
        printf("pooped item : %d",(*S)->item);
        t=(*S)->next;
        free(*S);
        *S=t;
    }
}
void Display(struct QueueNode *S)
{
    if(S==NULL)
        printf("Queue is Empty!");
    else
    {
        while(S->next!=NULL)
        {
            printf("%d\n",S->item);
            S=S->next;
        }
        printf("%d",S->item);
    }
}
int menu()
{
    int ch;
    printf("\n1.Insertion");
    printf("\n2.Deletion");
    printf("\n3.Display");
    printf("\n4.Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    system("cls");
    return ch;
}
int main()
{
    struct Queuenode *start=NULL;
    int data;
    while(1)
    {
        switch(menu())
        {
        case 1:
            printf("Enter data to push : ");
            scanf("%d",&data);
            Insertion(&start,data);
            break;
        case 2:
            Deletion(&start);
            break;
        case 3:
            Display(start);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalid choice !!");

        }
    }
return 0;
}


