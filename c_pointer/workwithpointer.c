#include <stdio.h>


int main(){

    // int a;
    // int *p;
    // a= 10;
    // p = &a;     //&a = address of  a

    // *p =12;     //dereferencing

    // int b = 20;
    // *p =b;  //Will the addresws in p change to point b??

    // printf("%d\n", p);
    // printf("%d\n", *p);
    // printf("%d\n",&a);


    int a = 10;
    int *p;
    p =&a;
    //Pointer arithmetic
    printf("%d\n", p); // p is 2002
    printf("size of integer is %d bytes\n", sizeof(int));
    printf("%d\n", p+1); //p+1 is 2006
    // printf("%d\n", p+2);    //p+2 is 2010
    

}