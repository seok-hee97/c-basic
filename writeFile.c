#include <stdio.h>
#include <stdlib.h>


int main(){
    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");  //w:write   a:append line r:read

    // fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");
    fgets(line, 255, fpointer);
    printf("%s",line);

    fclose(fpointer);
    return 0;
}