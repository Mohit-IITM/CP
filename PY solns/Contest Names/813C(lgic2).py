def isasc(l):
    if sorted(l) == l:
        return True
    else:
        return False
def unq(l,i):
    l1 = l.copy()
    l1.pop(i)
    if len(set(l)) == len(set(l1)) :
        return False
    else:
        return True
t =int(input())
for i in range(t):
    n=int(input())
    l0=input().split()
    l=[]
    for i in l0:
        l.append(int(i))
    l1 = l.copy()
    a=len(set(l))
    j = n-1
    l2 = []
    while j>=0:
        if unq(l1,j):
            l2.append(l[j])
        elif l1[j] == l1[j-1]:
            l1.pop(j)
        else:
            break
        j-=1
    l3 = l2[::-1]
    for k in range(len(l2)):
        if isasc(l3):
            break
        else:
            l3[k] = 0
    res = [i for i in l3 if i != 0]
    b = a - len(set(res))
    print(b)
