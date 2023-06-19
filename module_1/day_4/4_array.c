#include<stdio.h>
int main()
{
    int size;
    printf("Enter size :");
    scanf("%d",&size);
    int arr[size];
    int even=0,odd=0;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            even=even+arr[i];
        }
        else
        {
            odd=odd+arr[i];
        }
    }
    if(even>odd)
    {
        printf("Even - Odd: %d",even-odd);
    }
    else
    {
        printf("Odd - Even: %d",odd-even);
    }
    
}