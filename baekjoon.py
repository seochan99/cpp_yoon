# # def d(n):
# #     a = 0
# #     for x in list(str(n)): #i를 받고 리스트만큼 반복  1 5 7 
# #         a = a + int(x)  #각각 더하기 
# #     return int(n) + a #셀프넘버 말고 구하기

# # a= [] # 배열 선언 

# # for i in range(1,10001):
# #     k = d(i) #i 를 d 함수에 넣기 
# #     a.append(k)

# # #a=[1,2,3,4,5,40]
# # for b in range(1, 10001):
# #     if b in a:
# #         pass
# #     else:
# #         print(b) #셀프넘버만 출력 ,생성자가 없는 케이스 




# ###


# # n = int(input())
# # han = 0
# # for i in range(1, n + 1):
# #     if i < 100: # 100밑으로는 모두 한수 
# #         han += 1
# #     else:
# #         ns = list(map(int, str(i)))
# #         if ns[0] - ns[1] == ns[1] - ns[2]: # 123  ns[0] = 1, ns[1] = 2, ns[2] = 3 
# #             han += 1
# # print(han)

# # 벌집 

# n = int(input()) # 입력받기 

# num_bulzip = 1  #벌집개수
# cnt = 1

# while n > num_bulzip :
#     num_bulzip += 6 * cnt  # 벌집이 6의 배수로 증가
#     cnt += 1  
# print(cnt) #총횟수 출력



# #호텔
# n = int(input())
# for _ in range(int(input())):
#     h,w,p = map(int,input().split())
#     a = n % h ; b = n//h+1
#     if a==0 : a=h ; b-=1
#     print(a*100+b)







# # #달팽이
# a, b, v = map(int, input().split())
# day = 0
# #0이 아니라면 아직 도착한것이 아니다 ! +1 해준다 
# if (v - b) % (a - b) != 0: #목표지점도달시 미끌x => v-b만큼의 높이를 올라가면된다. 
#     day = ((v - b) // (a - b)) + 1
# #0이라면 몫출력한다 
# else:
#     day = ((v - b) // (a - b)) # a-b만큼올라간다 하루마다 
# print(day)










# #부녀회 
# T = int(input()) #테스트케이스 받기 

# for _ in range(T): #테스트케이스만큼 반복 
#     k = int(input()) #k층
#     n = int(input()) #n호
#     people = [ i for i in range(1, n+1)]  #리스트 포문작성[표현식 for 항목 in 리스트(range)] [0,1,2....]
#     for __ in range(k): #층만큼
#         for j in range(1,n): #호만큼
#             people[j] += people[j-1] 
#     print(people[-1]) #오른쪽 끝 요소 출력 


# n=int(input())

# ans=0
# for i in range(n): #n만큼 반복 
#     word = input() #단어 입력받음 
#     for j in range(len(word)):
#         if j!=len(word)-1: #단어의 끝도달전
#             if word[j]==word[j+1]: #옆에 같은 문자 있을 시 패스 
#                 pass
#             elif word[j] in word[j+1:]: #옆이 아닌 다른곳에 있을 시 브레이크 
#                 break 
#         else:
#             ans +=1 # 브레이크없이 끝날경우 ans +=1 진행
# print(ans)

#2839

# n = int(input())
# cnt=0 #봉지 최소 갯수 

# while True: #무한 반복  
#     if(n%5)==0: #5의배수 
#         cnt += (n//5)
#         print(cnt)
#         break
#     n-=3 #5의 배수가 아닐 때 매번빼주기 
#     cnt+=1 
#     if n<0 : #n이 0미만 
#         print(-1)
#         break 

#10757

# a, b = map(int, input().split())
# print(a+b)

# #1011
# test = int(input())#테스트 케이스

# for i in range(test):
#     x,y = map(int,input().split()) #x,y받기 
#     distance = int(y-x) #사이 거리 
#     cnt =0 #작동횟수  

# # 7.18 규칙찾는중,,,

#1978
# n = int(input()) # 주어진 수 
# nums = map(int,input().split())
# prime=0
# for num in nums:
#     notPrime =0
#     if num > 1:
#         for i in range(2,num): #2~num-1까지
#             if num % i == 0:
#                 notPrime+=1 #소수가 아닌 수를 발견하면 하나 올린다 
#         if notPrime ==0: 
#             prime +=1 
# print(prime)

# #2581 
# m = int(input())
# n = int(input())

# prime_list = []
# for num in range(m,n+1):
#     notPrime =0 
#     if num>1:
#         for i in range(2,num): #2~num-1까지 
#             if num % i == 0:
#                 notPrime+=1
#                 break
#         if notPrime == 0 :
#             prime_list.append(num) #소수 추가 

# if len(prime_list)>0:
#     print(sum(prime_list))
#     print(min(prime_list))
# else:
#     print(-1)    

#11653
# n = int(input()) 
# j=2 #2부터 
# while n!=1 : #n이 1이되기전까지 반복 
#     if n%j==0:
#         n/=j
#         print(j)
#     else:#j=2일때 불능하다면 +1씩 올려간다 ! 
#         j+=1 

#1929

#시간초과
# m, n = map(int,input().split())
# for j in range(m,n+1):
#     notPrime=0
#     if j>1:
#         for i in range(2,j):
#             if j%i==0:
#                 notPrime+=1
#                 break
#         if notPrime == 0:
#             print(j)

#에라토스테네스의 체 활용 

# def prime_list(k,n):
#     n+=1 #n이하의 숫자를 확인해야하므로 ! 
#     # 에라토스테네스의 체 초기화: n개 요소에 True 설정(소수로 간주)
#     sieve = [True] * n
#     # n의 최대 약수가 sqrt(n) 이하이므로 i=sqrt(n)까지 검사
#     m = int(n ** 0.5)
#     for i in range(2, m + 1):
#         if sieve[i] == True:           # i가 소수인 경우 참 
#             for j in range(2*i, n, i): # i이후 i의 배수들을 False 판정
#                 sieve[j] = False
    
#     for i in range(k,n):
#         if i>1 and sieve[i]==True:
#             print(i)

# m,n = map(int,input().split())

# prime_list(m,n)

# #1011 
# t = int(input())

# for _ in range(t):
#     x,y = map(int,input().split())
#     distance = y -x 
#     num =1 
#     while True :
#         if num**2<= distance < (num+1)**2:
#             break 
#         num+=1 #제곱수 num찾기 
#     if num**2 == distance:
#         print((num*2)-1) 
#     elif num**2 < distance <= num**2+num:
#         print(num*2) #절반 
#     else:
#         print((num*2)+1)

# #4948
# def prime_list(k,n):
#     n+=1 #n이하의 숫자를 확인해야하므로 ! 
#     # 에라토스테네스의 체 초기화: n개 요소에 True 설정(소수로 간주)
#     sieve = [True] * n
#     # n의 최대 약수가 sqrt(n) 이하이므로 i=sqrt(n)까지 검사
#     m = int(n ** 0.5)
#     count=0
#     for i in range(2, m + 1):
#         if sieve[i] == True:           # i가 소수인 경우 참 
#             for j in range(2*i, n, i): # i이후 i의 배수들을 False 판정
#                 sieve[j] = False
    
#     for i in range(k,n):
#         if i>1 and sieve[i]==True:
#             count+=1
#     print(count)

# while True:
#     num = int(input())
#     if num == 0 :
#         break
#     else :
#         prime_list(num+1,num*2)



#9020 : 골드바흐의 추측 

# def prime_list(n): #소수 판독기 
#     n+=1 #n이하의 숫자를 확인해야하므로 ! 
#     # 에라토스테네스의 체 초기화: n개 요소에 True 설정(소수로 간주)
#     primeList = [True] * n
#     # n의 최대 약수가 sqrt(n) 이하이므로 i=sqrt(n)까지 검사
#     m = int(n ** 0.5)
#     for i in range(2, m + 1):
#         if primeList[i] == True:           # i가 소수인 경우 참 
#             for j in range(2*i, n, i): # i이후 i의 배수들을 False 판정
#                 primeList[j] = False

#     return [i for i in range(2,n) if primeList[i]==True] #소수반환  
    

# def total(n):
#     li = prime_list(n)
#     idx = max([i for i in range(len(li)) if li[i]<=n/2]) #최댓값 li길이 만큼 for 실행 그런데..n/2이하일경우 최대인 인덱스값 출력 
#     for i in range(idx,-1,-1): #인덱스 이하의 배열 요소 접근 
#         for j in range(i,len(li)): #i이상의 배열 요소 접근 
#             if li[i]+li[j]==n: #합 비교 
#                 return [li[i],li[j]] #소수 찾기 성공 

# test = int(input()) 
# for _ in range(test):
#     a = int(input())
#     print(" ".join(map(str,total(a)))) #join으로 나타내주기 

#1085
# x,y,w,h = map(int,input().split()) # x,y,w,h 값 입력받기 
# print(min(x,y,h-y,w-x))

#3009 

# xList=[]
# yList=[]
# #x,y리스트받기 
# for i in range(3):
#     x,y = map(int,input().split())
#     xList.append(x)
#     yList.append(y)

# for i in range(3):
#     if xList.count(xList[i]) == 1: #x 1개인 요소 찾기 
#         x = xList[i]
#     if yList.count(yList[i]) == 1: #y 1개인 요소 찾기 
#         y = yList[i]

# print(f"{x} {y}")

#4153

# while True :
#     length = list(map(int,input().split()))
#     if sum(length)==0:
#         break
#     max_len = max(length)
#     length.remove(max_len) #긴 길이 지우기 
#     if (length[0]**2 + length[1]**2 == max_len**2):
#         print("right")
#     else:
#         print("wrong")

#3053
# import math 
# r = int(input())
# print(r*r*math.pi)
# print(r*r*2)

#1002 

# test = int(input())
# for _ in range(test):
#     x1,y1,r1,x2,y2,r2 = map(int,input().split())
#     distance = ((x1-x2)**2 +(y1-y2)**2)**(1/2)
#     maxR=r1+r2
#     minR=abs(r1-r2) 
#     if distance==0:
#         if r1 == r2: #원이 겹치는 경우 
#             print(-1) 
#         else : #원이 접하지 않는 경우 
#             print(0)
#     else:
#         if distance == maxR or distance == minR:
#             print(1)
#         elif distance<maxR and distance > minR: # 
#             print(2)
#         else : #아예 딴 곳 
#             print(0) 


#10872 : 팩토리얼 

def fact(n):
    if n==1:
        return 1
    return n*fact(n-1)

num = int(input())
if num==0:
    print(1)
else :
    print(fact(num))