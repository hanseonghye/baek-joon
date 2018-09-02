num=input("input number");
str_num=[]
str_num=list(str(num))
str_num.sort(reverse=True)

for i in str_num:
	print (i, end='')