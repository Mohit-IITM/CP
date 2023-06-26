t=int(input())
for q in range(t):
    n=int(input())
    count=0
    l=input().split()
    l1=[]
    for k in l:
        l1.append(int(k))
    l1.sort()
    div = 2*l1[0]-1
    for i in range(1,n):
        count+=((l1[i]-1)//div)
    print(count)
