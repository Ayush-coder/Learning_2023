#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);
    int arr[size];
    int sum=0;
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    double avg=(double)sum/size;
    printf("Sum: %d\nAverage: %lf",sum,avg);
}

