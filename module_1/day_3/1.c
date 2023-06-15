#include <stdio.h>

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
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

