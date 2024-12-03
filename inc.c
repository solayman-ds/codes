#include<stdio.h>
/*
++i pre-increment
i++ post-increment
in loops indistinguishable
*/
int main(){
    //  for (int i =0 ; i<4 ; i++)
    //     printf("i++=%d ",i);


    // for (int i =0 ; i<4 ; ++i)
    //     printf("++i=%d ",i);

//compare to assignment operator to see the difference:
int i=0;
int x =++i;
x=0;
printf("x = %d ", x);

x =i++;
printf("x = %d ", x);

return 0;

}