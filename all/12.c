Name of Student:
Roll No.:
Batch:
Practical – 12
10
Q.1 Using Simpson’s (1/3)rd rule, evaluate ∫0 √1 + 𝑥 2 𝑑𝑥 with h=0.25.
Program:
def simpsons13(f,a,b,n):
h = float(b-a)/n
result = f(a) + f(b)
for i in range(1,n):
k=a + i*h
if i%2 == 0:
result = result + 2*f(k)
else:
result = result + 4*f(k)
result = (h/3)*result
print(“Simpson 1/3rd Result : ”, result)
return result
from math import *
def f(x):
return sqrt(1+x**2)
simpsons13(f,0,10,40)
OUTPUT:
Simpson 1/3rd Result : 1.2644151038948792
5
Q.2 Write a python program to evaluate ∫0 𝑒 𝑥 𝑑𝑥 by Simpson’s (1/3)rd rule
by considering 8 equal intervals.
Program:
def simpsons13(f,a,b,n):
h = float(b-a)/n
result = f(a) + f(b)
for i in range(1,n):
k = a + i*h
if i%2 == 0:
result = result + 2*f(k)
else:
result = result + 4*f(k)
result = (h/3)*result
print(“Simpson 1/3rd Result : ”, result)
return result
from math import *
def f(x):
44Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
return exp(x)
simpsons13(f,0,5,8)
OUTPUT:
Simpson 1/3rd Result : 32.684613110896976
10
Q.3 Using Simpson’s (3/8)th rule evaluate ∫0 √1 + 𝑥 2 𝑑𝑥 with h= 0.2.
Program:
def simpsons38(f,a,b,n):
h = float(b-a)/n
result = f(a)+f(b)
for i in range(1,n):
k = a + i*h
if i%3 == 0:
result = result + 2*f(k)
else:
result = result + 3*f(k)
result = (3*h/8)*result
print(“Simpson 3/8th Result : ”, result)
return result
from math import *
def f(x):
return sqrt(1+x**2)
simpsons38(f,0,10,5)
OUTPUT:
Simpson 3/8th Result : 13.318559665215194
Q.4 Write a python program to estimate the value of the integral
2
∫0 (𝑥 2 + 2𝑥 − 8)𝑑𝑥 using Simpson’s(1/3)rd rule, take h=0.25
Program:
def simpsons13(f,a,b,n):
h = float(b-a)/n
result = f(a) + f(b)
for i in range(1, n):
k = a + i*h
if i%2 == 0:
result = result + 2*f(k)
else:
result = result + 4*f(k)
result = (h/3)*result
print(“Simpson 1/3rd Result : ”, result)
return result
from math import *
def f(x):
return x**2+2*x-8
simpsons13(f,0,2,8)
45Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
OUTPUT:
Simpson 1/3rd Result : -3.145833333333333
5
Q.5 Write a python program to estimate the value of the integral ∫0 cos(𝑥) 𝑑𝑥
using Simpson’s(3/8)th rule, take h=0.5.
Program:
def simpsons38(f,a,b,n):
h = float(b-a)/n
result = f(a) + f(b)
for i in range(1, n):
k = a + i*h
if i%3 == 0:
result = result + 2*f(k)
else:
result = result + 3*f(k)
result = (3*h/8)*result
print(“Simpson 3/8th Result : ”, result)
return result
from math import*
def f(x):
return cos(x)
simpsons38(f,0,5,10)
OUTPUT:
Simpson 3/8th Result : 0.7343268508376896