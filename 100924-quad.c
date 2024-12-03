#include<stdio.h>
#include<math.h>
/*
ax^2+bx+c =0 solver using quadratic formula. 
a=1, b=2 c=1
r1 = (-b + sqrt(b^2-4ac))/2 r1=r2=-1 expected answer!
r2 = (-b - sqrt(b^2-4ac))/2
*/

int main(){
int a,b,c; //declaring the variable as integer data type.
// a = 1; //initializing the integer data type.
// b = 7;
// c = 12;
printf("Enter a = ");
scanf("%d",&a); 
printf("\n Enter b = ");
scanf("%d",&b);
printf("\n Enter c = ");
scanf("%d",&c);
//scanf(1st argument, 2nd argument): 
//1st argument: format specifier
// 2nd argument address of the variable
float temp = b*b - 4*a*c;
if (temp < 0)
    {
    printf("Complex Roots! \n");
    float discrimant = sqrt (-temp);
    double realpart = (double)(-b/(2*a));
    //float r1 =(-b + discrimant)/(2*a); //expected output: -1.
    //float r2 =(-b - discrimant)/(2*a); //expected output: -1.
    printf("root 1 = %.4f + i %.4f \n", (double)(-b)/(2*a) , discrimant/(2*a) );
    printf("root 2 = %.4f - i %.4f \n", (double)(-b)/(2*a) , discrimant/(2*a) );
    }//if-loop.  
else if (temp == 0)
    {
    printf("Repeated Roots! \n");
    float discrimant = sqrt (temp); //expected output: 0.0
    printf("r1=%.4f r2=%.4f\n", (double)(-b)/(2*a), (double)(-b)/(2*a));
    }
else
    {
    float discrimant = sqrt (temp); //expected output: 0.0
    printf("the discriminant: %.4f \n", discrimant);
    float r1 =(-b + discrimant)/(2*a); //expected output: -1.
    double r2 =(-b - discrimant)/(2*a); //expected output: -1.
    printf("root 1 = %f and root 2 = %lf\n", r1, r2 );
    }

return 0;
}