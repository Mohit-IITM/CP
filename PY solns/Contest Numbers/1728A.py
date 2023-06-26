t=int(input())
for test in range(t):
    n=int(input())
    l=list(map(int,input().split()))
    for j in range(n):
        if l[j]==max(l):
            print(j+1)
            break
    
