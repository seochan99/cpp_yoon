#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 100;

void ShowMenu(void); // 메뉴 출력
void MakeAccount(void); // 계좌개설
void DepositMoney(void); // 입금
void WithdrawMoney(void); // 출금
void ShowAllAccInfo(void); // 잔액조회

enum {MAKE=1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

//typedef struct
//{
//    int accID; // 계좌번호
//    int balance; // 잔액
//    char cusName[NAME_LEN]; //고객 이름 -> 동적할당 형태로 변경
//}Account;
class Account
{
private:
    int accID;
    int balance;
    char * cusname;
public:
    Account(int accID,int balance,char * name):accID(accID),balance(balance)
    {
        cusname = new char[strlen(name)+1];
        strcpy(cusname, name);
    }
    int GetID() // 아이디 얻기
    {
        return accID;
    }
    void Deposit(int money) // 출 금
    {
        balance+=money;
    }
    int Withdraw(int money) // 인 출
    {
        if(balance<money)
            return 0;
        
        balance-=money;
        return money;
    }
    void ShowInfo() const // 정보
    {
        cout<<"계좌 ID : "<<accID<<endl;
        cout<<"이 름 : "<<cusname<<endl;
        cout<<"잔 액 : "<<balance<<endl;
    }
    ~Account()
    {
        delete [] cusname;
            
    }
};

//Account accArr[100]; // Account 저장을 위한 배열 -> 객체 포인터 배열로 선언
Account * accArr[100];//Account 저장을 위한 포인터 배열
int accNum = 0; // 저장된 Account 수

int main(void)
{
    int choice;
    
    while(1)
    {
        ShowMenu();
        cout<<"선택 : ";
        cin>>choice;
        cout<<endl;
        
        switch (choice) {
            case MAKE: // 게좌계설
                MakeAccount();
                break;
            case DEPOSIT: // 입 금
                DepositMoney();
                break;
            case WITHDRAW: // 출금
                WithdrawMoney();
                break;
            case INQUIRE:
                ShowAllAccInfo();
                break;
            case EXIT:
                for(int i=0;i<accNum;i++)
                    delete accArr[i]; // 할당해제
                cout<<"계좌프로그램을 종료합니다."<<endl;
                return 0;
                break;
            default:
                cout<<"잘못된 숫자입니다 !! "<<endl;
        }
    }
}

//메뉴보여주기
void ShowMenu(void)
{
    cout<<"----MENU-----"<<endl;
    cout<<"1. 계좌개설"<<endl;
    cout<<"2. 입 금"<<endl;
    cout<<"3. 출 금"<<endl;
    cout<<"4. 계좌정보 전체 출력"<<endl;
    cout<<"5. 프로그램 종료"<<endl;
}

//계좌개설
void MakeAccount(void)
{
    int id; // id
    char name[NAME_LEN]; // name
    int balance; // 잔액
    
    cout<<"[계좌개설]"<<endl;
    cout<<"계좌 ID : "; cin>>id;
    cout<<"이 름 : "; cin>>name;
    cout<<"입금액 : "; cin>>balance;
    cout<<endl;

    accArr[accNum++] = new Account(id, balance, name); // 계좌 생성
//    accArr[accNum].accID=id;
//    accArr[accNum].balance=balance;
//    strcpy(accArr[accNum].cusName, name); //name정보를 배열에 저장
//    accNum++; // 사람 올려 ~
}

// 입금
void DepositMoney(void)
{
    int money;
    int id;
    cout<<"[입 금]"<<endl;
    cout<<"계좌 ID "; cin>>id;
    cout<<"입금액 : "; cin>>money;
    
    for(int i =0;i<accNum;i++)
    {
        if(accArr[i]->GetID() == id) // 빙빙빙 돌면서 accID를 찾는다
        {
            accArr[i]->Deposit(money);
            cout<<"입금완료 ! "<<endl<<endl;
            return; // 함수 탈출 !
        }else
            break;
    }
    cout<<"유효하지 않은 ID 입니다."<<endl<<endl; // accId 와 동일한 ID를 못찾으면 출력
}
// 출금
void WithdrawMoney(void)
{
    int money;
    int id;
    cout<<"[출 금]"<<endl;
    cout<<"계좌ID : "; cin>>id;
    cout<<"출금액 : "; cin>>money;
    
    for( int i=0;i<accNum;i++)
    {
        if(accArr[i]->GetID() == id) //아이디와 동일한 계좌 발견
        {
            if(accArr[i]->Withdraw(money)==0) // 액수 확인
            {
                cout<<"잔액부족..."<<endl<<endl;
                return;
            }
            cout<<"출금 완료"<<endl<<endl;
            return;
        }else
            break;
        
    }
    cout<<"유효하지 않은 ID 입니다."<<endl<<endl;
    
}

void ShowAllAccInfo(void)
{
    for(int i =0;i<accNum;i++)
    {
        accArr[i]->ShowInfo();
        cout<<endl;
    }
}
