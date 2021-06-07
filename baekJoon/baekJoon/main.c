#include <stdio.h>
//셀프 넘버 = 생성자가 없는 숫자
int notSelfNumber(int n) //셀프넘어 아닌 숫자 구하는 함수
{
    int total = n;
    
    while(n>0) //n이 0이하로 가기전 까지 반복
    {
        total+=n%10; //나머지
        n/=10; //나누기
    }
    return total;
    
}


int main(void)
{
    int arr[10001], i,check;
    
    for(i=1;i<10001;i++)
    {
        
        check = notSelfNumber(i);
        if(check<10001)
            arr[check]=1; // 셀프넘버가 아닌 배열의 자리에 1을 저장한다.
    }
    for(i=1;i<10001;i++)
    {
        if(arr[i]!=1) //셀프넘버 아닌건 배제
            printf("%d\n",i);
    }
    
    return 0;
}
