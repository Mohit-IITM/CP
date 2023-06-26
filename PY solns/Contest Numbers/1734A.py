t=int(input())
for q in range(t):
    n=int(input())
    l=input().split()
    l1=[]
    for j in l:
        l1.append(int(j))
    l1.sort()
    if n==3:
        a0=abs(l1[0]-l1[1])+abs(l1[0]-l1[2])
        an = abs(l1[-1]-l1[-2])+abs(l1[-1]-l1[-3])
        a1 = abs(l1[1]-l1[0])+abs(l1[2]-l1[1])
        print(min(a0,an,a1))
    else:
        a0=abs(l1[0]-l1[1])+abs(l1[0]-l1[2])
        a1 = min(abs(l1[1]-l1[0])+abs(l1[2]-l1[1]),abs(l1[1]-l1[2])+abs(l1[1]-l1[3]))
        an = abs(l1[-1]-l1[-2])+abs(l1[-1]-l1[-3])
        an1 = min(abs(l1[-2]-l1[-1])+abs(l1[-2]-l1[-3]),abs(l1[-2]-l1[-3])+abs(l1[-2]-l1[-4]))
        l2=[a0,a1,an,an1]
        for i in range(2,n-2):
            mi1  = abs(l1[i-1]-l1[i])+abs(l1[i+1]-l1[i])
            mi2 = abs(l1[i-2]-l1[i])+abs(l1[i]-l1[i-1])
            mi3 = abs(l1[i+1]-l1[i])+abs(l1[i+2]-l1[i])
            mi = min(mi1,mi2,mi3)
            l2.append(mi)
        print(min(l2))
            
