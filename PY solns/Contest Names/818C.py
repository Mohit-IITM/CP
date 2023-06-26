t = int(input())
for i in range(t):
    n = int(input())
    a,b = {},{}
    cond = 0
    l01 = input().split()
    l02 = input().split()
    if l01 == l02:
        print("YES")
        continue
    for j in range(n):
        a[j] = int(l01[j])
        b[j] = int(l02[j])
        if a[j] >b[j]:
            cond = -1
    for k in range(n-1):
        if b[k]>b[k+1]+1 and b[k]> a[k]:
            cond = -1
            break
        else:
            res = "YES"
    if b[n-1]>b[0]+1 and b[n-1] >a[n-1]:
        res = "NO"
    else:
        res = "YES"
    if cond ==-1:
        print("NO")
    else:
        print(res)
    
