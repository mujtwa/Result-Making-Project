#include<stdio.h>
int main()
{
    int arr[30],size,i;
    printf("Enter the size of an array : ");
    scanf("%d",&size);
    printf("Enter Elements of an array : \n");
    for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Elements of an array : \n");
    for(i=0;i<size;i++)
        printf("%d\n",arr[i]);
    SelectionSort(arr,size);
    printf("After Sorting Elements of an array : \n");
    for(i=0;i<size;i++)
        printf("%d\n",arr[i]);
return 0;
}

void SelectionSort(int arr[],int size)
{
    int i,t,min;
    for(i=0;i<size-1;i++)
    {

        min=MinValueIndex(arr,size,i);
        t=arr[i];
        arr[i]=arr[min];
        arr[min]=t;
    }
}
int MinValueIndex(int arr[],int size,int j)
{
    int item,in;
    item=arr[j];
    for(j=j+1;j<size&&item<arr[j];j++)
    {
        if(item>arr[j])
        {
            item=arr[j];
            in=j;
        }
    }
    return in;
}
