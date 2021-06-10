#include <stdio.h>
#include <string.h>

int main(void)
{
    int arr[26];
    char arr2[100];
    scanf("%s",arr2); // 문자열 입력 받기
    for(int i=0;i<26;i++) // 모든 배열에 -1저장
        arr[i]=-1;
    
    for(int i=0;i<strlen(arr2);i++)
    {
        if(arr[arr2[i]-97]==-1) // 97 = 'a' // 저장된 위치찾음 
        {
            arr[arr2[i]-97]=i;
        }
    }
    for(int i=0;i<26;i++)
        printf("%d ",arr[i]);
    
    
    
    return 0;
}
