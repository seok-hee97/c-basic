#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
 
int main(void)
{
    char c1;
 
    printf("문자 입력 : ");
    scanf("%c", &c1);
 
    printf("입력한 문자는 : %c 입니다.", c1);
 
    return 0;
}
