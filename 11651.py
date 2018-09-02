n=int(input())

pos=[]
for i in range(0,n):
	temp=list(input().split())
	pos.append(temp)

pos=sorted(pos, key=lambda x: (int(x[1]),int(x[0])))

for x,y in pos:
	print (x +" "+y)