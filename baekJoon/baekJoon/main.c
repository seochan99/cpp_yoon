#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[1000000];
    int i,cnt=0,len;
    
    scanf("%[^\n]",arr); // null이 나오기 전까지 읽어버린다 ! = 엔터가 나올때까지 문자열로 받는다 !
    len = strlen(arr);
    
    if(len == 1)
    {
        if(arr[0]==' ')
        {
            printf("0\n");
            return 0;
        }
    }
    
    for(i=1;i<len-1;i++) //마지막은 널문자, i 는 1부터 시작 
    {
        if(arr[i]==' ')
            cnt++; //공백 갯수 세기
    }
    printf("%d\n",cnt+1); //공백 + 1 = 단어갯수
    return 0;
}
