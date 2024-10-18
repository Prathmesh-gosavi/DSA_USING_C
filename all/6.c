Name of Student:
Roll No.:
Batch:
Practical - 6
Q.1) For matrix
D = [10, 2, 3]
[12, -7, 15]
[-15, 10, -11]
a) Find its transpose
b) Find its determinant
c) Find invers if it exist.
Ans-
from sympy import *
D = Matrix([[10, 2, 3], [12, -7, 15], [-15, 10, -11]])
>>> D
Matrix([
[ 10, 2, 3],
[ 12, -7, 15],
[-15, 10, -11]])
a) >>> D.T
# Transpose of matrix D
Matrix([
[10, 12, -15],
[ 2, -7, 10],
[ 3, 15, -11]])
b) >>> D.det()
# determinant of matrix D
-871
c) >>> D.inv()
# inverse of matrix D
Matrix([
[ 73/871, -4/67, -51/871],
[93/871, 5/67, 114/871],
[-15/871, 10/67, 94/871]])
Q.2) For matrix
B=[1 -1 -2 4]
[2 -1 -1 2]
[2 1 4 16]
a) Find reduce row echelon from
b) Find column space
c) Find null space
23Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
Ans-
from sympy import *
B = Matrix([[1,-1,-2,4],[2,-1,-1,2],[2,1,4,16]])
>>> B
Matrix([
[1, -1, -2, 4],
[2, -1, -1, 2],
[2, 1, 4, 16]])
a)
>>> B.rref()
# reduced row echelon form of matrix B
(Matrix([
[1, 0, 0, 24],
[0, 1, 0, 72],
[0, 0, 1, -26]]), (0, 1, 2))
b)
>>> B.columnspace()
# column space of matrix B
[Matrix([
[1],
[2],
[2]]), Matrix([
[-1],
[-1],
[ 1]]), Matrix([
[-2],
[-1],
[ 4]])]
c)
>>> B.nullspace()
# nullspace of matrix B
[Matrix([
[-24],
[-72],
[ 26],
[ 1]])]
Q.3)
For matrix
A = [-5, 2, 3]
[-3, 10, -11]
[3,
-7, 5]
find rank of A.
Ans-
from sympy import *
24Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
A = Matrix([[-5,2,3],[3,-7,5],[-3,10,-11]])
>>> A
Matrix([
[-5, 2, 3],
[ 3, -7, 5],
[-3, 10, -11]])
>>> A.rank()
# rank of matrix A
3
Q.4) Find rank of matrix
M = [2 0 3]
[0 1 2]
[3 0 4]
Ans-
from sympy import *
M = Matrix([[2,0,3],[0,1,2],[3,0,4]])
>>> M
Matrix([
[2, 0, 3],
[0, 1, 2],
[3, 0, 4]])
>>> M.rank()
# rank of matrix M