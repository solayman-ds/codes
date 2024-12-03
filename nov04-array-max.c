#include<stdio.h>
/*
Find the max of ten integers.
 */
//  void swap(int a, int b){

//  }
#define SIZE 2 

 int main(){

    int dog[2] ={0,-1}//,2,-3,4,-5,6,-7,8,-9};
    int *ptr2dog = &dog[0];
    int max ;
    //replace max with *ptr2dog 
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
         if(*ptr2dog > *(ptr2dog+i))
            max= *ptr2dog;//printf("max = %d \n", *ptr2dog );
         else
            {
              max= ; //printf("max = %d \n", dog[i]);
            }
      }//for loop scope
   printf("FINAL answer max = %d \n", max);

    return 0;
 }






