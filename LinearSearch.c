

#include<stdio.h>
void LinearSearch(int arr[],int size,int item)
{
    int i,m;
    for(i=0;i<size;i++)
            if(arr[i]==item)
            {
              m=i;
              printf("it presents at %d position : ",m+1);
            }
}
int main()
{
    int size;
    int arr[100],i,data;
    printf("Enter the size of an array : ");
    scanf("%d",&size);
    printf("Enter the elements of an array : \n");
    for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
    printf("\nEntre the element that you want to search : ");
    scanf("%d",&data);
    LinearSearch(arr,size,data);
    return 0;
}
