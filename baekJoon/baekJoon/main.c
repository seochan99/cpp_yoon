#include <stdio.h>
#include <string.h>

int main(void)
{
    int num, score;
    int sum=0;
    char arr[80];
    
    scanf("%d", &num);
    
    for(int i=0;i<num;i++) // 루프문
    {
        sum=0;
        score =1 ;
        scanf("%s",arr);
        for(int j=0;j<strlen(arr);j++) // strlen활용 -> 문자열 길이 구하기 가능
        {
            if(arr[j]=='O') // 문자 나타낼때는 작은 따음표
            {
                sum+=score;
                score++;
            }
            if(arr[j]=='X')
                score=1; // 스코어 추가하고 아무것도 안더함 
        }
        printf("%d\n",sum);
    }
    return 0;
}
