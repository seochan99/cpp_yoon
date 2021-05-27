#include <stdio.h>

int main(void)
{
    int num1,max=0,maxnum=0;
    
    for(int i=1;i<=9;i++)
    {
        scanf("%d",&num1);
        if(num1>max)
        {
            max = num1;
            maxnum = i;
        }
    }
    printf("%d \n%d",max,maxnum);
    return 0;
}
