t = int(input())
for i in range(t):
    s = input()
    sl = []
    c = abs(ord(s[-1])-ord(s[0]))
    for j in range(len(s)):
        sl.append(j)
    if ord(s[0])>ord(s[-1]):
        l = []
        for k in s:
            if ord(s[-1])<=ord(k)<=ord(s[0]):
                l.append(k)
        print(c,len(l))
        la = sorted(set(l))
        ld = la[::-1]
        for m in (ld):
            ind = [i for i, c in enumerate(s) if c == m]
            for p in ind:
                print(p+1, end = " ")
        print(" ")
    else:
        l = []
        for k in s:
            if ord(s[-1])>=ord(k)>=ord(s[0]):
                l.append(k)
        print(c,len(l))
        la = sorted(set(l))
        for m in (la):
            ind = [i for i, c in enumerate(s) if c == m]
            for p in ind:
                print(p+1, end = " ")
        print(" ")

        
            
                
                
                
    
