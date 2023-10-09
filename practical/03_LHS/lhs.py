import numpy as np
from numpy import random
import matplotlib.pyplot as plt

#----------------------#
#  display LHS points  #
#----------------------#
def display_pts ( pts ):
    p=3
    for x in pts:
        for xi in x:
            print(xi,end=" ")
        print("\n",end="")


#--------------------#
#  build LHS points  #
#--------------------#
def lhs ( n, p, lb, ub ):

    print("LHS(n=",n,",p=",p,"):",sep="")

    # init list of p points:
    x=n*[0.0]
    pts=[]

    # indexes (permutations for each dimension):
    indexes=[]
    for i in range(n):
        indexes.append(np.arange(p))
        random.shuffle(indexes[i])

    # the sampling (p points):
    for k in range(p):
        for i in range(n):
            w=(ub[i]-lb[i])/p
            min=indexes[i][k]*w
            max=(indexes[i][k]+1)*w
            x[i]=(max - min) * np.random.random_sample() + min
        pts.append(x.copy())
    
    return pts



n=2
p=1000

pts=lhs(n,p,n*[0.0],n*[100.0])

display_pts(pts)

x = p*[0.0]
y = p*[0.0]

for k in range(p):
    x[k]=pts[k][0]
    y[k]=pts[k][1]

plt.scatter(x, y)
plt.xlabel('x')
plt.ylabel('y')
plt.axis([0.0, 100.0, 0.0, 100.0])
plt.show()
