t=int(input())
for i in range(t):
    l0=input().split()
    if int(l0[0])<int(l0[1]):
        mi = int(l0[0])
    else:
        mi=int(l0[1])
    r = int(l0[0])+int(l0[1])-2+mi
    if l0[0] == '1' and l0[1] == '1':
        r=0
    print(r)
    
