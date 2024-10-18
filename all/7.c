Q.1)
Find the solution of AX = b by Gauss elimination method where
3 2 −1
𝐴 = ( 2 − 2 4)
2 −1 2
3
and 𝑏 = (6)
9
Program:
from sympy import *
x, y, z = symbols("x, y, z")
A = Matrix([[3, 2, -1], [2, -2, 4], [2, -1, 2]])
B = Matrix([[3], [6], [9]])
print(linsolve((A, b),[x, y, z]))
OUTPUT:
{(6, -11, -7)}
Q.2)
Find the solution of AX=b by Gauss Jordan method where
7 6 −8
3
𝐴 = (7 − 2 2) and 𝑏 = (0)
6 −1 2
9
Program:
from sympy import *
x, y, z = symbols("x, y, z")
A = Matrix([[7, 6, -8], [7, -2, 2], [6, -1, 2]])
B = Matrix([[3], [0], [9]])
sol,param = A.gauss_jordan_solve(b)
OUTPUT:
Matrix([
[7/11],
[106/11],
[163/22]])
1 2 3
1
Q.3) Find the solution of system AX=b where 𝐴 = (4 5 6) and 𝑏 = (2)
7 8 9
3
Program:
from sympy import *
x, y, z = symbols("x, y, z")
A = Matrix([[1, 2, 3], [4, 5, 6], [7, 8, 9]])
B = Matrix([[1], [2], [3]])
print(linsolve((A, b), [x, y, z]))
OUTPUT:
26Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
{(z - 1/3, 2/3 - 2*z, z)}
Q.4)
Find the solution by Gauss elimination method and Gauss Jordan
method where 𝐴 = (
2 1
5
) and 𝑏 = ( )
1 2
7
1) by Gauss elimination method
Program:
from sympy import *
x, y = symbols("x, y")
A = Matrix([[2, 1], [1, 2]])
B = Matrix([[5], [7]])
print(linsolve((A, b), [x, y]))
OUTPUT:
{(1, 3)}
2) Gauss Jordan method
Program:
from sympy import *
x, y = symbols("x, y")
A = Matrix([[2, 1], [1, 2]])
b = Matrix([[5], [7]])
sol,param=A.gauss_jordan_solve(b)
OUTPUT:
Matrix([
[1],
[3]])
Q.5) Using linsolve command find the solution of
5𝑥 − 2𝑦 + 3𝑧 = 2
𝑥+𝑦+𝑧=1
𝑥 + 2𝑦 − 2𝑧 = −10
Program:
from sympy import *
x, y, z = symbols("x, y, z")
A = Matrix([[5, -2, 3], [1, 1, 1], [1, 2, -2]])
b = Matrix([[2],[1],[-10]])
print(linsolve((A, b), [x, y, z]))
OUTPUT:
{(-44/23, -13/23, 80/23)}
27Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
1 2 3
Q.6) Find LU factorization of 𝐴 = (4 5 6)
7 8 9
Program:
from sympy import *
A = Matrix([[1,2,3],[4,5,6],[7,8,9]])
L,U,_=A.LUdecomposition()
OUTPUT:
>>> L
Matrix([
[1, 0, 0],
[4, 1, 0],
[7, 2, 1]])
>>> U
Matrix([
[1, 2, 3],
[0, -3, -6],
[0, 0, 0]])
Q.7) Use LU factorization to solve the system
2𝑥 + 2𝑦 + 𝑧 = 6
2𝑥 + 𝑦 + 2𝑧 = 8
𝑥 + 2𝑦 + 2𝑧 = 7
Program:
from sympy import *
x, y, z = symbols("x, y, z")
AB = Matrix([[2, 2, 1, 6], [2, 1, 2, 8], [1, 2, 2, 7]])
print(solve_linear_system_LU(AB, [x, y, z]))
OUTPUT:
{x: 7/5, y: 2/5, z: 12/5}
Q.8) Solve the system by using Gauss elimination method, Gauss Jordan
method and LU decomposition method.
𝑥
1 2 3
6
a) (2 1 4) (𝑦) = (7)
𝑧
2 5 1
8
1) By Gauss Elimination Method
Program:
from sympy import *
x, y, z = symbols("x, y, z")
A = Matrix([[1, 2, 3], [2, 1, 4], [2, 5, 1]])
b = Matrix([[6], [7], [8]])
print(linsolve((A, b), [x, y, z]))
28Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
OUTPUT:
{(1, 1, 1)}
2) By Gauss Jordan Method
Program:
from sympy import *
x, y, z = symbols("x, y, z")
A = Matrix([[1, 2, 3], [2, 1, 4], [2, 5, 1]])
b = Matrix([[6], [7], [8]])
sol,param=A.gauss_jordan_solve(b)
OUTPUT:
Matrix([
[1],
[1],
[1]])
3) By LU Decomposition
Program:
from sympy import *
x, y, z = symbols("x, y, z")
AB = Matrix([[1, 2, 3, 6], [2, 1, 4, 7], [2, 5, 1, 8]])
print(solve_linear_system_LU(AB, [x, y, z]))
OUTPUT:
{x: 1, y: 1, z: 1}
Q.8 b)
– 𝑥 + 2𝑦 + 2𝑧 = −1
𝑥 + 𝑦 + 2𝑧 = 2
5𝑥 + 2𝑧 = 8
1) By Gauss Elimination Method
Program:
from sympy import *
x, y, z = symbols("x, y, z")
A = Matrix([[-1, 2, 2], [1, 1, 2], [5, 0, 2]])
b = Matrix([[-1], [2], [8]])
print(linsolve((A, b), [x, y, z]))
OUTPUT:
{(3/2, 0, 1/4)}
2) By Gauss Jordan Method
from sympy import *
x, y, z = symbols("x, y, z")
29Dr. D. Y. Patil ACS College, Pimpri, Pune – 18.
A = Matrix([[-1, 2, 2], [1, 1, 2], [5, 0, 2]])
b = Matrix([[-1], [2], [8]])
sol,param=A.gauss_jordan_solve(b)
OUTPUT:
Matrix([
[3/2],
[
0],
[1/4]])
3) By LU Decomposition
from sympy import *
x, y, z = symbols("x, y, z")
AB = Matrix([[-1, 2, 2, -1], [1, 1, 2, 2], [5, 0, 2, 8]])
print(solve_linear_system_LU(AB, [x, y, z]))
OUTPUT:
{x: 3/2, y: 0, z: 1/4}