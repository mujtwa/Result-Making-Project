#include<stdio.h>
#include<stdlib.h>
struct StackNode
{
    int item;
    struct StackNode *next;
};
void Push(struct StackNode **S,int data)
{
    struct StackNode *temp,*t;
    temp=(struct StackNode*)malloc(sizeof(struct StackNode));
    temp->item=data;
    if(*S==NULL)
    {
        *S=temp;
        (*S)->next=NULL;
    }
    else
    {
        t=*S;
        temp->next=t;
        *S=temp;
    }
}
void Pop(struct StackNode **S)
{
    struct StackNode *t;
    int item;
    if(*S==NULL)
        printf("Stack is Empty!");
    else if((*S)->next==NULL)
    {
        printf("Pooped item is : %d",(*S)->item);
        free(*S);
        *S=NULL;
    }
    else
    {
        printf("Pooped item is : %d",(*S)->item);
        t=(*S)->next;
        free(*S);
        *S=t;
    }
}
void Display(struct StackNode *S)
{
    if(S==NULL)
        printf("Stack is Empty!");
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
    printf("\n1.Push");
    printf("\n2.Pop");
    printf("\n3.Display");
    printf("\n4.Exit");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    system("cls");
    return ch;
}
int main()
{
    int data;
    struct StackNode *start=NULL;
    while(1)
    {
    switch(menu())
    {
    case 1:
        printf("Enter data to push : ");
        scanf("%d",&data);
        Push(&start,data);
        break;
    case 2:
        Pop(&start);
        break;
    case 3:
        Display(start);
        break;
    case 4:
        exit(0);
        break;
    default:
        printf("\nInvalid choice ! ");
    }
}
return 0;
}
