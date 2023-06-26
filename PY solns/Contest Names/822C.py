t =  int(input())
for i in range(t):
    n = int(input())
    s = input()
    l =[]
    for j in range(n):
        if s[j] == '0':
            l.append(j+1)
    cost = 0
    dct = {}
    for k in l:
        m = 0
        while k*(m+1)<=n and (s[k*(m+1)-1] =='0'):
            if k in dct:
                dct[k]+=1
            else:
                dct[k] =1
            m+=1
    us ={}
    use = {}
    for q in dct:
        us[q] = 0
        for r in range(dct[q]):
            a = q*(r+1)
            if r+1 in dct:
                pass
            else:
                us[q]+=1
            use[a] = r+1
    print(us)
    for p in us:
        cost += p*(us[p])
        
    print(cost)
        

