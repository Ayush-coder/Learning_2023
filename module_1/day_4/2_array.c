#include<stdio.h>
int main() 
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    int arr[size];
    int min,max;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(i==0)
        {
            min=arr[0];
            max=arr[0];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("Minimum: %d\nMaximum: %d",min,max);
}
    
