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
        if((arr[i]=='l'||arr[i]=='n')&&arr[i+1]=='j') //lj, nj
            sum--;
        if(arr[i]=='d'&&arr[i+1]=='z'&&arr[i+2]=='=') //dz=
            sum--;
        if(arr[i]=='='||arr[i]=='-')// =.-가 붙었을때 이를 통해 dz= ->1개가 된다
            sum--;
    }
    printf("%d",sum);
    return 0;
}
