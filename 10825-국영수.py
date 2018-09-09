n=int(input())
student=[]
for i in range(0,n):
	temp=list(input().split())  #name 국 영 수
	student.append(temp)

student=sorted(student, key=lambda x: (-int(x[1]), int(x[2]), -int(x[3]), x[0] ) )

for i in range(0,n):
	print (student[i][0])