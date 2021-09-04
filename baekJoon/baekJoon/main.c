#include <stdio.h>

int minN(int a, int b)
{
    return a < b ? a : b;
}

int a,b,sum,min = (int)1e9;

int main(void)
{
    scanf("%d %d",&a,&b);
    
    for(int i=1;i*i<=b;i++)
    {
        if(i*i>=a)
        {
            min = minN(min,i*i);
            sum += i*i;
        }
    }
    
    if(sum)
        printf("%d \n%d\n",sum,min);
    else
        printf("-1\n");
       
    
    return 0;
}
