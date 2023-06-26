t = int(input())
for i in range(t):
    n = int(input())
    if n%3 == 0:
        h3 = (n-3)//3
        h2 = h3+1
        h1 = h2+1
    elif n%3 == 1:
        h3 = (n-4)//3
        h2 = h3+1
        h1 = h2+2
    elif n%3 == 2:
        h3 = (n-5)//3
        h2 = h3+2
        h1 = h2+1
    print(h2,h1,h3)
