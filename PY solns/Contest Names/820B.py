import string
t = int(input())
alph = list(string.ascii_lowercase)
for i in range(t):
    n0 = int(input())
    n  = int(input())
    s=''
    while n>=1:
        if n%10 == 0:
            n = n//10
            r = n%100
            s += alph[r-1]
            n= n//100
        else:
            r = n%10
            s += alph[r-1]
            n = n//10
    print(s[::-1])
