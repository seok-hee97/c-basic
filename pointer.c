#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    int * pAge = &age;


    printf("%p",pAge);

    //Dereferencing Poitners
    printf("%d", *pAge);

    printf("%d", *&*&age);

    //printf("age',s memory address: %p\n", &age);

    return 0;
}


//Dereferencing Pointers