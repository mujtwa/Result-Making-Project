#include<stdio.h>
#define max 5
#include<windows.h>
void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
struct Salary
{
    char name[20];
    int salary[12];
};
struct Salary S[5];
void SetData()
{

    int i,j;
    for(i=0;i<2;i++)
    {
    printf("Enter your name : ");
    scanf("%s",S[i].name);
    printf("Enter Salary  : \n");
    for(j=0;j<4;j++)
    {
        printf("Salary of %d month : ",j+1);
        scanf("%d",&S[i].salary[j]);
    }
}

}
void ShowData()
{

    printf("\n\n\n*********SALARY DETAILS********\n\n\n");
    printf("Name\tJanuary\tFebruary\tMarch\tApril\n\n");
    int i,j;
    for(i=0;i<2;i++)
    {
        printf("%s",S[i].name);
        printf("\t");
         for(j=0;j<4;j++)
        {
        printf("%d\t\t",S[i].salary[j]);
        }
    printf("\n");
    }


}
int main()
{
    SetData();
    ShowData();
    return 0;
}

