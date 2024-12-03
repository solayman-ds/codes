#include<stdio.h>
/*
swap two integers using pointers. 
These integers are entries of an array called dog. This array is of length 2.
 */
//  void swap(int a, int b){

//  }

 int main(){

    int dog[2] ={-90, 8};
    
    int *ptr2dog=&dog[0];
    //int *ptr2dog=dog;//another way of declaring. 
    printf("array[0] = %d, array[1] = %d \n", dog[0], dog[1]);
    printf("ptr2dog=%d \t ptr2dog next entry= %d \n", *ptr2dog,*(ptr2dog+1));
    //for loop
    // for (int i=0; i<2; ++i)
    //     printf("dog[%d]=%d \n", i, dog[i]); //scope of i is only the first line following for-loop.


    return 0;
 }






