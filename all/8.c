Name of Student:
Roll No.:
Batch:
Practical – 8
Q.1) Using Sympy module of python, find the eigen values and the
4
corresponding eigen vectors of the matrix A = [2
2
Ans-
2
4
2
2
2 ].
4
from sympy import *
A = Matrix([[4,2,2],[2,4,2],[2,2,4]])
>>> A.eigenvals()
O/P:
{8: 1, 2: 2}
>>> A.eigenvects()
O/p:
[(2, 2, [Matrix([
[-1],
[ 1],
[ 0]]), Matrix([
[-1],
[ 0],
[ 1]])]), (8, 1, [Matrix([
[1],
[1],
[1]])])]
Q.2) Using Sympy module of python, find the eigen values and the
1
corresponding eigen vectors of the matrix A = [1
1
Ans-
from sympy import *
A = Matrix([[1,1,1],[1,1,1],[1,1,1]])
>>> A.eigenvals()
{3: 1, 0: 2}
>>> A.eigenvects()
[(0, 2, [Matrix([
[-1],
[ 1],
[ 0]]), Matrix([
[-1],
31
1
1
1
1
1 ].
1Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
[ 0],
[ 1]])]), (3, 1, [Matrix([
[1],
[1],
[1]])])]
Q.3)
Using python find the eigen values of the following matrix:
1
A = [0
0
1
1
0
1
1 ].
1
Ans-
from sympy import *
A = Matrix([[1,1,1],[0,1,1],[0,0,1]])
>>> A.eigenvals()
{1: 3}
Q.4)
Using python find the eigen vectors of the following matrix:
2
A = [0
0
1
2
0
1
1 ].
2
Ans-
from sympy import *
A = Matrix([[2,1,1],[0,2,1],[0,0,2]])
>>> A.eigenvects()
[(2, 3, [Matrix([
[1],
[0],
[0]])])]
Q.5) Using Sympy module of python, find the eigen values and the
corresponding eigen vectors of the matrix
Ans-
from sympy import *
A = Matrix([[3,-2],[6,-4]])
>>> A.eigenvals()
{-1: 1, 0: 1}
>>> A.eigenvects()
[(-1, 1, [Matrix([
[1/2],
[
1]])]), (0, 1, [Matrix([
[2/3],
[
1]])])]