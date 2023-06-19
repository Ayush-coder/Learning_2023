#include <stdio.h>
#include <ctype.h>

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    getchar();
    
    char arr[size];
    fgets(arr,size,stdin);
    getchar();
    
    for(int i=0;i<size-1;i++)
    {
        if(islower(arr[i])!=0)
        {
            arr[i]=toupper(arr[i]);
        }
        else if(isupper(arr[i])!=0)
        {
            arr[i]=tolower(arr[i]);
        }
    }
    printf("%s",arr);
    return 0;
}
