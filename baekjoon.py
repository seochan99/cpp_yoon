# def d(n):
#     a = 0
#     for x in list(str(n)): #i를 받고 리스트만큼 반복  1 5 7 
#         a = a + int(x)  #각각 더하기 
#     return int(n) + a #셀프넘버 말고 구하기

# a= [] # 배열 선언 

# for i in range(1,10001):
#     k = d(i) #i 를 d 함수에 넣기 
#     a.append(k)

# #a=[1,2,3,4,5,40]
# for b in range(1, 10001):
#     if b in a:
#         pass
#     else:
#         print(b) #셀프넘버만 출력 ,생성자가 없는 케이스 




###


# n = int(input())
# han = 0
# for i in range(1, n + 1):
#     if i < 100: # 100밑으로는 모두 한수 
#         han += 1
#     else:
#         ns = list(map(int, str(i)))
#         if ns[0] - ns[1] == ns[1] - ns[2]: # 123  ns[0] = 1, ns[1] = 2, ns[2] = 3 
#             han += 1
# print(han)

# 벌집 

n = int(input()) # 입력받기 

num_bulzip = 1  #벌집개수
cnt = 1

while n > num_bulzip :
    num_bulzip += 6 * cnt  # 벌집이 6의 배수로 증가
    cnt += 1  
print(cnt) #총횟수 출력



#호텔
n = int(input())
for _ in range(int(input())):
    h,w,p = map(int,input().split())
    a = n % h ; b = n//h+1
    if a==0 : a=h ; b-=1
    print(a*100+b)







# #달팽이
a, b, v = map(int, input().split())
day = 0
#0이 아니라면 아직 도착한것이 아니다 ! +1 해준다 
if (v - b) % (a - b) != 0: #목표지점도달시 미끌x => v-b만큼의 높이를 올라가면된다. 
    day = ((v - b) // (a - b)) + 1
#0이라면 몫출력한다 
else:
    day = ((v - b) // (a - b)) # a-b만큼올라간다 하루마다 
print(day)










#부녀회 
T = int(input()) #테스트케이스 받기 

for _ in range(T): #테스트케이스만큼 반복 
    k = int(input()) #k층
    n = int(input()) #n호
    people = [ i for i in range(1, n+1)]  #리스트 포문작성[표현식 for 항목 in 리스트(range)] [0,1,2....]
    for __ in range(k): #층만큼
        for j in range(1,n): #호만큼
            people[j] += people[j-1] 
    print(people[-1]) #오른쪽 끝 요소 출력 