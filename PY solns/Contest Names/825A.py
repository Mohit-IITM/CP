t=int(input())
for q in range(t):
    c=0
    no1=0
    no2=0
    cos=0
    n=int(input())
    l1=input().split()
    l2=input().split()
    for i in range(n):
        if l1[i]==l2[i]:
            pass
        else:
            c+=1
        if l1[i]=='0':
            no1+=1
        if l2[i]=='0':
            no2+=1
    if c==0:
        print(0)
    elif c==abs(no1-no2):
        print(c)
    elif no1==no2:
        print(1)
    else:
        print(abs(no1-no2)+1)
