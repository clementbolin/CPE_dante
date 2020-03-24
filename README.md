# CPE_dante
The objective of the project is to be able to generate a maze and to be able to solve it of type:

********
XXXX*XXX
******XX
*XX**X**
XXXX*XX*
********
XXXXX***
XXXXXXX*

X: the walls
*: cell available

For start generator:
- make
- cd generator
- ./generator [x, y] [perfect] (flag perfect not required)

For start solver:
- make
- cd solver
- ./solver [path map] [-D] (-D for activate debug mode)