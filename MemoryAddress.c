#include <stdio.h>
#include <stdlib.h>


int main(){

    int age =30;
    double gpa =3.4;
    char grade = 'A';

    printf("age: %p\ngpa: %p\ngrade: %p", &age, &gpa, &grade);     //&age memory address var age

    return 0;
}