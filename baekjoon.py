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
n = int(input()) 
j=2 #2부터 
while n!=1 : #n이 1이되기전까지 반복 
    if n%j==0:
        n/=j
        print(j)
    else:#j=2일때 불능하다면 +1씩 올려간다 ! 
        j+=1 
        
