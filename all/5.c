Name of Student:
Roll No.:
Batch:
Practical – 5
Q.1) For vectors
Find a) U+V
5 
 
U = 6
 
0
&
1
0
V =
 
2
b) 3V
c) 2U + 3V
Ans:
from sympy import *
U = Matrix([[2],[5],[-3]])
V = Matrix([[1],[0],[-2]])
a) >>> U + V
Matrix([
[ 3],
[ 5],
[-5]])
b) >>> 3 * V
Matrix([
[ 3],
[ 0],
[-6]])
c) >>> 2*U+3*V
Matrix([
[
7],
[ 10],
[-12]]
Q.2) Construct the following matrices using python
a) Identity matrix of order 6
b) Zero matirx with order 5x6
c) ones matrix of order 5x4
d) Diagonal matrix with (4,-5,1)vas a diagonal element.
Ans:
a)
from sympy import *
eye(6)
18Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
Matrix([
[1, 0, 0, 0, 0, 0],
[0, 1, 0, 0, 0, 0],
[0, 0, 1, 0, 0, 0],
[0, 0, 0, 1, 0, 0],
[0, 0, 0, 0, 1, 0],
[0, 0, 0, 0, 0, 1]])
b)
>>> zeros(5,6)
Matrix([
[0, 0, 0, 0, 0, 0],
[0, 0, 0, 0, 0, 0],
[0, 0, 0, 0, 0, 0],
[0, 0, 0, 0, 0, 0],
[0, 0, 0, 0, 0, 0]])
c)
>>> ones(5,4)
Matrix([
[1, 1, 1, 1],
[1, 1, 1, 1],
[1, 1, 1, 1],
[1, 1, 1, 1],
[1, 1, 1, 1]])
d)
>>> diag(4,-5,1)
Matrix([
[4,
0, 0],
[0, -5, 0],
[0,
0, 1]])
Q.3) For the following matrices
 4 2 4


A = 4 1 1


2 4 2
Find
a) A+B
&
b) A-B
5 2 3 

B = 3 7
5 

3 1 1
c) A-1
f) A4
Ans:
from sympy import *
A = Matrix([[4,2,4],[4,-1,1],[2,4,2]])
19
d) B*A
e) B-1ABDr. D. Y. Patil ACS College, Pimpri, Pune – 18.
B = Matrix([[5,2,3],[3,-7,5],[3,1,-1]])
a)
>>> A + B
Matrix([
[9,
4, 7],
[7, -8, 6],
[5,
b)
5, 1]])
>>> A - B
Matrix([
[-1, 0,
1],
[ 1, 6, -4],
[-1, 3,
c)
3]])
>>> A.inv()
Matrix([
[-1/6,
1/3,
1/6],
[-1/6, 0, 1/3],
[ 1/2, -1/3, -1/3]])
d)
>>> B * A
Matrix([
[34, 20, 28],
[-6, 33, 15],
[14,
e)
1, 11]])
>>> B.inv()*A*B
Matrix([
[ 522/59, -303/59, 405/59],
[ -22/59, 46/59, -72/59],
[-108/59, 435/59, -273/59]])
f)
>>> A**4
Matrix([
[2060, 1198, 1622],
[1106,613,
[1456,848, 1120]])
Q.4) For matrix
857],
3 
5 2
 3 7 5  . Do the following with sequence,
A =


 3 10 11
20Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
a) Delete 2nd column
b) Add row [2,3,0] in first row
c) Delete last row
Ans:
from sympy import*
A = Matrix([[-5,2,3],[3,-7,5],[-3,10,-11]])
>>> A
Matrix([
[-5,
2, 3],
[ 3, -7, 5],
[-3, 10, -11]])
a) >>> A.col_del(1) A
Matrix([
[-5,3],
[ 3,5],
[-3, -11]])
b) >>> A.row_insert(0, Matrix([[2, 3, 0]]))
Matrix([
[ 2, 3, 0],
[-5, 2, 3],
[3, -7,
5],
[-3, 10, 11]])
c) >>> A.row_del(2) A
Matrix([
[-5,
2, 3],
[ 3, -7, 5]])
Q.5) Using Python apply the following operations on
a) Delete 3rd row
b) Delete 1st column
c) Delete the last column
Ans:
from sympy import*
A = Matrix([[1,7,1],[4,-2,1],[3,1,2]])
>>> A
21
A =
1 7 1 
4 2 1


3 1 2Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
Matrix([
[1,
7, 1],
[4, -2, 1],
[3,
a)
1, 2]])
>>> A.row_del(2) A
Matrix([
[1,
7, 1],
[4, -2, 1]])
b)
>>> A.col_del(0) A
Matrix([
[ 7, 1],
[-2, 1]])
c)
>>> A.col_del(1) A
Matrix([
[ 7],
[-2]])
Q. 6) For matrix
1 0 4 
5 

 

A = 2 1 1 insert A = 3 as a 3rd column.


 
3 4 2 
0
Ans:
from sympy import*
A = Matrix([[1,0,4],[2,1,-1],[3,4,2]])
>>> A
Matrix([
[1, 0,
4],
[2, 1, -1],
[3, 4,
2]])
>>> A.col_insert(2,Matrix([[5],[6],[0]]))
Matrix([
[1, 0, 5,
4],
[2, 1, 6, -1],
[3, 4, 0,
2]])