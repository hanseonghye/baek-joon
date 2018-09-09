N=int(input())
A=list(input().split())
A=list(map(int,A))
A=sorted(A, key=lambda x:int(x))

M=int(input())
B=list(input().split())
B=list(map(int,B))


for num in B :

	low=0
	high=N
	orgMid=0
	in_array=0

	while low<=high  :

		mid=int((low+high)/2)

		#print (mid,end=' ')

		if mid==orgMid :
			break;

		if num == A[mid] :
			in_array=1
			break;

		elif num < A[mid]:
			high=mid;
		else :
			low=mid;

		orgMid=mid;


	print (in_array, end=' ')
