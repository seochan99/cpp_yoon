#include <stdio.h>
#include <string.h>

int main(void)
{
    // 문자열 입력
    char arr[1000000];
    int arr2[26]={0,};
    int max,len,select=0,result=0;
    scanf("%s",arr);
    //대소문자 -> 대문자 통일
    len = strlen(arr);
    for(int i='a';i<='z';i++)
    {
        for(int j=0;j<len;j++)
        {
            if(i==arr[j]) // 소문자일때
                arr2[i-'a']++;
        }
    }
    for(int i='A';i<='Z';i++)
    {
        for(int j=0;j<len;j++)
        {
            if(i==arr[j]) // 대문자일때
                arr2[i-'A']++;
        }
    }
    // 최댓값 찾기
    max = arr2[0];
    for(int j=0;j<26;j++)
    {
        if(arr2[j]>max)
        {
            max=arr2[j];
            select = j;
        }
    }
    //중복값 찾기
    for(int i=0;i<26;i++)
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
