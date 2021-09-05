//1997
//#include <stdio.h>
//
//int minN(int a, int b)
//{
//    return a < b ? a : b;
//}
//
//int a,b,sum,min = (int)1e9;
//
//int main(void)
//{
//    scanf("%d %d",&a,&b);
//
//    for(int i=1;i*i<=b;i++)
//    {
//        if(i*i>=a)
//        {
//            min = minN(min,i*i);
//            sum += i*i;
//        }
//    }
//
//    if(sum)
//        printf("%d \n%d\n",sum,min);
//    else
//        printf("-1\n");
//
//
//    return 0;
//}

//11098
//#include <stdio.h>
//
//int money;
//char name[2e9];
//
//int main(void)
//{
//    int n;
//    scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//
//        int top=0;
//        scanf("%d %s",&money,&name);
//        printf("%d %s",money,name);
//    }
//
//    return 0;
//}

//1417
#include <stdio.h>

int main(void)
{
    int pplNum;
    int max = 0, ppl=0;
    int arr[1000];
    
    scanf("%d",&pplNum); // 후보자 수 입력
    
    for(int i=0;i<pplNum;i++) // 후보자 특표수 입력
    {
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        {
            max = arr[i]; //최댓값 저장
        }
    }
    for(int i=1;i<pplNum;i++)
    {
        if(arr[0]>arr[i])
        {
            printf("%d",ppl);
            break;
        }
        else
        {
            arr[i]--;
            arr[0]++;
        }
    }
    
    
    return 0;
}
