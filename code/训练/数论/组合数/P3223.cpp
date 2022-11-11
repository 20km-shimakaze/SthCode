// 用python 不想高精度
/*
import sys
import math
ans=0
n,m=map(int,input().split())
def f(x):
    return math.factorial(x)
def A(x,y):
    return f(x)//f(x-y)
if(n+1>=2 and n+3>=m):
    ans+=f(n)*A(n+1,2)*A(n+3,m)
if(n+2>=m-1 and m>=1):
    ans+=f(n)*A(n+1,1)*A(n+2,m-1)*2*m
print(ans)

*/