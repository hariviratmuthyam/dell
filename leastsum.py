list1=[]
n=int(input("enter the no of elements"))
list=[(input())]
k=int(input("enter the k value"))
for i in range(0,k):
    list.sort()
    x=list[0]
    y=list[n-3]
    x=x*2
    list.pop(0)
    list.append(x)
    list.pop(n-3)
    if y%2==0:
        y=y/2
        list.append(y)
    else:
        y=(y+1)/2
        list.append(y)
        
print(sum(list))