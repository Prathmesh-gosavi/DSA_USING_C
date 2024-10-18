Name of Student:
Roll No.:
Batch:
Practical – 10
Q.1)
Write a python program to find the correct root of the equation
𝑥 3 − 4𝑥 2 − 11𝑥 + 30 using Newton Raphson method correct upto 4 decimal
places. Take
𝑥0 = 10.
Program:
def nr(f, g, x0, e):
step = 1
condition = True
while condition:
if g(x0) == 0.0:
print("Divided by zero error.")
break
x1 = x0 - (f(x0)/g(x0))
print('Iteration = ', step, 'x1 =', x1, 'and f(x1)=', f(x1))
x0 = x1
step = step + 1
condition = abs(f(x1)) > e
print('Required root is :', x1)
from math import *
deff(x):
return x**3 - 4*x**2 - 11*x + 30
defg(x):
return 3*x**2 -8*x - 11
nr(f, g, 10, 0.00001)
OUTPUT:
Iteration = 1 x1= 7.511961722488039 and f(x1)= 145.54690711661283
Iteration = 2 x1= 6.029708528510192 and f(x1)= 37.46810047097503
Iteration = 3 x1= 5.2778576911468225 and f(x1)= 7.539290423642491
Iteration = 4 x1= 5.029400988117186 and f(x1)= 0.7151577286837636
Iteration = 5 x1= 5.000387815638643 and f(x1)= 0.009309229796429008
Iteration = 6 x1= 5.0000000689141375 and f(x1)= 1.653939342816102e-06
Required root is : 5.0000000689141375
Q.2) Using python programming find the correct root of the function 𝑥 3 + 2𝑥, in
[-10, 10] using Newton Raphson method correct upto 4 decimal places. Take
35Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
𝑥0 = 3
Program:
def newtonraphson(f,g,x0,e):
step = 1
condition = True
while condition:
if g(x0) == 0.0:
print('Divided by zero error!')
break
x1 = x0 - (f(x0)/g(x0))
print('Iteration =',step,'x1=',x1,'and f(x1)=',f(x1))
x0 = x1
step = step + 1
condition = abs(f(x1))> e
print('Required root is :',x1)
from math import*
def f(x):
return x**3+2*x
def g(x):
return 3*x*2+2
newtonraphson(f,g,3,0.00001)
OUTPUT:
Iteration = 1 x1= 1.35 and f(x1)= 5.160375
Iteration = 2 x1= 0.839071782178218 and f(x1)= 2.2688848832741244
Iteration = 3 x1= 0.5165318379707146 and f(x1)= 1.1708770250983709
Iteration = 4 x1= 0.286911684752419 and f(x1)= 0.5974414559037061
Iteration = 5 x1= 0.12637258636310406 and f(x1)= 0.25476334679541873
Iteration = 6 x1= 0.03400797677253169 and f(x1)= 0.06805528521500116
Iteration = 7 x1= 0.0031305686951099317 and f(x1)= 0.006261168071234248
Iteration = 8 x1= 2.911262335528837e-05 and f(x1)= 5.822524673525099e-05
Iteration = 9 x1= 2.5424001309411746e-09 and f(x1)= 5.084800261882349e-09
Required root is : 2.5424001309411746e-09
Q.3) Using python find the correct root of the function 𝑒 𝑥 − sin 𝑥, in [0, 1]
using Newton Raphson method correct upto 3 decimal places. Take 𝑥0 = 0.4.
Program:
def newtonraphson(f,g,x0,e):
step = 1
condition = True
while condition:
36Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
if g(x0) == 0.0:
print('Divided by zero error!')
break
x1 = x0 - (f(x0)/g(x0))
print('Iteration =',step,'x1=',x1,'and f(x1)=',f(x1))
x0 = x1
step = step + 1
condition = abs(f(x1))> e
print('Required root is :',x1)
from math import*
def f(x):
return e**x-sin(x)
def g(x):
return e**x-cos(x)
newtonraphson(f,g,0.4,0.0001)
OUTPUT:
Iteration = 1 x1= -1.5314584096802757 and f(x1)= 1.2154464636832412
Iteration = 2 x1= -8.402567407072686 and f(x1)= 0.8534871583517203
Iteration = 3 x1= -10.038523764622981 and f(x1)= -0.575889990450599
Iteration = 4 x1= -9.334105736641906 and f(x1)= 0.09063639101087893
Iteration = 5 x1= -9.425107915627608 and f(x1)= -0.0002492819574764926
Iteration = 6 x1= -9.42485865376524 and f(x1)= 1.017479777190057e-11
Required root is : -9.42485865376524


Q.6) Write a python program to estimate a root of an equation 𝑥 6 − 𝑥 4 − 𝑥 3 − 1 = 0
in [1, 2] using Regula Falsi method correct upto 3 decimal places.
Program:
def falseposition(f,x0,x1,e):
if (f(x0)*f(x1))>0.0:
print('given guess values do not break the root')
print('try again with different guess values')
else:
step = 1
condition = True
while condition:
x2 = ((x0*f(x1))-(x1*f(x0)))/(f(x1)-f(x0))
print('Iteration =',step,'x2=',x2,'and f(x2)=',f(x2))
if (f(x0)*f(x2))<0:
x1=x2
else:
x0=x2
step = step + 1
condition = abs(f(x2))> e
print('Required root is :',x2)
from math import *
def f(x):
return x**6-x**4-x**3-1
falseposition(f,1,2,0.0001)
OUTPUT:
Iteration = 1 x2= 1.048780487804878 and f(x2)= -2.0326812065849147
Iteration = 2 x2= 1.095902098406956 and f(x2)= -2.02625465045382
Iteration = 3 x2= 1.1405547871102417 and f(x2)= -1.9745687858492924
It