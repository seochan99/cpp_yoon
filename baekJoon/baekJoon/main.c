#include <stdio.h>

int main(void)
{
    int b=0;
    int arr[10];
    
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        arr[i]=arr[i]%42;
    }
    
    for(int i=0;i<10;i++)
    {
        int a=0; // 매루프마다 0으로 초기화
        for(int j=0;j<i;j++) // i<j 
        {
            if(arr[i]==arr[j])
                a++;
        }
        if(a==0)
            b++;
    }
    
    printf("%d",b);
    return 0;
}

