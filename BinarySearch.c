#include<stdio.h>

void BubbleSort(int arr[],int size)
{
    int r,i,temp;
    for(r=1;r<size;r++)
    for(i=0;i<size-r;i++)
        if(arr[i]>arr[i+1])
           {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;

            }
}
void BinarySearch(int arr[],int size,int item)
{
    int u=size-1,l=0,m;
    while(u>=l)
    {
        m=(l+u)/2;
        if(arr[m]==item)
        {
            printf("Item present at %d position : ",m+1);
            return;
        }
        else if(arr[m]>item)
            u=m-1;
        else
            l=m+1;
    }


}
int main()
{
   int arr[100] ,size,data,i;
   printf("Enter the size of an array : ");
   scanf("%d",&size);
   printf("Enter the elements of an array : \n");
   for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
   BubbleSort(arr,size);
   printf("Sorted array : \n");
   for(i=0;i<size;i++)
    printf("%d\n",arr[i]);
    printf("\nEnter data that you want to search : ");
    scanf("%d",&data);
    BinarySearch(arr,size,data);
   return 0;
}



