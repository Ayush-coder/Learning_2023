#include<stdio.h>
#define max 9

long seconds(char *p)
{
    int h,m,s;
    long total;
    sscanf(p,"%d:%d:%d",&h,&m,&s);
    if(h<=24 && h>=0 && m>=0 && m<=59 && s<=59 && s>=00)
    {
        total=(h*3600)+(m*60)+s;
    }
    return total;
}

int main()
{
    char arr[max];
    printf("Enter time in 24-hr format with hh:mm:ss : ");
    scanf("%s",arr);
    long tim = seconds(arr);
    printf("%ld",tim);
}