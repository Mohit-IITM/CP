t= int(input())

for i in range(t):
    l0=input().split()
    l=[]
    for i in l0:
        l.append(int(i))
    c = l[0]*l[3]
    d = l[1]*l[2]
    if l[0] == 0 and l[2] !=0:
        r=1
    elif l[2] == 0 and l[0] != 0:
        r=1
    elif c == d:
        r=0
    elif d%c==0 or c%d==0 :
        r =1
    else:
        r=2
    
    print(r)
    
