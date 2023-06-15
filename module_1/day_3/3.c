#include <stdio.h>
#include <stdlib.h>

int main()

{
    char str[5],all[4];
    printf("Enter number: ");
    scanf("%s",str);
    int temp=0;
    int max=0;
    for(int i=0;i<4;i++)
    {
        if(temp==i)
        {
            int j=0;
            for(int i=0;i<4;i++)
            {
                if(temp==i)
                {
                    continue;
                }
                else
                {
                    all[j]=str[i];
                    j++;
                }
            }
            int x=atoi(all);
            if(x>max)
            {
                max=x;
            }
            temp++;
        }
    }
    printf("%d",max);

    return 0;
}
