#include <stdio.h>

int main(void)
{
    char s[100];
    scanf("%s",s);
    
    for(int i=0;s[i]!=0;i++)
    {
        printf("%d ",s[i]-97);
    }
    return 0;
}
