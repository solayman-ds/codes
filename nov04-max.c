#include<stdio.h>
/*
Find the max of two integers.
 */
//  void swap(int a, int b){

//  }
#define SIZE 2

 int main(){

    int dog[2] ={-90, 8};
    int max = dog[0];
    /*
    if (max > dog[1])
      printf("the max is %d \n", max);
   else
      {
      printf("the max is %d", dog[1]);
      }
   */

    for (int i=0; i< SIZE ; ++i)
      {
         if(max > dog[i])
            printf("max = %d \n", max);
         else
            {
               printf("max = %d \n", dog[i]);
            }
      }//for loop scope


    return 0;
 }






