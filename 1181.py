num=int(input())

result=[]

for i in range(0,num):
	temp=input()
	result.append(temp)

result=list(set(result))
result=sorted(result,key=lambda x:(len(x),x))

for i in range(0, len(result)):
	print (result[i])
