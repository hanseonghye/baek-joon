num=int(input())
A=[]
B=[]

a=input()
b=input()

A=a.split(' ')
B=b.split(' ')

A = list(map(int, A) )
B=list(map(int, B) )

A.sort(reverse=True)
B.sort()

R=0
for i in range(0,num):
    R+=A[i]*B[i]

print (R)

