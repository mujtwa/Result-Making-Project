#include<stdio.h>
int AdditionOfDigits(int n)
{
    int r,sum=0;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter Number of digits : ");
    scanf("%d",&n);
    printf("Addition of Digits : %d",AdditionOfDigits(n));
    return 0;
}
