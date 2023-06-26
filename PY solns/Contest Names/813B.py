t = int(input())
for i in range(t):
    n = int(input())
    if n%2 == 0:
        for j in range(n):
            if j%2 ==0:
                print(j+2)
            else:
                print(j)
    else:
        for k in range(n):
            if k==0:
                print(k+1)
            elif k%2 ==0:
                print(k)
            else:
                print(k+2)
