t=int(input())
for i in range(t):
    a = input()
    b = input()
    st = a+b
    dct={}
    for j in st:
        if j not in dct:
            dct[j] = 1
        else:
            dct[j] +=1
    if len(dct) ==1:
        res = 0
    elif len(dct) ==2:
        res = 1
    elif len(dct) ==3:
        res = 2
    else:
        res =3
    print(res)
        
