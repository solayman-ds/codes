#include<stdlib.h>
#include<stdio.h>
#include<omp.h> //OpenMP header.
/*
 Parallel programming can be achieved using Open MP. 
 Goal of this program is to create a matrix product of 2 square matrices of the same order.

/******************************************************************************/
/*
  Purpose:

    MAIN is the main program for MXM_OPENMP.

  Licensing:

    This code is distributed under the GNU LGPL license. 

  Modified:

    13 October 2011

  Author:

    John Burkardt
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
int a[2][2], b[2][2], c[2][2];
//matrix initialization with integer values.
    for (int i = 0 ; i < 2; i++)
        {
             for (int j = 0 ; j < 2; j++)
             {
                 a[i][j] = (i+1)*(j+2);
                 b[i][j] = (i+3)*(j+4);
                 c[i][j] = 0;//product of the matrices.
              }//j-loop      
        }//i-loop
        
   //matrix product in serial     
    for (int i = 0 ; i < 2; i++)
          {
             for (int j = 0 ; j < 2; j++)
             {
                #pragma omp parallel for
                    for (int k = 0 ; k <2 ; ++k) 
                    {
                    c[i][j] += a[i][k]*b[k][j];//product of the matrices.
                    printf("Matrix product i=%d, j=%d, k=%d by thread %d \n", i ,j, k, omp_get_thread_num());
                    }//k-loop
              }//j-loop      
        }//i-loop
        
// Beginning of parallel region    
 /*#pragma omp parallel for
    { // Beginning of parallel region 
    //   for (int i = 0 ; i < 5; i++)
    //         {
    //             sum += a[i]* b[i];             
    //             printf("Parallel Dot Product at index %d is %d by thread %d. \n", i, sum, omp_get_thread_num());
    //         }
    } //*/

}
