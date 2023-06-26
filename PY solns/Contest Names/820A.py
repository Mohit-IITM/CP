t= int(input())
for i in range(t):
    l = input().split()
    a,b,c = int(l[0]),int(l[1]),int(l[2])
    if b > c:
        if a-1 > b-1:
            res = 2
        elif a-1<b-1:
            res =1
        else:
            res = 3
    else:
        if a-1> 2*c -b -1 :
            res = 2
        elif a-1<2*c -b-1:
            res =1
        else:
            res =3
    print(res)
