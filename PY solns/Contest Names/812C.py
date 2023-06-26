import math
n=int(input())
k = int(math.sqrt(n)//1)
r=1
l0,l=[],[]
for i in range(n+1):
    l0.append(i)
while r!=0:
    l2 = l0[(n-(k+1-r)**2):]
    print(l2)
    r=0
