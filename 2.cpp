#include <stdio.h>
#include <string.h>

int main() {

    char string1[] = "Moto";
    char string2[] = "Coche";

    int comparacion = strcmp(string1, string2);

    if (comparacion == 0 ) {
        printf("Las cadenas son iguales");
    }
    else {
            printf("Las cadenas son distintas");
        }

    return 0;
}