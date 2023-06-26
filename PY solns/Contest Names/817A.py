t= int(input())
for i in range(t):
    n = int(input())
    k = input()
    l=[]
    if n!=5:
        r = "NO"
    else:
        for j in k:
            l.append(j)
        l.sort()
        if l == ['T','i','m','r','u']:
            r = 'YES'
        else:
            r = 'NO'
    print(r)
    
        
        
        
