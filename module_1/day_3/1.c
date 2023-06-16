#include <stdio.h>

void pattern(int size)
{
    int n=size;
    int t=0;
    int l=1;
    while(size--)
    {
        for(int i=1;i<=n;i++)
        {
            printf("%d",i);
        }
        while(t--)
        {
            printf("  ");
        }
        for(int i=n;i>=1;i--)
        {
            printf("%d",i);
        }
        t=l;
        l++;
        n--;
        printf("\n");
    }
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    pattern(size);
    
}
