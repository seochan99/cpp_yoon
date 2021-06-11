#include <stdio.h>
#include <string.h>

int main(void)
{
    // 문자열 입력
    char arr[1000000];
    int arr2[26]={0,};
    int max,select=0,result=0,i,j;
    scanf("%s",arr);
    //대소문자 -> 대문자 통일
    for(i=0;i<strlen(arr);i++)
    {
        if((arr[i]>='a')&&(arr[i]<='z')) // 소문자 -> 대문자 바꿔줌
            arr[i]-=32;
        arr2[arr[i]-65]++; //65~90 배열의 자리에 저장
    }
    // 최댓값 찾기
    max = arr2[0];
    for(j=0;j<26;j++)
    {
        if(arr2[j]>max)
        {
            max=arr2[j];
            select = j;
        }
    }
    
    //중복값 찾기
    for(i=0;i<26;i++)
    {
        if(max==arr2[i])
            result++;
    }
    
    if(result>1)
        printf("?\n");
    else
        printf("%c\n",select+'A');
    return 0;
}
