#include <stdio.h>

void min_max(int size, long int *arr)
{
    for(int i=0;i<size;i++)
    {
        int temp=arr[i],temp1;
        int min=10,max=0;
        if(temp%10==temp)
        {
            printf("Not Valid\n");
            continue;
        }
        else
        {
            while(temp!=0)
            {
                temp1=temp%10;
                temp=temp/10;
                if(temp1>max)
                {
                    max=temp1;
                }
                else if(temp1<min)
                {
                    min=temp1;
                }
            }
            printf("%d and %d\n",min,max);
        }
    }
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    long int arr1[size];
    for(int i=0;i<size;i++)
    {
        scanf("%ld",&arr1[i]);
    }
    long int *arr=arr1;
    min_max(size,arr);
    
    
    return 0;
}
