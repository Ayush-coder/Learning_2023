#include <stdio.h>

void rot_left(int size, char *arr, int turn)
{
    for(int i=1;i<=turn;i++)
    {
        char a=arr[0];
        for(int j=1;j<=size;j++)
        {
            arr[j-1]=arr[j];
        }
        arr[size-1]=a;
    }
    printf("%s\n",arr);
}

void rot_right(int size, char *arr, int turn)
{
    for(int i=1;i<=turn;i++)
    {
        char a=arr[size-1];
        for(int j=size-2;j>=0;j--)
        {
            arr[j+1]=arr[j];
        }
        arr[0]=a;
    }
    printf("%s\n",arr);
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d",&size);
    
    char arr[size];
    
    printf("Enter word: ");
    scanf("%s",arr);
    
    int turn;
    printf("Enter how much turn: ");
    scanf("%d",&turn);
    
    int side;
    printf("Enter 0 for left and Enter 1 for right: ");
    scanf("%d",&side);
    
    if(side==0)
    {
        if(turn>size)
        rot_left(size,arr,turn/size);
        
        else
        rot_left(size,arr,turn);
    }
    else
    {
        if(turn>size)
        rot_right(size,arr,turn/size);
        
        else
        rot_right(size,arr,turn);
    }
    
}
