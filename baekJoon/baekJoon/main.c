#include <stdio.h>
// 한수 : 각자릿수가 등차수열을 이룬다
void HanSoo(int n) //셀프넘어 아닌 숫자 구하는 함수
{
    int total = 99;
    int a,b,c;
    if(n<100)
    {
        printf("%d",n);
    }else
    {
    for(int i=100;i<=n;i++) // 100이하일때는 모두 성립한다.
    {
        a=i/100; //100의 자리수
        b=i/10%10; // 10의 자리수
        c = i % 10; // 1의 자리수
        
        if((b-a)==(c-b))
            total++;
    }
        printf("%d",total);
    }
}

int main(void)
{
    int n;
    scanf("%d",&n);
    HanSoo(n);
    return 0;
}
