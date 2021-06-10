#include <stdio.h>
#include <string.h>
int main(void)
{
    int t;
    char s[100]; // 문자열
    
    scanf("%d",&t); // 테스트케이스 갯수
    for(int i=0;i<t;i++)
    {
        int a;
        scanf("%d %s",&a,s); // 반복횟수
        for(int j=0;j<strlen(s);j++)
        {
            for(int k=0;k<a;k++)
            {
                printf("%c",s[j]); // 문자 출력 = %c
            }
        }
        printf("\n");
    }
    return 0;
}
