#include<stdio.h>
#include <math.h>
/*
Solver for X^6-x-1=0
tol=1e-2
*option 1 Bisection
*option 2 Newton
*option 3 Secant
*default
*/

// double secant(){


//     return root;
// }
double f(double x){


  return (pow(x,6) - x - 1.0  );
}

int main(){

double tol =1e-16;
int max_iter=1e+4;
//int option=3;
printf("Secant Solver \n");
double x0 = 50;
double x1 = 10.82;

double x2=90.0 ; 

int counter= 0;
do
    {
        if(f(x0)==f(x1))
        {
            printf("f(%lf)=f(%lf) choose different x0 and x1 \n" , x0, x1);
            break;
        }
    x2 = x1 - (((x1-x0)*f(x1))/(f(x1)-f(x0)));
    printf("x2= %lf \n ", x2);
    counter=counter + 1; //counter++;
    printf("at iteration = %d of maxiterations= %d |f(x2)| = %lf  \n ", counter, max_iter, fabs(f(x2)));
    if( counter == max_iter)
        {
            printf("Max iterations reached no convergence \n");
            break;
        }
    x0=x1;
    x1=x2;
    
    } while(fabs(f(x2))> tol);

 //printf("The approximate root is %lf with tolerance = %lf using %d iterations \n ", x2, tol, counter);
}