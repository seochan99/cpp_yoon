#include <stdio.h>

int change(int num)
{
    num = ((num%10)*100)+(((num/10)%10)*10)+(num/100);
    return num;
}

int main(void)
{
    int a,b;
    scanf("%d %d",&a,&b);
    a = change(a);
    b = change(b);
    if(a>b)
        printf("%d\n",a);
    else
        printf("%d\n",b);
    return 0;
}
