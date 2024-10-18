Name of Student:
Roll No.:
Batch:
Practical – 11
1
Q.1 Write a python program to estimate the value of the integral ∫0 1 + 𝑥
using trapezoidal rule, take h=0.2.
Program:
def trapezoidalf(f, a, b, n):
h = float(b-a)/n
result = f(a) + f(b)
for i in range(1, n):
result = result + 2 * f(a + i*h)
result = (h/2)*result
print(result)
return(result)
from math import *
def f(x):
return 1 + x
trapezoidalf(f, 0, 1, 5)
OUTPUT:
1.5
5 𝑑𝑥
Q.2 find the value of ∫0
1+𝑥 2
using trapezoidal rule, take h=0.5.
Program:
def trapezoidal(f,a,b,n):
h = float(b-a)/n
result = f(a) + f(b)
for i in range(1,n):
result=result+2*f(a+i*h)
result=(h/2)*result
print(“Integration by Trap is: ”, result)
return(result)
from math import*
def f(x):
return 1/(1+x**2)
trapezoidal(f,0,5,10)
OUTPUT:
trapezoidal(f,0,5,10)
Integration by Trap is: 17.5
41Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
10
Q.3 Solve the integral ∫0 (𝑥 + 1)3 𝑑𝑥 using trapezoidal rule, take h=1.
Program:
def trapezoidal(f,a,b,n):
h = float(b-a)/n
result = f(a) + f(b)
for i in range(1,n):
result = result + 2*f(a + i*h)
result = (h/2) * result
print(“Integration by trap is: ”, result)
return(result)
from math import *
def f(x):
return (x+1)**3
trapezoidal(f,0,10,10)
OUTPUT:
trapezoidal(f,0,10,10)
Integration by trap is: 60.0
1.4
Q.4 Solve the integral ∫0.2 (sinx − log 𝑥 + 𝑒 𝑥 )𝑑𝑥 using trapezoidal rule, take
h=0.2.
Program:
def trapezoidal(f,a,b,n):
h = float(b-a)/n
result = f(a) + f(b)
for i in range(1,n):
result = result + 2 * f(a + i*h)
result = (h/2)*result
print(“Integration by trap is :”, result)
return(result)
from math import *
def f(x):
return sin(x)-log(x)+exp(x)
trapezoidal(f,0.2,1.4,6)
OUTPUT:
trapezoidal(f,0.2,1.4,6)
Integration by trap is: 2.16
2.5
Q.5 Evaluate ∫0 𝑒 𝑥 𝑑𝑥 using trapezoidal rule, take h=0.5.
Program:
def trapezoidal(f, a, b, n):
h = float(b-a)/n
42Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
result = f(a) + f(b)
for i in range(1,n):
result = result +2*f(a + i*h)
result = (h/2)*result
print(“Integration by trap is :”, result)
return(result)
from math import *
def f(x):
return exp(x)
trapezoidal(f,0,2.5,5)
OUTPUT:
trapezoidal(f,0,2.5,5)
Integration by trap is : 5.625