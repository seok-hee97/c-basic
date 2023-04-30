#include <stdio.h>  //standard input output 
#include <stdlib.h>

// double cube(double num){
//     double result = num*num*num;
//     return result;

//     //retun num*num*num             //is same
// }




// //void is empty return about functiion
// void sayHi()
// {

//     printf("Hello User");
// }


//compare two number and return bigger
int max(int num1, int num2, int num3)
{
    int result;
    if(num1 >=num2 &&num1>=num3){
        result = num1;
    }
    else if(num2>= num1 && num2>=num3){
        result=num2;
    }
    else{
        result= num3;
    }

    return result;
}


//code reading top->bottom so int main should locate in bottom is good!!
int main()
{

    printf("%d", max(4, 10, 15));
    return 0;
}