(A,B,V)=input().split()
A=int(A)
B=int(B)
V=int(V)

if A >= V :
	print ("1")
else :
	if (V-B)%(A-B) == 0 :
		print ( int( (V-B)/(A-B)))
	else :
		print (int( (V-B)/(A-B) )+1)
