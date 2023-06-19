#include <stdio.h>

void reverse(int size,int* ptr)
{
    int tem=size-1;
    for(int i=0;i<size/2;i++)
    {
        int temp=ptr[i];
        ptr[i]=ptr[tem];
        ptr[tem]=temp;
        --tem;
    }
}

int main()
{
    int size;
    printf("Enter size");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int *ptr=&arr[0];
    reverse(size,ptr);
    for(int i=0;i<size;i++)
    {
        printf("%d ",ptr[i]);
    }
}
