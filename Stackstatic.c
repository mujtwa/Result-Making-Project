#include<stdio.h>
#include<stdlib.h>
#define max 5
int arr[max];
int item;
int top=-1;

void Push()
{
    if(top==max-1)
        printf("stack is full");
    else{
        top+=1;
        arr[top]=item;
    }
}
void Pop()
{
    if(top==-1)
        printf("Stack is empty! ");
    else
    {
        item=arr[top];
        printf("pooped item : %d",item);
        top-=1;
    }
}
void Display()
{
    int i;
    if(top==-1)
        printf("Stack is empty!");
    else
    {
        for(i=top;i>=0;i--)
            printf("%d\n",arr[i]);
    }

}
int menu()
{
    int ch;
    printf("\n1.Push");
    printf("\n2.Pop");
    printf("\n3.Display");
    printf("\n4.exit");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);
    system("cls");
    return ch;
}
int  main()
{
    while(1)
    {
        switch(menu())
        {
        case 1:
             printf("Enter item to push : ");
            scanf("%d",&item);
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("\nInvalid choice : ");

        }
    }

    return 0;
}
