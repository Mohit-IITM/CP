t= int(input())
for i in range(t):
    l01 = input().split()
    l02 = input().split()
    n,k = int(l01[0]),int(l01[1])
    res =0
    for j in range(k):
        maxx = 0
        for l in range(n):
            if l%k == j and maxx < int(l02[l]):
                maxx = int(l02[l])
        res += maxx
    print(res)
                
