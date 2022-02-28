l=[["html" , "c#"], ["c#" , "python"] , ["python" , "html"]]
r =[0,0,1]

w={}
for i in range(len(r)):
    if r[i]==0:
        r[i]=1
    else:
        r[i]=0
for i in range(len(l)):
    if l[i][r[i]] in w.keys():
        w[l[i][r[i]]]+=1
    else:
        w[l[i][r[i]]]=1

I=0
J=""
for i, j in w.items():
    if j>I:
        I=j
        J=i
        
print(J)