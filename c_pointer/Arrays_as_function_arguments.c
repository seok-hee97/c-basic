
//Arrays as function arguments




#include <stdio.h>

int SumOfElements(int *A)   //"int* A" or "int A[]"  ... it's the same...
{
    int i, sum = 0;
    int size = sizeof(A)/sizeof(A[0]);
    for(i = 0; i< size;i++)
    {
        sum+= A[i];     //A[i] is *(A+i)
    }
}

int main()
{
    int A[] = {1,2,3,4,5};
    int total = SumOfElements(A);       //A can be used for &A[0]
    printf("Sum of elements  =%d\n", total);
    printf("Main - Size of A = %d, size of A[0]= %d\n", sizeof(A), sizeof(A[0]));
}