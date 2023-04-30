#include <stdio.h>



// int -> 4bytes

// A-> 5*4 bytes =20bytes
// int A[s]        A[0] A[1] A[2] A[3] A[4] 

int main()
{
    int A[] = {2,4,5,8,1};
    // address
    printf("%d\n", A);
    printf("%d\n", &A[0]);

    // value
    printf("%d\n", A[0]);
    printf("%d\n", *A);

}