Name of Student:
Roll No.:
Batch:
Practical – 9
Q.1) Write a python program to diagonalizes the matrix [
3
6
−2
] and find
−4
matrix P and D.
Program:
>>> from sympy import *
>>> A = Matrix([[3,-2],[6,-4]])
>>> P, D = A.diagonalize()
>>> P
OUTPUT:
Matrix([
[1, 2],
[2, 3]])
>>> D
OUTPUT:
Matrix([
[-1, 0],
[ 0, 0]])
0
Q.2) Using python program check whether the matrix A= [0
0
1
0
0
0
1 ] is
3
diagonalizable or not.
Program:
>>> from sympy import *
>>> A = Matrix([[0,1,0],[0,0,1],[0,0,3]])
>>> A.is_diagonalizable()
OUTPUT:
False
Q.3) Find the eigenvalues of the following matrix and hence check
whether it is diagonalizable or not.
Program:
>>> from sympy import *
>>> A = Matrix([[1,2,2],[2,1,2],[2,2,1]])
>>> A.eigenvals()
OUTPUT:
{5: 1, -1: 2}
>>> A.is_diagonalizable()
OUTPUT:
33Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
True
Q.4) Using python program check whether the matrix A= [
1
1
1
] is
1
diagonalizable or not.
Program:
>>> from sympy import *
>>> A = Matrix([[0,1,0],[0,0,1],[0,0,3]])
>>> A.is_diagonalizable()
OUTPUT:
True
Q.5) Write a python program to diagonalize the matrix
find matrix P and D.
Program:
>>> from sympy import *
>>> A = Matrix([[1,-1,1],[-1,1,-1],[1,-1,1]])
>>> P, D = A.diagonalize()
>>> P
OUTPUT:
Matrix([
[1, -1,
1],
[1,0, -1],
[0,1,
1]])
>>> D
OUTPUT:
Matrix([
[0, 0, 0],
[0, 0, 0],
[0, 0, 3]])