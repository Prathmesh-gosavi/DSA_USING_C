Name of Student:
Roll No.:
Batch:
Practical - 4
Q.1) Write a program to find divisors of any number using input function.
1)
Write a python programme to find divisors of any number using input
function.
Ans-
n = int(input("Divisor of : "))
for i in range(1,n+1):
if
n%i == 0:
print(i)
OUTPUT-
>>> Divisor of :10
1
2
5
10
Q.2) Write a python program to print the absulute value of given number.
Ans-
n = float(input("Enter the value:"))
absolute = abs(int(n))
print("\n The absolute value of the number is:->",absolute)
OUTPUT-
>>>
Enter the value: 5.23
The absolute value of the number is:-> 5
Q.3) Write a python program to print the table of given number.
Ans-
i = 1
n = int(input("Table of :"))
while i<=10:
print(n*i) i=i+1
OUTPUT-
15Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
Table of : 5
5
10
15
20
25
30
35
40
45
50
Q.4) Define a function that print all integers between 1 to n that are
relatively
prime.
Ans-
import math
def phi(n):
for x in range (1,n):
if math.gcd(n,x)==1:
print(x)
OUTPUT-
phi(10)
1
3
7
9
Q.5) Define Euler’s phi function in python.
Ans-
Import math
def phi(n):
i =0:
for i in range(1,n):
if math.gcd(n,i) == 1:
i = i+1
print(I, end=’ ’)
OUTPUT-
phi(10)
2 4 8 10
16Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
Q.6) Write a program to check the person is eligible for voting or not
and senior citizen or not.
Ans-
a = int(input("Enter your age :"))
if a>=60:
print("You are eligible for Voting and you are senior
citizen ")
elif 18<=a<60:
print("You are eligible for voting and you are not senior
citizen")
else:
print("You are not eligible for voting")
OUTPUT-
Enter your age :5
You are not eligible for voting
Enter your age : 55
You are eligible for voting and you are not senior citizen
Enter your age : 70
You are eligible for Voting and you are senior citizen