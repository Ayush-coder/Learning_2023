#include<stdio.h>
#define max 11

long seconds(char *p)
{
    int date,month,year;
    sscanf(p,"%d/%d/%d",&date,&month,&year);
    long total=date;
    
    if(date>=1 && date<=31 && month>=1 && month<=12 && year!=0)
    {
      
        //STATEMENT FOR LEAP YEAR
        if((month==2 && (year%4==0))&& date>29)
        {
            return 0;
        }
      
        //STATEMENT FOR FEBRUARY MONTH
        else if((month==2 && (year%4!=0))&& date>28)
        {
            return 0;
        }
      
        //STATEMENT FOR MONTHS HAVING 30 DAYS
        else if((month==4 || month==6 || month==9 || month==11) && date==31 )
        {
            return 0;
        }
    
        else
        {
        for(int i=1;i<month;i++)
        {
            if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12)
            {
                total=total+31;
            }
            if(i==4 || i==6 || i==9 || i==11 )
            {
                total=total+30;
            }
            if(i==2)
            {
                if(year%4==0)
                {
                    total=total+29;
                }
                else
                {
                    total=total+28;
                }
            }
        }
    }
    }
    
    return total;
}

int main()
{
    char arr[max];
    printf("Enter date in format dd/mm/yyyy : ");
    scanf("%s",arr);
    long tim = seconds(arr);
    if(tim==0)
    {
        printf("Enter proper date");
    }
    else
    {
        printf("%ld",tim);
    }
}