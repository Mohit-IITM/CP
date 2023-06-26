t=int(input())
for test in range(t):
    n=int(input())
    la=list(map(int,input().split()))
    lb=list(map(int,input().split()))
    cost=0
    ind,lb1=[],[]
    for i in range(n):
        cost+=la[i]
        cost+=lb[i]
    cost-=max(lb)
    print(cost)
