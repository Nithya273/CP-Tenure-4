t = int(input())
for i in range (t):
    n,x = map(int,input().split())
    a1=[]
    a2=[]
    for j in range (n):
        s,r= map(int,input().split())
        a1.append(s)
        a2.append(r)
    res=0 
    for i in range(n):
        if a1[i]<=x:
            if a2[i]>res:
                res=a2[i]
                
    print(res)
