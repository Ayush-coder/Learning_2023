#include <stdio.h>

void swap(char **data1, char **data2)
{
    char *temp;
    temp=*data1;
    *data1=*data2;
    *data2=temp;
}

int main()
{
    char data1[100],data2[100];
    printf("Enter data ");
    fgets(data1,100,stdin);
    fgets(data2,100,stdin);
    swap(data1,data2);
    
    printf("%s%s",data1,data2);

    return 0;
}
