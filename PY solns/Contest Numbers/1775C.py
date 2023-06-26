t=int(input())
for i in range(t):
    l=list(map(int,input().split()))
    n,x=l[0],l[1]
    print(n&(~(n-1)))
