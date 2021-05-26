#include <stdio.h>

int main(void)
{
    int h,m;
    scanf("%d %d",&h,&m);
    m-=45; // 45분 다운
    if(m<0)
    {
        h-=1; // 시간 내리기
        if(h<0)
        {
            h=23;
        }
        m = 60 + m;
    }
    printf("%d %d\n",h,m);
    return 0;
}

