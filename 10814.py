n=int(input())
reg=[]

for i in range(0,n):
	age, name=list(input().split())
	temp=[int(age),name,i]
	reg.append(temp)

reg=sorted(reg,key=lambda x:(x[0],x[2]))

for i in reg:
	print (str(i[0])+" "+i[1])