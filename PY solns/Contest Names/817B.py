t= int(input())
for i in range(t):
    n = int(input())
    s1 = input()
    s2 = input()
    l1,l2 = [],[]
    for j in range(n):
        l1.append(s1[j])
        l2.append(s2[j])
    for k in range(n):
        if l1[k] == 'G':
            l1[k] = 'B'
    for l in range(n):
        if l2[l]=='G':
            l2[l]='B'
    if l1 == l2:
        print("YES")
    else:
        print("NO")
