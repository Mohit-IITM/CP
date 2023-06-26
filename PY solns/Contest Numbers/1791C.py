t=int(input())
for i in range(t):
    n=int(input())
    s=input()
    ma=0
    l=[]
    for j in range(n):
        l.append(s[j])
    for k in range(1,n):
        ma=max(len(set(l[k:]))+len(set(l[:k])),ma)
    print(ma)
        
