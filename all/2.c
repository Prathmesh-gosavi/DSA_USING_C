Name of Student:
Roll No.:
Batch:
Practical - 2
Q.1) Define string x = "Math is Easy" &
y = "To All"
a) Find length of x and y .
b) Pick character with index 3 and -1 in x and 2 & 4 in y .
c) Using operator + & * find 2x+y , 3*x .
Ans:
a)
>>> x = "Math is Easy"
>>> y = "To All"
>>> len(x)
>>> 12
>>> len(y)
>>> 6
b)
>>> x = "Math is Easy"
>>> y = "To All"
>>> x[3]
>>> 'h'
>>> x[-1]
>>> 'y'
>>> y[2]
>>> ' '
>>> y[4]
>>> 'l'
c)
>>> 2*x + y
>>> 'Math is EasyMath is EasyTo All'
>>> 3*x
>>> 'Math is EasyMath is EasyMath is Easy'
Q.2) Write a python program of concatenation and repetition of string
and list.
Ans:
# concatenation of string :-
>>> x = "hello "
>>> y = "I am in sybsc(cs)"
>>> x + y
6Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
>>> 'hello I am in sybsc(cs)'
# repetition of string :-
>>> x = "hello "
>>> y = "I am in sybsc(cs)"
>>> x*2
>>> 'hellohello'
>>> y*2
>>> 'I am in sybsc(cs)I am in sybsc(cs)'
# concatenation of list :-
>>> L1 = ['mango','apple','banana',45,78,'kiwi']
>>> L2 = ['bottle','book',66,90,'pen']
>>> L1 + L2
>>> ['mango', 'apple', 'banana', 45, 78, 'kiwi', 'bottle', 'book',
66, 90, 'pen']
# repetition of list :-
>>> L1 = ['mango','apple','banana',45,78,'kiwi']
>>> L2 = ['bottle','book',66,90,'pen']
>>> L1 * 2
>>> ['mango', 'apple', 'banana', 45, 78, 'kiwi', 'mango', 'apple',
'banana', 45, 78, 'kiwi']
>>> L2 * 2
>>> ['bottle', 'book', 66, 90, 'pen', 'bottle', 'book', 66, 90,
'pen']
Q.3) Write a python program to create a nested list & diaplay its
element.
Ans:
>>> L = ['a', 'b', ['cc', 'dd', ['eee', 'fff']], 'g', 'h']
>>> print(L)
>>> ['a', 'b', ['cc', 'dd', ['eee', 'fff']], 'g', 'h']
>>> Print(L[2])
>>> [‘cc’,’dd’,[‘eee’,’fff’]]
Q.4) Write a python program to create list using range function.
Ans:
>>> My_list = [*range(10, 20, 1)]
>>> print(My_list)
>>> [10, 11, 12, 13, 14, 15, 16, 17, 18, 19]
7Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
Q.5) Write a python program using membership operator ('not in' and 'is’
operator) for list.
Use: x=[1,2,3,'Rose','Pink','math','easy']
Ans:
# 'in' operator:
L1=[1,2,3,'Rose','Pink','math','easy']
L2=[2,3,4,'red']
if L1 in L2:
print("True")
else:
print("False")
OUTPUT-
>>> False
# 'not in' operator:
L1=[1,2,3,'Rose','Pink','math','easy']
L2=[2,3,4,'red']
if L1 not in L2:
print("True")
else:
print("False")
OUTPUT-
>>> True
Q.6) Define tuple with single element & verify its type.
Ans:
>>> tuple1 = (5) type(tuple1)
>>> <class 'int'>
Q.7) Write a python program to write a function that return area and
circumference of Circle.
Ans:
from math import *
def f(r):
c = 2 * pi * r
a = pi * r * r
return c, a,
print(f(5))
8Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
OUTPUT-
(31.41592653589793, 78.53981633974483)
Q.8) Construct a valid list in python to convert it into a string.
Ans:
>>> mylist = ['I', 'me', 'you', 'they']
>>> mystr = ','.join(mylist)
>>> print(mystr)
O/P
>>> I,me,you,they
>>> type(mystr)
O/P
>>> <class 'str'>
>>> type(mylist)
O/P
>>> <class 'list'>
Q.9) Write a python program using range() function to display all prime
Numbers between 1 to 100.
Program:
Lower = 2
Upper = 100
print("Prime numbers between", Lower, "to", Upper, "are :")
for n in range(Lower, Upper + 1):
for i in range(2, n):
if n % i == 0:
break
else:
print(n)
OUTPUT:
Prime numbers between 2 to 100 are :
2
3
5
7
11
13
17
19
23
9Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
29
31
37
41
43
47
53
59
61
67
71
73
79
83
89
97
Q.10) Write a string traversal program with while loop.
Program:
Z = “Black Bear”
Index = 0
While index < len(Z):
Letter = Z[index]
print(Letter)
Index = Index + 1
OUTPUT:
B
l
a
c
k
B
e
a
r