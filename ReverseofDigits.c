#include<stdio.h>
int ReverseDigits(int);
int ReverseDigits(int n)
{
    int r,sum=0;
    while(n!=0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    return sum;

}
int main()
{
    int n;
    printf("Enter Numbers of digits : ");
    scanf("%d",&n);
    printf("Reverse is : %d",ReverseDigits(n));
    return 0;
}
