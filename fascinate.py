n1=196
n2=n1*2
n3=n1*3
l2=len(str(n2))
l3=len(str(n3))
n1=n1*(10**l2)+n2
n1=n1*(10**l3)+n3
l=len(str(n1))
print(n1)
a=str(l)
count=0
for j in range(10):
    for i in range(l):
        if int(a[i])==j:
            if True:
                count +=1
                break
if count == 10:
    print('fascinating')
else :
    print('not-fascinating')
    