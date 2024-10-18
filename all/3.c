Name of Student:
Roll No.:
Batch:
Practical - 3
Q.1) Find the range of the following function
a) range(10)
b) range(1,5)
c) range(1, 10, 2)
d) range(5,2)
e) range(10, -10, -2)
Ans:
a)
L1 = range(10)
for i in L1:
print(i, end='
')
print()
OUTPUT-
0
1
2
3
4
5
6
7
8
9
b)
L1 = range(1, 5)
for i in L1:
print(i, end='
')
print()
OUTPUT-
1
2
3
4
c)
L1 = range(1, 10, 2)
for i in L1:
print(i, end='
')
print()
OUTPUT-
1
3
5
7
9
11Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
d)
L1 = range(2, 20)
for i in L1:
print(i, end='
')
print()
OUTPUT-
2
3
4
5
6
7
8
9
1011
24
12
13
14
15
16
17
18
19
e)
L1 = range(-10, 10, 2)
for i in L1:
print(i, end='
')
print()
OUTPUT-
-10
-8
-6
-4
-2
0
6
8
Q.2) Write a python program to find gcd of two numbers using for loop.
Ans:
import math
def phi(n):
for x in range(1, n):
if math.gcd(n,x)==1:
print(x, end=’ ‘)
phi(10)
OUTPUT-
1 3 7 9
Q.3) Write a python program to find table of 22 using for loop.
Ans:
def table(n):
for i in range(1,11):
print (n*i, end= ' ')
table(22)
OUTPUT-
22 44 66 88 110 132 154 176 198 220
12Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
Q.4) Write a python program to find table of 19 using while loop.
Ans:
i=1
n=int(input("Table of
"))
while i<=10:
print(n*i)
i=i+1
Table of 19
OUTPUT-
19
38
57
76
95
114
133
152
171
190
Q.5) Write a python program to find first 10 terms of Fibonacci sequence using
for loop.
Ans:
a = 0
b = 1
for i in range(10):
a, b=b, a+b
print(a, end= ' ')
OUTPUT-
1 1 2 3 5 8 13 21 34 55
Q.6) Write a python program to check the student is pass, fail or
distinction.
Ans:
ame = input("Name of the student : ")
Marks = int(input('Marks =
'))
if Marks > 39:
13Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
if Marks > 75:
print("first class with distinction")
elif Marks < 76 and Marks > 59:
print("first class")
else:
print("Second class")
else:
print("fail")
OUTPUT-
Name of the student :
Marks =
Nisha
71
first class