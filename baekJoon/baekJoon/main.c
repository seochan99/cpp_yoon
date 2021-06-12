#include <stdio.h>
#include <string.h>

int change(int n);

int main(void)
{
    char arr[15];
    int i,j,total=0;
    scanf("%s",arr);
    
    for(i='A';i<='Z';i++)
    {
        for(j=0;j<strlen(arr);j++) // 문자열 길이만큼 반복
        {
            if(i==arr[j])
                total+=change(i);
        }
    }
    total+=strlen(arr); // 숫자 +1 만큼을 더해야하므로 길이를 추가해줘야한다.
    printf("%d\n",total);
    return 0;
}

int change(int n)
{
    switch (n) {
        case 'A':
        case 'B':
        case 'C':
            return 2; // 숫자 2
        case 'D':
        case 'E':
        case 'F':
            return 3;
        case 'G':
        case 'H':
        case 'I':
            return 4;
        case 'J':
        case 'K':
        case 'L':
            return 5;
        case 'M':
        case 'N':
        case 'O':
            return 6;
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
            return 7;
        case 'T':
        case 'U':
        case 'V':
            return 8;
        default: //나머지 영어
            return 9;
    }
}
