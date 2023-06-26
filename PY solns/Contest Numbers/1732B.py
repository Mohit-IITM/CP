t=int(input())
for test in range(t):
    n=int(input())
    s=input()
    st=-1
    hil=0
    for i in range(n):
        if s[i]=='1':
            st=i
            break
    if st==-1:
        print(0)
    else:
        for j in range(st,n-1):
            if s[j]==s[j+1]:
                pass
            else:
                hil+=1
        print(hil)
