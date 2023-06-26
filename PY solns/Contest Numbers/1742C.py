t=int(input())
for q in range(t):
    l=[]
    for i in range(9):
        a=input()
        l1=[]
        for i1 in range(9):
            if len(a) ==0:
                pass
            else:
                if i1<8:
                    l1.append(a[i1])
        if len(l1)==0:
            pass
        else:
            l.append(l1)
    lr,lb=[],[]
        
    for j in range(8):
        cr=0
        cb=0
        for k in range(8):
            if l[j][k]=='R':
                cr+=1
            if l[k][j]=='B':
                cb+=1
        lr.append(cr)
        lb.append(cb)
    for i in lb:
        if i==8:
            print("B")
            break
    for j in lr:
        if j==8:
            print("R")
            break
        
        
