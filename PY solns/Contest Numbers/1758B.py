t=int(input())
for test in range(t):
    n=int(input())
    s=""
    if n%2==1:
        for i in range(n):
            s+="1 "
    else:
        for i in range(n-2):
            s+="2 "
        s+="3 1"      
    print(s)
