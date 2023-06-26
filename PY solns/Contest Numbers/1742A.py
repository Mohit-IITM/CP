t=int(input())
for q in range(t):
    l=input().split()
    a,b,c=int(l[0]),int(l[1]),int(l[2])
    if c==a+b or b==a+c or a==b+c:
        print("Yes")
    else:
        print("No")
