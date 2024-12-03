#include<stdlib.h>
#include<stdio.h>
#include<omp.h> //OpenMP header.
/*
 Parallel programming can be achieved using Open MP. 
 Goal of this program is to create a parallel Hello World program using Open MP.
 Author: CPS 5401
 Date: 10-31-22.
 Source: 
 https://curc.readthedocs.io/en/latest/programming/OpenMP-C.html
 https://www.geeksforgeeks.org/openmp-hello-world-program/
 */


/* Step01: Specify the parallel region. 
In OpenMP, we need to specify the region which we are going to make it as parallel
using the keywork pragma omp parallel. This is used to fork additional threads to 
carry out the work enclosed in the parallel. 
The original thread will be denoted as the master thread with thread ID 0.
*/

/*Step02: To compile and run.
 * export OMP_NUM_THREADS= N N could be any positive integer say 6 or 4 or 3.
 * gcc -o hello -fopenmp hello-world-open-mp.c 
 * ./hello
 */

int main(){
int a[10000], b[10000];
    for (int i = 0 ; i < 10000; i++)
        {
            a[i] = i+1;
            b[i] = 1;
        }
int sum = 0;
    
// Beginning of parallel region    
#pragma omp parallel for

  //int th_id = omp_get_thread_num();
  //printf("Hello World From thread = %d \n", th_id);
  for (int i = 0 ; i < 10000; i++)
        {
            sum += a[i]* b[i];             
            printf("Parallel Dot Product at index %d is %d by thread %d. \n", i, sum, omp_get_thread_num());
        }

 // Ending of parallel region    

}
