def min_l(l) :
    max_l = 4*len(l)
    for i in range(len(l)):
        if l[i] == "L" and max_l>i:
            max_l = i
    return max_l
def max_r(l) :
    max_l = -1
    for i in range(len(l)):
        if l[i] == "R" and max_l<i:
            max_l = i
    return max_l
def val(l):
    val = 0
    for i in range(len(l)):
        if l[i]=="R":
            val += len(l) - i-1
        else:
            val+= i
    return val
def val_max(l):
    val =0
    

t= int(input())
for i in range(t):
    n  =int(input())
    s = input()
    l=[]
    for i in s:
        l.append(i)
    if n%2 == 0:
        l1 = l[:n//2]
        l2 = l[n//2:]
    else:
        l1 = l[:n//2]
        l2 = l[n//2+1:]
    for j in range(n):
        min_L = min_l(l1)
        max_R = max_r(l2)
        if min_L == 4*(len(l1)) and max_R == -1:
            if n%2 == 1:
                print(((n*(n-1))-((n//2)*((n//2)+1))+n//2),end = " ")
            else:
                print(((n*(n-1))-((n//2)*((n//2)+1))+n),end = " ")
        else:
            if min_L<(len(l1)-max_R):
                l[min_L] = "R"
                l1[min_L] = "R"
            else:
                if n%2 == 0:
                    l[n//2+max_R] = "L"
                    l2[max_R]="L"
                else:
                    l[n//2+1+max_R] = "L"
                    l2[max_R]="L"
            print(val(l),end = " ")
    print(" ")
    
