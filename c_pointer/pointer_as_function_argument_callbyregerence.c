#include <stdio.h>

//wrong example
// void Increment(int x)               //called function
// {
//     x =x+1;
//     //a = a+1;
//     //printf("Address of variable a in increment =%d\n",&a);
// }                   


void Increment(int *x)               //called function
{
    *x =*x+1;
    //a = a+1;
    //printf("Address of variable a in increment =%d\n",&a);
}                   



int main()          //call by reference
{   
    int a;
    a =10;
    Increment(&a);           //Actual argument
    printf("a = %d", a);

}