#include <stdio.h>
#include <stdlib.h>

int stoi(char *s,int size)
{
    int num=0;
    for(int i=0;i<size;i++)
    {
        int n=s[i] - '0';
        num=num*10+n;
    }
    
    return num;
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    getchar();
    
    char arr[size+1];
    scanf("%s",arr);
    
    int num=stoi(arr,size);
    
    printf("%d",10*num);
}
