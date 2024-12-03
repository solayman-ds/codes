#include <stdio.h>
#include <math.h>
/*
Introduction of variables: 
1) integer variables, 
2) input/read user provided data,
3) real variables.
Overarching goal: Solve ax^2+bx+c=0.
a: int types
b: int type
c: int type
Discriminant: squareroot(b^2 - 4*a*c).
square root function (do we need to define 
or existing C functions?
https://www.programiz.com/c-programming/library-function/math.h/sqrt)
*/
int main()
{
double a = 1;
double b = 2;
double c = 1;
double temp = b*b - 4*a*c;
double d = 0.0; 
d = sqrt(temp);
printf("entered number is %.4f \n", d);
printf("enter a = \n");
scanf("%f", &a);
printf("enter b = \n");
scanf("%f", &b);
printf("enter c = \n");
scanf("%f", &c);
}