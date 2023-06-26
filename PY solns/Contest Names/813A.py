t = int(input())
for i in range(t):
    a = 0
    l1 = input().split()
    l2= input().split()
    for j in range(int(l1[1])):
        if int(l2[j])>int(l1[1]):
            a+=1
    print(a)
    

