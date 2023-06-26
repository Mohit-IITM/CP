t = int(input())
for i in range(t):
    n = int(input())
    l1,l2 = [],[]
    l01 = input().split()
    l02 = input().split()
    diff0 = 0
    diff =0
    cond = 0
    no0 = 0
    for j in range(n):
        a = int(l01[j])
        b = int(l02[j])
        if b == 0:
            if a-b>diff0:
                diff0 = a-b
        else:
            no0 = 1
            diff = a-b
    for k in range(n):
        a = int(l01[k])
        b = int(l02[k])
        if b ==0:
            pass
        else:
            if a-b == diff:
                pass
            else:
                cond = -1
                break  
    if diff0>diff and no0==1:
        print("NO")
    elif cond == -1:
        print("NO")
    else:
        print("YES")
        
