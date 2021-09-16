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
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct _Strings
//{
//    char name[102]; // 영어 문자열
//    int age;
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
//        scanf("%d %s",&arr[i].age,arr[i].name);
//    //정렬
//    MergeSort(arr, 0, num-1);
//
//    //출력
//    for(int i=0;i<num;i++)
//    {
//        printf("%d %s\n",arr[i].age,arr[i].name);
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
//        if(arr[fIdx].age<=arr[rIdx].age)
//            sortArr[sIdx] = arr[fIdx++];
//        else
//            sortArr[sIdx] = arr[rIdx++];
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

// 18870 : 좌표압축
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct point{
//    int number;
//    int compressNumber;
//}Point;
//
//int main(void)
//{
//    int num;
//    scanf("%d",&num);
//
//    Point*arr=(Point*)malloc(sizeof(Point)*num);
//    for(int i=0;i<num;i++)
//    {
//        scanf("%d",&arr[i].number);
//        arr[i].compressNumber = 0;
//        arr[i].same =0;
//    }
//
//    for(int i=0;i<num;i++)
//    {
//        for(int j=0;j<num;j++)
//        {
//            if(arr[i].number>arr[j].number)
//            {
//                arr[i].compressNumber++;
//            }
//        }
//    }
//
//    for(int i=0;i<num;i++)
//    {
//        printf("%d ",arr[i].compressNumber);
//    }
//
//    free(arr);
//    return 0;
//}

//15650
//#include <stdio.h>
//
//int n,m;
//int result[1000];
//int check[1000];
//
//void DFS(int depth,int cut)
//{
//    int i;
//
//    if(depth==m)
//    {
//        for(int i=0;i<m;i++)
//            printf("%d ",result[i]);
//        printf("\n");
//    }
//    else
//    {
//        for(i=1;i<=n;i++)
//        {
//            if(check[i]==0&&cut<i)
//            {
//                result[depth]=i;
//                check[i]=1;
//                DFS(depth+1,i);
//                check[i]=0;
//            }
//        }
//    }
//}
//
//int main(void)
//{
//    scanf("%d %d",&n,&m);
//    DFS(0,0);
//    return 0;
//}

//15651
//#include <stdio.h>
//
//int n,m;
//int result[1000];
//
//void DFS(int depth, int cut)
//{
//    int i;
//
//    if(depth==m)
//    {
//        for(int i=0;i<m;i++)
//            printf("%d ",result[i]);
//        printf("\n");
//    }
//    else
//    {
//        for(i=1;i<=n;i++)
//        {
//            if(cut<=i)
//            {
//                result[depth]=i;
//                DFS(depth+1,i);
//            }
//
//        }
//    }
//}
//
//int main(void)
//{
//    scanf("%d %d",&n,&m);
//    DFS(0,0);
//    return 0;
//}


// 15652
//#include <stdio.h>
//
//int n,m;
//int result[1000];
//
//
//void DFS(int depth,int cut)
//{
//    int i;
//
//    if(depth==m)
//    {
//        for(int i=0;i<m;i++)
//            printf("%d ",result[i]);
//        printf("\n");
//    }
//    else
//    {
//        for(i=1;i<=n;i++)
//        {
//            if(cut<i)
//            {
//                result[depth]=i;
//                DFS(depth+1,i);
//            }
//        }
//    }
//}
//
//int main(void)
//{
//    scanf("%d %d",&n,&m);
//    DFS(0,0);
//    return 0;
//}
//

//10828 : 스택
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define TRUE 1
//#define FALSE 0
//#define STACK_LEN 10000
//
//typedef int Data;
//
//typedef struct stack{
//    Data stackArr[STACK_LEN];
//    int topIndex;
//}Stack;
//
//void stackInit(Stack * pstack); // init
//int SIsEmpty(Stack * pstack); // empty
//
//void SPush(Stack * pstack, Data data); //push
//Data SPop(Stack * pstack); // pop
//Data SSize(Stack * pstack);
//Data SPeek(Stack * pstack); //top
//
//int main(void)
//{
//    int num;
//    char str[6];
//    int newNum;
//    //스택생성,초기화
//    Stack stack;
//    stackInit(&stack);
//
//    scanf("%d",&num);
//    for(int i=0;i<num;i++)
//    {
//        scanf("%s",str);
//        if(!strcmp(str, "push"))//같으면 0출력
//        {
//            scanf("%d",&newNum);
//            SPush(&stack, newNum);
//        }
//        else if(!strcmp(str, "pop"))
//        {
//            printf("%d\n",SPop(&stack));
//        }
//        else if(!strcmp(str, "size"))
//        {
//            printf("%d\n",SSize(&stack));
//        }
//        else if(!strcmp(str, "empty"))
//        {
//            printf("%d\n",SIsEmpty(&stack));
//        }
//        else if(!strcmp(str, "top"))
//        {
//            printf("%d\n",SPeek(&stack));
//        }
//    }
//    return 0;
//}
//
//void stackInit(Stack * pstack)
//{
//    pstack->topIndex = -1; //빈상태
//}
//
//int SIsEmpty(Stack * pstack)
//{
//    if(pstack->topIndex == -1) //빔
//        return TRUE;
//    else
//        return FALSE;
//}
//
//void SPush(Stack * pstack, Data data)
//{
//    pstack->stackArr[++(pstack->topIndex)] = data; // 데이터 저장
//}
//Data SSize(Stack * pstack)
//{
//    return pstack->topIndex+1;
//}
//
//Data SPop(Stack * pstack)
//{
////    int rIdx;
//    if(SIsEmpty(pstack))
//    {
//        return -1;
//    }
////    rIdx = pstack->topIndex; //삭제할 데이터 저장
////    pstack->topIndex -= 1;
////    return pstack->stackArr[rIdx]; // 삭제되는 값 반환
//    return pstack->stackArr[(pstack->topIndex)--]; // 한줄코딩
//}
//
//Data SPeek(Stack * pstack)
//{
//    if(SIsEmpty(pstack))
//    {
//        return -1;
//    }
//
//    return pstack->stackArr[pstack->topIndex]; // 맨위 저장된 값 반환
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int top=0;
//char arr[1001], stack[1001];
//
//int main(void)
//{
//    int t;
//    scanf("%d ",&t);
//    for(int i=0;i<t;i++) //반복문 실행
//    {
//        fgets(arr, 1001, stdin); //문장입력받기
//        for(int i=0;i<strlen(arr)-1;i++)
//        {
//            if(arr[i]!=' ')
//            {
//                stack[top++] = arr[i];
//            }
//
//            if(arr[i]==' ' || i==strlen(arr)-2)
//            {
//                for(int i=top-1;i>=0;i--)
//                    printf("%c",stack[i]);
//                printf(" ");
//                top=0;
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

//9012
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    int test;
//    scanf("%d", &test);
//    char arr[50];
//
//    for(int i=0; i<test; i++){
//        int cnt = 0;
//        scanf("%s", arr);
//
//        for(int j=0; j<strlen(arr); j++){
//
//            if(cnt<0){
//                break;
//            }
//
//            if(arr[j]=='('){
//                cnt++;
//            }else{
//                cnt--;
//            }
//
//        }
//        if(cnt==0){
//            printf("YES\n");
//        }else
//        {
//            printf("NO\n");
//        }
//    }
//    return 0;
//}

//10773 : 제로
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define STACK_LEN 100000
//int sum=0;
//typedef int Data;
//
//typedef struct stack{
//    Data stackArr[STACK_LEN];
//    int topIndex;
//}Stack;
//
//void stackInit(Stack * pstack); // init
//int SIsEmpty(Stack * pstack); // empty
//
//void SPush(Stack * pstack, Data data); //push
//void SPop(Stack * pstack); // pop
//Data SSum(Stack * pstack);
//
//int main(void)
//{
//    int num;
//
//    int newNum;
//    //스택생성,초기화
//    Stack stack;
//    stackInit(&stack);
//
//    scanf("%d",&num);
//    for(int i=0;i<num;i++)
//    {
//        scanf("%d",&newNum);
//        if(newNum!=0)
//        {
//            SPush(&stack, newNum);
//
//        }else
//        {
//            SPop(&stack); //빼기
//        }
//    }
//
//    printf("%d\n",SSum(&stack));
//    return 0;
//}
//
//void stackInit(Stack * pstack)
//{
//    pstack->topIndex = -1; //빈상태
//}
//
//
//void SPush(Stack * pstack, Data data)
//{
//    pstack->stackArr[++(pstack->topIndex)] = data; // 데이터 저장
//}
//
//void SPop(Stack * pstack)
//{
//    pstack->topIndex -= 1;
//}
////
//Data SSum(Stack * pstack)
//{
//    for(int i=0;i<=pstack->topIndex;i++)
//    {
//        sum+=pstack->stackArr[i];
//    }
//    return sum;
//}

// 4949 :균형잡힌 세상





// 예제 1
//#include <stdio.h>
//
//int main(void)
//{
//    int a,b,c,d;
//    int sum=0;
//    float avg=0;
//
//    scanf("%d %d %d %d",&a,&b,&c,&d);
//
//    sum=a+b+c+d;
//    avg = sum/4;
//    avg = sum/4; -> avg = (float)/4.0;
//    printf("국어 : %d \n",a);
//    printf("수학 : %d \n",b);
//    printf("영어 : %d \n",c);
//    printf("과학 : %d \n",d);
//
//
//    printf("총합 : %d\n",sum);
//    printf("평균 : %0.2f\n",avg);
//
//    return 0;
//}

//예제2
//#include <stdio.h>
//
//int main(void)
//{
//    printf(" 문자열 : %s\n","아ㅏㅇ아ㅏ");
//    printf(" 문자 1개 : %c\n",'A');
//    printf("%d\n",-4);
//    printf("%u\n",5);
//
//
//    return 0;
//}
//
//gcc ./main.c
//./a out
//

//예제 3
//#include <stdio.h>
//
//int main(void)
//{
//    //사각형 넓이
//    int a,b,c,d;
//    float t=0;
//
//    printf("사각형의 가로 세로를 입력하시오. \n");
//    scanf("%d %d",&a,&b);
//    printf("직각 삼각형의 밑변, 높이를 입력하시오.\n ");
//    scanf("%d %d",&c,&d);
//
//    t=(float)(c*d/2);
//    printf("사각형의 넓이 : %d \n",a*b);
//    printf("삼각형의 넓이 : %0.2f \n",t);
//
//
//    return 0;
//}
//

//예제 4
//#include <stdio.h>
//
//int main(void)
//{
//    int height;
//    int weight;
//    float bmi = 0;
//
//    printf("체중을 입력하시오. \n");
//    scanf("%d",&weight);
//    printf("신장을 입력하시오. \n");
//    scanf("%d",&height);
//
//    bmi=height/weight;
//
//    if(bmi>=30)
//    {
//        printf("비만\n");
//    }else if(bmi>=25 && bmi<=29)
//    {
//        printf("과체중\n");
//    }else if(bmi>=20 && bmi<=24)
//    {
//        printf("정상\n");
//    }
//    else{
//        printf("저체중\n");
//    }
//    return 0;
//}
