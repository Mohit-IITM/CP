n = int(input())

for i in range(n):
    maxx=0
    maxy=0
    minx=0
    miny=0
    m = int(input())
    for j in range(m):
        a = input().split()
        x=int(a[0])
        y=int(a[1])
        if(maxx<x) :
            maxx=x
        if(maxy<y) :
            maxy=y
        if(minx>x):
            minx=x
        if(miny>y) :
            miny=y
    print((2*(maxx-minx))+(2*(maxy-miny)))
        
        
