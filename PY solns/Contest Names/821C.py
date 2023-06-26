t = int(input())
for i in range(t):
    n = int(input())
    l = input().split()
    ei,oi=[],[]
    for j in range(n):
        a = int(l[j])
        if a%2 == 0:
            ei.append(j+1)
        else:
            oi.append(j+1)
    print(n-1)
    if int(l[0])%2 == 0:
        for k in ei[:-1]:
            print(k,ei[-1])
        for m in oi:
            print(1,m)
    else:
        for k in oi[:-1]:
              print(k,oi[-1])
        for m in ei:
            print(1,m)
    
        
                
        
    
            
