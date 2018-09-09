N=int(input())

card=dict()
for i in range(0, N):
	haveCard=int(input())
	if haveCard in card:
		card[haveCard]=card.get(haveCard)+1
	else :
		card[haveCard]=1



card=sorted(card.items(), key= lambda x:(-(x[1]) ,x[0] ) )

print (card[0][0])