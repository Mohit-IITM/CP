t = int(input())
for i in range(t):
    n = int(input())
    lb = []
    res =0
    lc0 = input().split()
    lp0 = input().split()
    for j in range(n):
        lb.append(int(lp0[j])-int(lc0[j]))
    lba =sorted(lb)
    lbd = lba[::-1]
    while lba[0]<0:
        if lba[0] + lbd[0] >=0:
            lba.pop(0)
            lbd.pop(0)
            lbd.pop(-1)
            lba.pop(-1)
            res+=1
            if len(lba) == 0:
                break
        else:
            lba.pop(0)
            if len(lba) == 0:
                break
    if len(lba) != 0:
        if lba[0]>= 0:
            res += len(lba)//2
    print(res)
            
    
