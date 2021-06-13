#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100];
    int i,j,sum;
    scanf("%s",arr);
    
    sum = strlen(arr); // 문자열 길이만큼이 합
    // =,- 이 붙으면 한 개 뺀다!
    // lj, nj -> j와 l,n이 만나면 한 개 뺀다 !
    // dj= -> dj= 한 개 뺀다 !
    for(i=0;i<strlen(arr);i++)
    {
        if((arr[i]=='l'||arr[i]=='n')&&arr[i+1]=='j')
            sum--;
        if(arr[)
    }
    
    
    return 0;
}
