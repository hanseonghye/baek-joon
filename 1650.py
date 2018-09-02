num=int(input())

pos=[]

for i in range(0,num):
	temp=input()
	x=temp.split(' ')[0]
	y=temp.split(' ')[1]
	re={'x':int(x), 'y':int(y)}
	pos.append(re)

result=sorted(pos, key= lambda p:(p['x'], p['y']) )

for i in range(0, num):
	print (str(result[i]['x'])+" "+str(result[i]['y']))