t = int(input())
for i in range(t):
    lis = input().split()
    n,m,sx,sy,d = int(lis[0]),int(lis[1]),int(lis[2]),int(lis[3]),int(lis[4])
    if (sx+d >= n) and (sx-d<=1):
         res = -1
    elif (sy+d >= m) and (sy-d<=1):
        res = -1
    elif (sx+d >= n) and (sy+d>=m):
         res= -1
    elif (sx-d<=1) and (sy-d<=1):
        res = -1
    else:
        res = m+n-2
    print(res)
