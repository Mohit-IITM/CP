t = int(input())
for i in range(t):
    l0 = input().split()
    l = input()
    counts = []
    n,k = int(l0[0]),int(l0[1])
    if n==k:
        count = 0
        for o in range(n):
            if l[o] == 'W':
                count+=1
        print(count)
    else:        
        for j in range(n-k+1):
            count =0
            for m in range(j,k+j):
                if l[m] == 'W':
                    count+=1
            counts.append(count)
        print(min(counts))

    
