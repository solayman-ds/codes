#include<stdio.h>
#include<math.h>
/*
This program using the while loop prints the factorial of a given number.
Author:
Date:
*/
int factrandhall(int n)
    {
    int fact=1;

    while (n !=0)
        {
            //printf("counter = %d \n", counter);
        // counter = counter + 1 ;  //1 2 3 4
        //do something;n!=(n-0)*(n-1)*(n-2)*(n-3)*(n-4);
            fact =fact*n;
            n = n-1; 
        }


    return fact;
    }

int factraymond(int n)
    {
    int fact =1;   
    int counter =0;
    //n=5;
    while (counter < n)
    {
        fact=fact*(n-counter);
        counter = counter + 1;   
    }

    return fact;
    }
int factshamim(int n)
    {
    
    int fact =1;
    int counter =1;
    
    while (counter <= n)
        {
            fact=fact*counter;
            counter=counter +1;
        }
    //printf("fact = %d \n", fact);
    return fact; 
    }

int main(){

int n= 5; //known answer: 120
printf("factorial of n=%d is %d \n", 5, factrandhall(5)) ;
printf("factorial of n=%d is %d \n", 5, factraymond(5)) ;
printf("factorial of n=%d is %d \n", 5, factshamim(5)) ;
int factorial= factshamim(5);
}