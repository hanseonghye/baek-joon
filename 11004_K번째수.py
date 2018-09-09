N,k=input().split()
N=int(N)
k=int(k)

re=[]

num=input().split()
num=list(map(int,num))

for i in range(N):
	if len(re) < k :
		re.append(num[i])
		re.sort()
	else :
		if num[i] < re[k-1]:
			re[k-1]=num[i]
			re.sort()

print (re[k-1])

