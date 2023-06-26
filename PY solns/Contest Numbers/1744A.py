t=int(input())
for q in range(t):
    n=int(input())
    l=input().split()
    s=input()
    l1=[]
    cond="YES"
    for j in range(n):
        l1.append(0)
    for i in range(n):
        for k in range(i+1,n):
            if l[i] ==l[k] and l1[k]==0:
                l1[k] =s[i]
    for o in range(n):
        if l1[o]==0:
            pass
        else:
            if l1[o]==s[o]:
                pass
            else:
                cond="NO"
    print(cond)
