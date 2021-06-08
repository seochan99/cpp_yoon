#include <stdio.h>

int main(void)
{
    int n,sum=0;
    char a[100]={0,};

    scanf("%d",&n);
    scanf("%s",a);
    
    for(int i=0;i<n;i++)
        sum+=a[i]-'0'; // 아스키 0 = 48이므로!!!
    printf("%d\n",sum);
    return 0;
}
