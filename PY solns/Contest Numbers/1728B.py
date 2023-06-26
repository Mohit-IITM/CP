t=int(input())
for i in range(t):
    n=int(input())
    s=""
    if (n-3)%2==1:
        for i in range(n-3):
            s+=str(n-2-i)+" "
    else:
        s+=str(n-3)+" "+str(n-2)+" "
        for i in range(n-5):
            s+=str(n-4-i)+" "
    s+="1 "+str(n-1)+" "+str(n)
    print(s)
