num=list(input().split())
num=list(map(int,num))
num.sort()

ABC=input()
pos={"A":0 , "B":1 , "C":2}

for i in range(0,3) :
	print (num[int(pos[ABC[i]])], end=' ')