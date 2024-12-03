#include<stdio.h>

void swap(int *a, int *b ){

int c = *a;
*a=*b;
*b=c;

printf("swapped values a =%d, b=%d \n", *a, *b);


}

int main(){

    int a =9;
    int b= 8;

    printf("before swap: a=%d, b=%d \n", a,b);

    swap(&a,&b);

    return 0;
}