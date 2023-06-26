t=int(input())
for i in range(t):
    l0 = input().split()
    n,k,b,s = int(l0[0]),int(l0[1]),int(l0[2]),int(l0[3])
    if b*k+(k-1)*n<s or b*k>s :
        print('-1')
    else:
        r = s-b*k
        if r<k:
            print(s,end = ' ')
            for j in range(1,n):
                print('0',end = ' ')
            print(' ')
        else:
            r1 = r//(k-1)
            rem = r%(k-1)
            print(b*k+k-1,end = ' ')
            if r != (n)*(k-1):
                print(rem,end = ' ')
            for o in range(r1-1):
                print(k-1,end=' ')
            for l in range(r1+1,n):
                print('0',end = ' ')
            print(' ')
