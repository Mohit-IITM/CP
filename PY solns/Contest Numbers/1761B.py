t=int(input())
for test in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(set(a))
    counts=[]
    losses=[]
    for i in b:
        count=0
        loss=0
        for j in range(n):
            if a[j]==i:
                count+=1
                if j==n-1:
                    if a[n-2]==a[0]:
                        loss+=1
                else:
                    if a[j-1]==a[j+1]:
                        loss+=1
        counts.append(count)
        losses.append(loss)
    print(counts,losses)
    if min(counts)==0:
        print(n)
    elif min(losses)==0:
        print(n)
    else:
        print(n-min(losses)+1)
