import sys
input=sys.stdin.readline
sys.setrecursionlimit(2*10**5)
def dfs(node,parent):
    if(len(l[node])==1 and l[node][0]==parent):
        ans[node]=1
    for el in l[node]:
        if(el!=parent):
            dfs(el,node)
            ans[node]+=ans[el]
t=int(input())
for _ in range(t):
    n=int(input())
    l=[-1]*n
    for __ in range(n-1):
        x_ = input().split()
        x=int(x_[0])
        y=int(x_[1])
        if(l[x-1]==-1):
            l[x-1]=[]
        if(l[y-1]==-1):
            l[y-1]=[]
        l[x-1].append(y-1)
        l[y-1].append(x-1)
    ans=[0]*n
    dfs(0,-1)
    q=int(input())
    for __ in range(q):
        q_= input().split()
        q1=int(q_[0])
        q2=int(q_[1])
        print(ans[q1-1]*ans[q2-1])
        
