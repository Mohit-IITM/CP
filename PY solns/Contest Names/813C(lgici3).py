t = int(input())
for i in range(t):
    dctl = {}
    dctf = {}
    l1=[]
    n = int(input())
    l = input().split()
    for j in range(n):
        if int(l[j]) in dctf:
            pass
        else:
            dctf[int(l[j])]=j
        dctl[int(l[j])] = j
    for k in dctf.keys():
        l1.append(k)
    l1.sort()
    print(l1,dctf,dctl)
