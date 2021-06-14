#include <stdio.h>
#include <string.h>

int main(void)
{
    char arr[100];
    int i,j,sum;
    scanf("%s",arr);
    
    sum = strlen(arr);
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
