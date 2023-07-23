def jacobi(a,x,y,b):
    for i in range(3):
        val=b[i]
        for j in range(3):
            if i!=j:
                val=val-a[i][j]*y[j]
                
        x[i]=val/a[i][i]
        
    return x 

a=[[8,2,-2],[1,-8,3],[2,1,9]]
y=[0,0,0]
x=[0,0,0]
b=[8,-4,12]

for i in range(26):
    y=jacobi(a,x,y,b)
    x=[0,0,0]
    print(y)