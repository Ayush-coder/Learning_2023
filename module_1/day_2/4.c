#include <stdio.h>

int countSetBits(int num)
{
    int count = 0;
    
    while (num != 0)
    {
        count += num & 1;  // Check the least significant bit
        num >>= 1;  // Right shift to consider the next bit
    }
    
    return count;
}

int main()
{
    int size;
    printf("Enter size ");
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    int totalBits = 0;
    for (int i = 0; i < size; i++)
    {
        totalBits += countSetBits(a[i]);
    }
    
    printf("Total number of set bits: %d\n", totalBits);
    
    return 0;
}
