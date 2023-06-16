#include <stdio.h>
#include <stdlib.h>

void max(char *str)
{
    char all[4];
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

}

int main()
{
    char str1[5];
    printf("Enter number: ");
    scanf("%s",str1);
    char *str=str1; 
    max(str);
    

    return 0;
}
