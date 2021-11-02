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
//    int * sortArr = (int*)malloc((insizeoft)*(right+1)); // 임시배열 생성
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
//#include <stdio.h>
//
//int i,top,n;
//int stack[101];
//char str[101];
//
//void push(void){
//    stack[++top]=str[i];
//}
//int pop(void)
//{
//    if((str[i]==')'&&stack[top]=='(')||(str[i]==']'&&stack[top]=='['))
//    {
//        top--;
//        return 1;
//    }else
//        return 0;
//}
//
//
//int main(void)
//{
//    while (1) {
//        gets(str);
//        top =-1;
//        n=1;
//        if(str[0]=='.')
//            break;
//        for(i=0;str[i]!='.';i++)
//        {
//            if(!n)
//                continue;
//            if(str[i]=='(')
//                push();
//            if(str[i]==')')
//                pop();
//            if(str[i]=='[')
//                push();
//            if(str[i]==']')
//                pop();
//        }
//        if(top==-1&&n)
//            puts("YES");
//        else
//            puts("NO");
//    }
//    return 0;
//}




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
// 10845 : 큐  /    연결리스트기반
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//#define TRUE 1
//#define FALSE 0
//
//typedef int Data;
//int size=0;
//
//typedef struct _node{
//    Data data;
//    struct _node * next;
//}Node;
//
//typedef struct _lQueue
//{
//    Node * front;
//    Node * rear;
//}Queue;
//
//void QueueInit(Queue * pq);
//int QIsEmpty(Queue * pq);
//
//void Enqueue(Queue * pq, Data data);
//Data Dequeue(Queue * pq);
//
//int main(void)
//{
//    Queue q;
//    char str[6];
//    int newNum;
//    QueueInit(&q);
//
//    int num;
//    scanf("%d",&num);
//        for(int i=0;i<num;i++)
//        {
//            scanf("%s",str);
//            if(!strcmp(str, "push"))//같으면 0출력
//            {
//                scanf("%d",&newNum);
//                Enqueue(&q, newNum);
//            }
//            else if(!strcmp(str, "pop"))
//            {
//                printf("%d\n",Dequeue(&q));
//            }
//            else if(!strcmp(str, "size"))
//            {
//                printf("%d\n",size);
//            }
//            else if(!strcmp(str, "empty"))
//            {
//                printf("%d\n",QIsEmpty(&q));
//            }
//            else if(!strcmp(str, "front"))
//            {
//                printf("%d\n",q.front->data);
//            }
//            else if(!strcmp(str, "back"))
//            {
//                printf("%d\n",q.rear->data);
//            }
//        }
//    return 0;
//}
//
//
//void QueueInit(Queue *pq)
//{
//    pq->front = NULL;
//    pq->rear = NULL;
//}
//
//int QIsEmpty(Queue * pq)
//{
//    if(pq->front == NULL)
//        return TRUE;
//    else
//        return FALSE;
//}
//
//void Enqueue(Queue * pq, Data data)
//{
//    Node * newNode = (Node*)malloc(sizeof(Node));
//    newNode->next = NULL;
//    newNode->data = data;
//
//    if(QIsEmpty(pq))
//    {
//        pq->front = newNode;
//        pq->rear = newNode;
//    }
//    else
//    {
//        pq->rear->next = newNode;
//        pq->rear = newNode;
//    }
//    size++;
//}
//Data Dequeue(Queue * pq)
//{
//    Node * delNode;
//    Data retData;
//
//    if(QIsEmpty(pq))
//    {
//        return -1;
//    }
//    delNode = pq->front;
//    retData = delNode->data;
//    pq->front = pq->front->next;
//    size--;
//
//    free(delNode);
//    return retData; // 삭제되는 데이터 값 반환
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//#define TRUE 1
//#define FALSE 0
//
//#define QUE_LEN 2000001
//typedef int Data;
//
//typedef struct _cQueue
//{
//    int front;
//    int rear;
//    Data queArr[QUE_LEN];
//}Queue;
//
//void QueueInit(Queue * pq)
//{
//    pq->front = 0;
//    pq->rear = 0;
//}
//
//int QIsEmpty(Queue * pq)
//{
//    if(pq->front == pq->rear)
//        return TRUE;
//    else
//        return FALSE;
//}
//
//int front(Queue *pq)
//{
//    if(QIsEmpty(pq))
//    {
//        return -1;
//    }
//    return pq->queArr[pq->front+1];
//}
//
//int back(Queue *pq)
//{
//    if(QIsEmpty(pq))
//    {
//        return -1;
//    }
//    return pq->queArr[pq->rear];
//}
//
//
//void Enqueue(Queue * pq, Data data)
//{
//    pq->rear = (pq->rear + 1) % QUE_LEN;
//    pq->queArr[pq->rear] = data;
//}
//
//Data Dequeue(Queue * pq)
//{
//    if(QIsEmpty(pq))
//    {
//        return -1;
//    }
//
//    pq->front = (pq->front+1)%QUE_LEN;
//    return pq->queArr[pq->front];
//}
//
//int size(Queue *pq)
//{
//        return pq->rear - pq->front;
//}
//
//int main(void)
//{
//    Queue q;
//    char str[6];
//    int newNum;
//    QueueInit(&q);
//
//    int num;
//    scanf("%d",&num);
//        for(int i=0;i<num;i++)
//        {
//            scanf("%s",str);
//            if(!strcmp(str, "push"))//같으면 0출력
//            {
//                scanf("%d",&newNum);
//                Enqueue(&q, newNum);
//            }
//            else if(!strcmp(str, "pop"))
//            {
//                printf("%d\n",Dequeue(&q));
//            }
//            else if(!strcmp(str, "size"))
//            {
//                printf("%d\n",size(&q));
//            }
//            else if(!strcmp(str, "empty"))
//            {
//                printf("%d\n",QIsEmpty(&q));
//            }
//            else if(!strcmp(str, "front"))
//            {
//                printf("%d\n",front(&q));
//            }
//            else if(!strcmp(str, "back"))
//            {
//                printf("%d\n",back(&q));
//            }
//        }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main(int argc,char *argv[])
//{
//    int ko,math,eng;
//    int sum=0;
//    double avg = 0;
//    char rank;
//
//    scanf("%d %d %d",&ko,&math,&eng);
//    sum=ko+math+eng;
//
//    avg =(double)sum/3;
//
//    if(avg>=90)
//        rank ='A';
//    else if(avg>=80)
//        rank ='B';
//    else if(avg>=70)
//        rank ='C';
//    else
//        rank ='F';
//
//    switch (rank) {
//        case 'A':
//            printf("excellent!\n");
//            break;
//        case 'B':
//            printf("great\n");
//            break;
//        case 'C':
//            printf("good!\n");
//            break;
//        default:
//            printf("bad...\n");
//            break;
//    }
//    switch ((int)avg/10) {
//        case 10:
//        case 9:
//            printf("excellent!\n");
//            break;
//        case 'C':
//            printf("good!\n");
//            break;
//        default:
//            printf("bad...\n");
//            break;
//    }
//    return 0;
//}
//#include <stdio.h>
//
//int main(int argc,char *argv[])
//{
//    int year;
//
//    scanf("%d",&year);
//    switch (((year%4==0)&&(year%100!=0))||(year%400==0)) {
//        case 1:
//            printf("%d 윤년 \n",year);
//            break;
//        case 2:
//            printf("%d 평년아님 \n",year);
//        default:
//            break;
//    }
//
//    return 0;
//}
// 과제 1
//#include <stdio.h>
//
//int main(int argc,char *argv[])
//{
//    int year,month,day;
//    int total =365;
//    int flag = 0;
//
//    printf("\"연도\"를 입력하세요. >> ");
//    scanf("%d",&year);
//
//    if(!(year>=1900&&year<=2999))
//    {
//        printf("잘못된 값을 입력하셨습니다.\n");
//        return 0;
//    }
//
//    printf("\"월\"를 입력하세요. >> ");
//    scanf("%d",&month);
//    if(!(month>=1&&month<=12))
//    {
//        printf("잘못된 값을 입력하셨습니다.\n");
//        return 0;
//    }
//    printf("\"일\"를 입력하세요. >> ");
//    scanf("%d",&day);
//
//
//    if(((year%4==0)&&(year%100!=0))||(year%400==0)) //윤년 체크
//    {
//        flag=1; //윤년
//        total+=1; //366일
//    }
//
//    if(month==2&&flag==0) //2월 평년
//    {
//        if(!(day>=1&&day<=28))
//        {
//            printf("잘못된 값을 입력하셨습니다.\n");
//            return 0;
//        }
//    }
//    else if(month==2&&flag==1) // 2월 윤년
//    {
//        if(!(day>=1&&day<=29))
//        {
//            printf("잘못된 값을 입력하셨습니다.\n");
//            return 0;
//        }
//    }
//    else if((month==4||month==6||month==9||month==11)) //30일
//    {
//        if(!(day>=1&&day<=30))
//        {
//            printf("잘못된 값을 입력하셨습니다.\n");
//            return 0;
//        }
//    }
//    else
//    {
//        if(!(day>=1&&day<=31))
//        {
//            printf("잘못된 값을 입력하셨습니다.\n");
//            return 0;
//        }
//    }
//
//
//// switch
//
//    switch (month)
//    {
//        case 1:
//            if (month==1)
//            {
//                day = 31-day;
//                total-=day;
//            }
//            else
//                total-=31;
//        case 2:
//            if(flag==1)//윤년
//            {
//                if (month==2)
//                {
//                    day = 29-day;
//                    total-=day;
//                }
//                else
//                    total-=29;
//            }else // 평년
//            {
//                if (month==2)
//                {
//                    day = 28-day;
//                    total-=day;
//                }
//                else
//                    total-=28;
//            }
//        case 3:
//            if (month==3)
//            {
//                day = 31-day;
//                total-=day;
//            }
//            else
//                total-=31;
//        case 4:
//            if (month==4)
//            {
//                day=30-day;
//                total-=day;
//            }
//            else
//                total-=30;
//        case 5:
//            if (month==5)
//            {
//                day = 31-day;
//                total-=day;
//            }
//            else
//                total-=31;
//        case 6:
//            if (month==6)
//            {
//                day=30-day;
//                total-=day;
//            }
//            else
//                total-=30;
//        case 7:
//            if (month==7)
//            {
//                day = 31-day;
//                total-=day;
//            }
//            else
//                total-=31;
//        case 8:
//            if (month==8)
//            {
//                day = 31-day;
//                total-=day;
//            }
//            else
//                total-=31;
//        case 9:
//            if (month==9)
//            {
//                day=30-day;
//                total-=day;
//            }
//            else
//                total-=30;
//        case 10:
//            if (month==10)
//            {
//                day = 31-day;
//                total-=day;
//            }
//            else
//                total-=31;
//        case 11:
//            if (month==11)
//            {
//                day=30-day;
//                total-=day;
//            }
//            else
//                total-=30;
//        case 12:
//            if (month==12)
//            {
//                day = 31-day;
//                total-=day;
//            }
//            else
//                total-=31;
//            break;
//    }
////        //total -> 반복문 없애기..
////        for(i=1;i<month;i++)
////        {
////            if(i==2)//2월
////            {
////                if(flag==1) //윤년
////                    total+=29;
////                else//평년
////                    total+=28;
////            }
////            else if(i==4||i==6||i==9||i==11) //30일
////                total+=30;
////            else
////                total+=31;
////        }
//
//
//    printf("%d년 01월 01일부터 %d일째 되는 날입니다.\n",year,total);
//
//
//    return 0;
//}


// 과제 2
//#include <stdio.h>
//int main(int argc, char * argv[])
//{
//    while (1) {
//
//    int n;
//    int window=1;
//    char home;
//
//    printf("5이상의 n을 입력해서 집을 만드세요 ! \n");
//    printf("n : ");
//    scanf("%d",&n);
//    // 잘못된 값 입력
//    if(n<5)
//    {
//        printf("5이상 입력하라고\n");
//        return 0;
//    }
//    printf("출력할 문자를 입력하세요 : ");
//    scanf(" %c",&home);
//
//
//
//
//    // 지붕 출력
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<n-i-1; j++)
//            printf(" ");
//        for(int k=0; k<2*i+1; k++)
//            printf("%c",home);
//        for(int j=0; j<n-i-1; j++)
//            printf(" ");
//        printf(" %c%c",home,home); //굴뚝 출력
//
//        printf("\n");
//    }
//
//    for(int i=0;i<n;i++)
//    {
//
//        //중간에 창문 만들어주기
//        if(i>=n/3-1 && i<n-window)
//        {
//            window++;
//            //나머지 별 출력
//            for (int j=0;j<=2*n+1;j++)
//            {
//                //창문 집 크기에 따라 비율 늘려주기.. !
//                if(2*n/3+1<=j && j<2*n-1)
//                    printf(" ");
//                else
//                    printf("%c",home);
//            }
//
//            printf("\n");
//            continue;
//        }
//        for (int j=0;j<=2*n+1;j++)
//        {
//            printf("%c",home);
//        }
//
//
//        printf("\n");
//    }
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main(int argc, char * argv[])
//{
//    int n;
//    int window=0;
//    char home;
//
//    printf("5이상의 n을 입력해서 집을 만드세요 ! \n");
//    printf("n : ");
//    scanf("%d",&n);
//
//    if(n<5)
//    {
//        printf("5이상 입력하세요.\n");
//        return 0;
//    }
//
//    printf("출력할 문자를 입력하세요 : ");
//    scanf(" %c",&home);
//
//
//    // 지붕 출력
//    for(int i=0; i<n; i++)
//    {
//        for(int j=0; j<n-i-1; j++)
//            printf(" ");
//        for(int k=0; k<2*i+1; k++)
//            printf("%c",home);
//        for(int j=0; j<n-i-1; j++)
//            printf(" ");
//        printf(" %c%c",home,home); //굴뚝 출력
//
//        printf("\n");
//    }
//
//
//    for(int i=0;i<n;i++)
//    {
//        //중간에 창문 만들어주기
//        if(i>=n/3 && i<n-window)
//        {
//            window++;
//            //나머지 별 출력
//            for (int j=0;j<=2*n+1;j++)
//            {
//                //창문 집 크기에 따라 비율 늘려주기.. !
//                if(2*n/3<=j && j<2*n-2)
//                    printf(" ");
//                else
//                    printf("%c",home);
//            }
//            printf("\n");
//            continue;
//        }
//        for (int j=0;j<=2*n+1;j++)
//        {
//            printf("%c",home);
//        }
//
//
//        printf("\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int pac(int num)
//{
//    if (num==0||num==1)
//        return 1;
//    else
//    {
//        return num*pac(num-1);
//    }
//}
//
//int main(void)
//{
//    int num;
//    scanf("%d",&num);
//    printf("%d",pac(num));
//
//}

//도전 1 - 1
//#include <stdio.h>
//
//int main(void)
//{
//    int num;
//    scanf("%d",&num);
//    printf("%o",num); // 16진수 변환 문자 x 8진수 o
//    return 0;
//}

// 도전 1-2
//#include <stdio.h>
//
//int main(void)
//{
//    int num1,num2;
//    int temp = 0;
//    scanf("%d %d",&num1,&num2);
//    if(num1>num2)
//        {
//            temp = num1;
//            num1 = num2;
//            num2 = temp;
//        }
//    for(int i = num1;i<=num2;i++)
//    {
//        for(int j=1;j<10;j++)
//        {
//            printf("%d X %d = %d\n",i,j,i*j);
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}
////도전 1-3 : 최대공약수
//#include <stdio.h>
//
//int main(void)
//{
//    int num1,num2;
//    int i=0;
//    scanf("%d %d",&num1,&num2);
//    for(i=num1;i>0;i--)
//    {
//        if(num1%i==0&&num2%i==0)
//        {
//            printf("%d \n",i);
//            break;
//        }
//    }
//    return 0;
//}
// 도전 1-4
//#include <stdio.h>
//
//int main(void)
//{
//    int money = 3500;
//    int num1 = 500;
//    int num2 = 700;
//    int num3 = 400;
//
//    for(int i =1 ;i<100;i++)
//    {
//        for(int j =1;j<100;j++)
//        {
//            for(int k=1;k<100;k++)
//            {
//                if((i*num1)+(j*num2)+(k*num3)==money)
//                    printf("크림 : %d 새우 : %d 콜라 : %d\n",i,j,k);
//            }
//        }
//    }
//    return 0;
//}

// 도전 1-5 : 10개의 소수 출력
//#include <stdio.h>
//
//
//int main(void)
//{
//    int cnt=0;
//    for(int i=2;cnt<10;i++)
//    {
//        for(int j=2;j<=i;j++)
//        {
//            if(i%j==0&&j!=i) //나눠지는 수가 있다.
//                break;
//            else if(i==j)
//            {
//                printf("%d ",i);
//                cnt+=1;
//            }
//            else
//                continue;
//        }
//        cnt++;
//    }
//
//    return 0;
//}
//
//
////#include <stdio.h>
////// 한수 : 각자릿수가 등차수열을 이룬다
////void HanSoo(int n) //셀프넘어 아닌 숫자 구하는 함수
////{
////    int total = 99;
////    int a,b,c;
////    if(n<100)
////    {
////        printf("%d",n);
////    }else
////    {
////    for(int i=100;i<=n;i++) // 100이하일때는 모두 성립한다.
////    {
////        a=i/100; //100의 자리수
////        b=i/10%10; // 10의 자리수
////        c = i % 10; // 1의 자리수
////
////        if((b-a)==(c-b))
////            total++;
////    }
////        printf("%d\n",total);
////    }
////}
////
////
////int main(void)
////{
////    int n;
////    scanf("%d",&n);
////    HanSoo(n);
////    return 0;
////}
//
//#include <stdio.h>
//
//int main(void)
//{
//    short a=1;
//    short b=2;
//    printf("%d\n",sizeof(a));
//    printf("%d\n",sizeof(b));
//    printf("%d\n",sizeof(a+b));
//}

//#include <stdio.h>
//
//int lcm(int num1,int num2)
//{
//    int total = 1;
//    for(int i=2;i<=num1+1;i++)
//    {
//        if((i>num1)||(i>num2))
//        {
//            total = total * num1 * num2;
//            return total;
//        }
//        if((num1%i==0)&&(num2%i==0)) // 나눠진다
//        {
//            num1 = num1/i;
//            num2 = num2/i;
//            total*=i;
//            i =1;
//        }
//    }
//    return 1;
//}
//
//int main(void)
//{
//    int num1,num2;
//    int num3=0;
//    scanf("%d %d",&num1,&num2);
//
//    num3=lcm(num1,num2);
//    printf("%d\n",num3);
//
//    return 0;
//}
//
//#include <stdio.h>
//int main(void){
//    printf("%c학점 이상입니다.\n",'A');
//    printf("학점을 유지하고 자격증을 준비하세요. \n\n");
//
//    printf("%c학점 이상이고 %c학점보다 낮습니다.",'B','A');
//}
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//메뉴판 출력함수
int menu(void)
{
    int num;
    printf("1. 가위/바위/보 게임\n");
    printf("2. 랜덤넘버 맞추기 게임\n");
    printf("3. 종료\n");
    scanf("%d",&num);
    return num;
}

//렌덤함수
int rand_func(int max_num)
{
    srand((unsigned)time(NULL));
    return rand()%max_num+1;
}

//가위바위보 함수
void RSP(void)
{
    int computerNum=rand_func(3);
    int userNum;
    
    
    while(1){
        printf("1.가위 2.바위 3.보자기 선택해주세요 ! \n");
        scanf("%d",&userNum);
        if(userNum==1 || userNum==2 || userNum==3)
            break;
        else
            printf("1~3의 숫자를 입력해주세요.\n");
    }

    

    // 1:가위 2:바위 3:보
    
    //컴퓨터가 졌을때
    if(((userNum==1)&&(computerNum==3))||((userNum==2)&&(computerNum==1))||((userNum==3)&&(computerNum==2)))
    {
        printf("유저가 승리했습니다.\n");
    }
    else if(((userNum==1)&&(computerNum==2))||((userNum==2)&&(computerNum==3))||((userNum==3)&&(computerNum==1))) //컴터가 이김
    {
        printf("컴퓨터가 승리했습니다.\n");
        
    }
    else //비김
    {
        printf("비겼습니다.\n");
    }
}

void numberFind(void) //랜덤숫자찾기 게임
{
    int maxNum;
    int computerRandomNum = 0;
    int userNumber=0;
    
    printf("랜덤넘버의 최댓값을 입력하시오 > ");
    scanf("%d",&maxNum);
    computerRandomNum = rand_func(maxNum); //컴퓨터 랜덤넘버 생성
    printf("%d",computerRandomNum);
    while(computerRandomNum!=userNumber)
    {
        printf("컴퓨터 랜덤넘버는? ");
        scanf("%d",&userNumber);
        if(computerRandomNum<userNumber) // 컴퓨터 난수가 유저보다 작음
        {
            printf("더 작은 수를 입력하세요.\n");
        }
        else if(computerRandomNum>userNumber) // 컴퓨터 난수가 유저보다 큼
        {
            printf("더 큰 수를 입력하세요.\n");
        }
        else // 둘이 같을때
        {
            printf("빙고!\n");
            break;
        }
    }
}

int main(int argc,char *argv[])
{
    int choice=0;
    
    while (1) {
        choice = menu(); // 번호입력받기
        
        if(choice==1)
        {
            RSP(); //가위바위보
        }
        else if(choice==2)
        {
            numberFind(); //랜덤넘버찾기 게임
        }
        else if(choice==3) // 종료
        {
            printf("프로그램을 종료합니다.\n");
            break;
        }
        else //그 외의 숫자입력
        {
            printf("1~3에서의 숫자를 입력해주세요.\n");
        }
    }
   
    
    return 0;
    
}
