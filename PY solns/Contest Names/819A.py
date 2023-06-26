t = int(input())
for i in range(t):
    n = int(input())
    l=[]
    mr=0
    l0 = input().split()
    for i in l0:
        l.append(int(i))
    ma = max(l)
    mi = min(l)
    if l[n-1] == ma:
        res = ma-mi
    elif l[0] == mi:
        res = ma-mi
    elif l.index(mi) - l.index(ma) == 1:
        res = ma-mi
    else:
        if ma -l[0] > l[n-1]-mi:
            res = ma-l[0]
        else:
            res = l[n-1]-mi
    for j in range(n-1):
        if l[j] -l[j+1] >mr:
            mr = l[j]-l[j+1]

    if mr> res:
        print(mr)
    else:
        print(res)
