t = int(input())
for i in range(t):
    n = int(input())
    l01 = input().split()
    l02 = input().split()
    sumd = 0
    print(int(l02[0])-int(l01[0]),end = " ")
    for j in range(n-1):
        f0 = int(l02[j])
        s0 = int(l01[j])
        s1 = int(l01[j+1])
        f1 = int(l02[j+1])
        if s1>=f0:
            d= f1-s1
        else:
            d = f1-f0
        print(d,end=" ")
    print(" ")
