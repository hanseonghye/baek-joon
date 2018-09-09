import sys

t=int(input())

for i in range(0,t):
	num=int(input())
	call=[]
	is_ok="YES";

	for j in range(0, num):
		call.append(sys.stdin.readline().strip())
	call.sort()


	for check in range(1, len(call)):

		if len(call[check-1]) < len(call[check]) :
			checkLen=len(call[check-1])
			if call[check-1] == call[check][0:checkLen] :
				is_ok="NO";
				break;
	
	print (is_ok)