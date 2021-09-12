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
//#include <stdio.h>
//
//int main(void)
//{
//    int pplNum;
//    int max = 0, ppl=0;
//    int arr[1000];
//
//    scanf("%d",&pplNum); // 후보자 수 입력
//
//    for(int i=0;i<pplNum;i++) // 후보자 특표수 입력
//    {
//        scanf("%d",&arr[i]);
//        if(arr[i]>max)
//        {
//            max = arr[i]; //최댓값 저장
//        }
//    }
//    for(int i=1;i<pplNum;i++)
//    {
//        if(arr[0]>arr[i])
//        {
//            printf("%d",ppl);
//            break;
//        }
//        else
//        {
//            arr[i]--;
//            arr[0]++;
//        }
//    }
//
//
//    return 0;
//}

//
//#include <stdio.h>
//
//int main(int argc,char *argv[])
//{
//    printf("hi!\n");
//    printf("argc is %d\n",argc);
//
//    for(int i=0;i<argc;i++)
//    {
//        printf("argv[%d] is %s \n",i,argv[i]);
//    }
//
//    return 0;
//}

//sort or brute force

//
//#include <stdio.h>
//
//int main(void)
//{
//    int test;
//    int temp=0;
//    int arr[1000];
//
//    scanf("%d",&test);
//
//    for(int i=0;i<test;i++)
//    {
//        scanf("%d",&arr[i]); //입력받기
//    }
//
//    //정렬하기
//    // 버블정렬 활용
//    for(int i=0;i<test;i++)
//    {
//        for(int j=0;j<test-i-1;j++)
//        {
//            if(arr[j]>arr[j+1])
//            {
//                temp = arr[j];
//
//                arr[j] = arr[j+1];
//                arr[j+1]= temp;
//            }
//        }
//    }
//    for(int i=0;i<test;i++)
//    {
//        printf("%d\n",arr[i]);
//    }
//
//
//
//}

//Sort2
//2751
//#include <stdio.h>
//#include <stdlib.h>
//
//void MergeTwoArea(int arr[],int left, int mid, int right)
//{
//    int fIdx = left;
//    int rIdx = mid + 1;
//    int i;
//
//    int * sortArr = (int*)malloc(sizeof(int)*(right+1)); // 임시배열 생성
//    int sIdx = left;
//
//    while(fIdx<=mid && rIdx <= right)
//    {
//        if(arr[fIdx]<=arr[rIdx])
//            sortArr[sIdx] = arr[fIdx++];
//        else
//            sortArr[sIdx] = arr[rIdx++];
//
//        sIdx++;
//    }
//
//    if(fIdx>mid)
//    {
//        for(i=rIdx;i<=right;i++,sIdx++)
//            sortArr[sIdx]=arr[i];
//    }
//    else
//    {
//        for(i=fIdx;i<=mid;i++,sIdx++)
//            sortArr[sIdx]=arr[i];
//    }
//    for(i=left;i<=right;i++)
//        arr[i] = sortArr[i];
//
//    free(sortArr); //해제
//}
//
//
//void MergeSort(int arr[],int left,int right)
//{
//    int mid;
//
//    if(left<right)
//    {
//        //check mid
//        mid = (left+right)/2;
//
//        // Divide
//        MergeSort(arr, left, mid);
//        MergeSort(arr, mid+1, right);
//
//        //Merge
//        MergeTwoArea(arr, left, mid, right);
//    }
//
//
//}
//
//
//int main(void)
//{
//    int arr[1000000];
//    int test;
//
//    scanf("%d",&test);
//
//    for(int i=0;i<test;i++)
//    {
//        scanf("%d",&arr[i]);
//    }
//
//    MergeSort(arr, 0, test-1);
//
//    for(int i=0;i<test;i++)
//    {
//        printf("%d\n",arr[i]);
//    }
//    return 0;
//}

//sort3
//10989
// Quick Sort
//
//#include <stdio.h>
//
//int count[10001];
//
//int main(void)
//{
//    int test,num;
//    scanf("%d",&test);
//    for(int i=0;i<test;i++)
//    {
//        scanf("%d",&num); //num넣기
//        count[num]++; //각 인덱스에 해당하는 값 올려주기 // 삽입되는 숫자가 그 인덱스에 해당하는 값으로 들어감
//    }
//    for(int i=0;i<=10000;i++)
//    {
//        if(count[i]==0)
//            continue;
//        for(int j=0;j<count[i];j++)
//        {
//            printf("%d\n",i);
//        }
//    }
//    return 0;
//}

//2108 : 통계학
//#include <stdio.h>
//#include <stdlib.h>
//
//void MergeTwoArea(int arr[],int left, int mid, int right)
//{
//    int fIdx = left;
//    int rIdx = mid + 1;
//    int i;
//
//    int * sortArr = (int*)malloc(sizeof(int)*(right+1)); // 임시배열 생성
//    int sIdx = left;
//
//    while(fIdx<=mid && rIdx <= right)
//    {
//        if(arr[fIdx]<=arr[rIdx])
//            sortArr[sIdx] = arr[fIdx++];
//        else
//            sortArr[sIdx] = arr[rIdx++];
//
//        sIdx++;
//    }
//
//    if(fIdx>mid)
//    {
//        for(i=rIdx;i<=right;i++,sIdx++)
//            sortArr[sIdx]=arr[i];
//    }
//    else
//    {
//        for(i=fIdx;i<=mid;i++,sIdx++)
//            sortArr[sIdx]=arr[i];
//    }
//    for(i=left;i<=right;i++)
//        arr[i] = sortArr[i];
//
//    free(sortArr); //해제
//}
//
//
//void MergeSort(int arr[],int left,int right)
//{
//    int mid;
//
//    if(left<right)
//    {
//        //check mid
//        mid = (left+right)/2;
//
//        // Divide
//        MergeSort(arr, left, mid);
//        MergeSort(arr, mid+1, right);
//
//        //Merge
//        MergeTwoArea(arr, left, mid, right);
//    }
//}
//
//int arr1[500001]={0,};
//
//int cnt[8001]={0,};
//
//int maxFinder(int *arr,int size_arr) // 최댓값 찾기
//{
//    int maxN = arr[0];
//    for(int i=0;i<size_arr;i++)
//    {
//        if(maxN<arr[i])
//            maxN=arr[i];
//    }
//    return maxN;
//}
//
//int main(void)
//{
//
//    int num;
//    int sum=0, flags=0;
//    int min=4000;
//    int max=-4000;
//    int mode =0;
//    scanf("%d",&num);
//
//    //입력받기
//    for(int i=0;i<num;i++)
//    {
//        scanf("%d",&arr1[i]);
//
//        if(arr1[i]>=max)
//            max = arr1[i];
//        if(arr1[i]<=min)
//            min = arr1[i];
//        sum+=arr1[i];
//
//        //최반값을 위해 인덱스 값 올려주기
//        cnt[arr1[i]+4000]++;
//    }
//    for(int i=0;i<8001;i++)
//    {
//        if(maxFinder(cnt, 8001)==cnt[i])
//            flags++;
//    }
//
//    for(int i=0;i<8001;i++)
//    {
//        if(flags==1)
//        {
//            if(maxFinder(cnt, 8001)==cnt[i])
//            {
//                mode = i-4000;
//                break;
//            }
//        }else
//        {
//            if(maxFinder(cnt, 8001)==cnt[i]){
//                if(flags==0){
//                    mode = i -4000;
//                    break;
//                }
//                else{
//                    flags = 0 ; //0으로 초기화 시키기
//                }
//            }
//        }
//    }
//
//
//    //정렬하기
//    MergeSort(arr1, 0, num-1);
//    //평균 출력
//    printf("%.0f\n",(double)sum/num);
//    //중앙값 출력
//    printf("%d\n",arr1[num/2]);
//    //최반값
//    printf("%d\n",mode);
//    //범위
//    printf("%d\n",max-min);
//
//              return 0;
//          }
//

// 1427 : 소트인사이드
//
//#include <stdio.h>
//#include <string.h>
//
//int main(void)
//{
//    char arr[10];
//    char temp;
//    // num string 입력받기
//    scanf("%s",arr);
//
//    //버블정렬 진행
//    for(int i=0;i<strlen(arr);i++)
//    {
//        for(int j=0;j<strlen(arr)-i-1;j++)
//        {
//            if(arr[j]<arr[j+1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//
//            }
//        }
//    }
//    printf("%s\n",arr);
//
//    return 0;
//}


// 11650 : 좌표 정렬하기 1. x->y
// 11651 : 좌표 정렬하기 2  y->x
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct _point{
//    int x;
//    int y;
//}Point;
//
//void MergeTwoArea(Point arr[],int left, int mid, int right);
//void MergeSort(Point*arr,int left,int right);
//
//
//int main(void)
//{
//    int num;
//    scanf("%d",&num);
//
//    //구조체 변수 동적할당
//    Point*arr =(Point*)malloc(sizeof(Point)*num);
//    for(int i=0;i<num;i++)
//    {
//        scanf("%d %d",&arr[i].x,&arr[i].y); //할당받은 배열에 삽입
//    }
//    //정렬
//    MergeSort(arr, 0, num-1);
//    //출력
//    for(int i=0;i<num;i++){
//        printf("%d %d \n",arr[i].x,arr[i].y);
//    }
//
//    free(arr); // 동적할당해제
//
//    return 0;
//}
//void MergeTwoArea(Point*arr,int left, int mid, int right)
//{
//    int fIdx = left;
//    int rIdx = mid + 1;
//    int i;
//
//    Point * sortArr = (Point*)malloc(sizeof(Point)*(right+1)); // 임시 구조체 배열 생성
//    int sIdx = left;
//
//    while(fIdx<=mid && rIdx <= right)
//    {
//        if(arr[fIdx].y<arr[rIdx].y)
//            sortArr[sIdx] = arr[fIdx++];
//        else if(arr[fIdx].y>arr[rIdx].y)
//            sortArr[sIdx] = arr[rIdx++];
//        else
//        {
//            if(arr[fIdx].x<arr[rIdx].x)
//                sortArr[sIdx] = arr[fIdx++];
//            else
//                sortArr[sIdx] = arr[rIdx++];
//        }
//        sIdx++;
//    }
//
//    if(fIdx>mid)
//    {
//        for(i=rIdx;i<=right;i++,sIdx++)
//            sortArr[sIdx]=arr[i];
//    }
//    else
//    {
//        for(i=fIdx;i<=mid;i++,sIdx++)
//            sortArr[sIdx]=arr[i];
//    }
//    for(i=left;i<=right;i++)
//        arr[i] = sortArr[i];
//
//    free(sortArr); //해제
//}
//
//
//void MergeSort(Point*arr,int left,int right)
//{
//    int mid;
//
//    if(left<right)
//    {
//        //check mid
//        mid = (left+right)/2;
//
//        // Divide
//        MergeSort(arr, left, mid);
//        MergeSort(arr, mid+1, right);
//
//        //Merge
//        MergeTwoArea(arr, left, mid, right);
//    }
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct _Strings
//{
//    char english[50]; // 영어 문자열
//    int length;
//
//}String;
//
//void MergeTwoArea(String arr[],int left, int mid, int right);
//void MergeSort(String*arr,int left,int right);
//
//
//int main(void)
//{
//    int num;
//
//    scanf("%d",&num);
//
//    //구조체 동적할당
//    String*arr =(String*)malloc(sizeof(String)*num);
//
//    //입력받기
//    for(int i=0;i<num;i++)
//    {
//        scanf("%s",arr[i].english);
//
//        //문자열 길이 저장
//        arr[i].length = strlen(arr[i].english);
//    }
//    //정렬
//    MergeSort(arr, 0, num-1);
//
//    //출력
//    for(int i=0;i<num;i++)
//    {
//        if(i==0)
//            printf("%s\n",arr[i].english);
//        else
//        {
//            if(strcmp(arr[i].english, arr[i-1].english)!=0) //이전요소랑 비교해서 strcmp가 0이아니면 출력
//                printf("%s\n",arr[i].english);
//        }
//
//    }
//
//    //동적할당 해제
//    free(arr);
//    return 0;
//}
//
//void MergeTwoArea(String*arr,int left, int mid, int right)
//{
//    int fIdx = left;
//    int rIdx = mid + 1;
//    int i;
//
//    String * sortArr = (String*)malloc(sizeof(String)*(right+1)); // 임시 구조체 배열 생성
//    int sIdx = left;
//
//    while(fIdx<=mid && rIdx <= right)
//    {
//        if(arr[fIdx].length<arr[rIdx].length)
//            sortArr[sIdx] = arr[fIdx++];
//        else if(arr[fIdx].length>arr[rIdx].length)
//            sortArr[sIdx] = arr[rIdx++];
//        else //길이가 같을때
//        {
//
//            if(strcmp(arr[fIdx].english,arr[rIdx].english)<0)
//                sortArr[sIdx] = arr[fIdx++];
//            else
//                sortArr[sIdx] = arr[rIdx++];
//        }
//        sIdx++;
//    }
//
//    if(fIdx>mid)
//    {
//        for(i=rIdx;i<=right;i++,sIdx++)
//            sortArr[sIdx]=arr[i];
//    }
//    else
//    {
//        for(i=fIdx;i<=mid;i++,sIdx++)
//            sortArr[sIdx]=arr[i];
//    }
//    for(i=left;i<=right;i++)
//        arr[i] = sortArr[i];
//
//    free(sortArr); //해제
//}
//
//
//void MergeSort(String*arr,int left,int right)
//{
//    int mid;
//
//    if(left<right)
//    {
//        //check mid
//        mid = (left+right)/2;
//
//        // Divide
//        MergeSort(arr, left, mid);
//        MergeSort(arr, mid+1, right);
//
//        //Merge
//        MergeTwoArea(arr, left, mid, right);
//    }
//}
//

// 10814 : 나이순 정렬
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _Strings
{
    char name[102]; // 영어 문자열
    int age;
    
}String;

void MergeTwoArea(String arr[],int left, int mid, int right);
void MergeSort(String*arr,int left,int right);


int main(void)
{
    int num;
    
    scanf("%d",&num);
    
    //구조체 동적할당
    String*arr =(String*)malloc(sizeof(String)*num);
    
    //입력받기
    for(int i=0;i<num;i++)
        scanf("%d %s",&arr[i].age,arr[i].name);
    //정렬
    MergeSort(arr, 0, num-1);
    
    //출력
    for(int i=0;i<num;i++)
    {
        printf("%d %s\n",arr[i].age,arr[i].name);
        
    }
    
    //동적할당 해제
    free(arr);
    return 0;
}

void MergeTwoArea(String*arr,int left, int mid, int right)
{
    int fIdx = left;
    int rIdx = mid + 1;
    int i;

    String * sortArr = (String*)malloc(sizeof(String)*(right+1)); // 임시 구조체 배열 생성
    int sIdx = left;

    while(fIdx<=mid && rIdx <= right)
    {
        if(arr[fIdx].age<=arr[rIdx].age)
            sortArr[sIdx] = arr[fIdx++];
        else
            sortArr[sIdx] = arr[rIdx++];
        sIdx++;
    }

    if(fIdx>mid)
    {
        for(i=rIdx;i<=right;i++,sIdx++)
            sortArr[sIdx]=arr[i];
    }
    else
    {
        for(i=fIdx;i<=mid;i++,sIdx++)
            sortArr[sIdx]=arr[i];
    }
    for(i=left;i<=right;i++)
        arr[i] = sortArr[i];

    free(sortArr); //해제
}


void MergeSort(String*arr,int left,int right)
{
    int mid;

    if(left<right)
    {
        //check mid
        mid = (left+right)/2;

        // Divide
        MergeSort(arr, left, mid);
        MergeSort(arr, mid+1, right);

        //Merge
        MergeTwoArea(arr, left, mid, right);
    }
}

