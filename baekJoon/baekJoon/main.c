#include <stdio.h>


int main(void)
{
    int n,max;
    double arr[1000];
    double total=0;
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&arr[i]);
    }
    // 최댓값 구하기
    max = arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
            
        
    }
    // 평균 구하기
    for(int i=0;i<n;i++)
        {
            arr[i]=(arr[i]/max*100);
            total+=arr[i];
        }
        
    total = total/n;
    printf("%lf",total);
    return 0;
}
