t=int(input())
for q in range(t):
    n=int(input())
    L=input().split()
    l=[int(x) for x in L]
    dct={}
    for i in l:
        if i in dct:
            dct[i]+=1
        else:
            dct[i]=1
    cond=True
    for j in dct:
        if dct[j]>1:
            cond=False
            print("No")
            break
    if cond:
        print("Yes")
