M=int(input())
SGcard=list(input().split())
SGcard=list(map(int,SGcard))
# SGcard=sorted(SGcard, key = x)
SGcard.sort()
#print (SGcard)

N=int(input())
card=list(input().split())
card=list(map(int,card))

for i in range(0,N):

	low = 0;
	high=M;
	orgMid=-1;
	in_array=0;

	if high == 1 :
		if card[i] in SGcard :
			print ("1")
		else :
			print ("0")
		break;

	while low <= high :

		mid=int( (low+high)/2 )
		#print ("%s %s %s " %(low,high,mid))

		if mid == orgMid :
			break;

		if card[i] == SGcard[mid] :
			in_array=1;
			break;
		elif card[i] > SGcard[mid] :
			low=mid;
		else :
			high=mid;

		orgMid=mid;

	print (in_array)
	