#include <stdio.h>

int main(void)
{
    int n;
    int k=0;
    int i=1;
    scanf("%d",&n);
    k=n;
    while(1)
    {
        n = (((n%10)*10)+((n/10 + n%10)%10));
        if(k==n)
            break;
        i++;
    }
    printf("%d\n",i);
}

