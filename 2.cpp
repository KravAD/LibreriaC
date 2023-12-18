#include <stdio.h>
#include <string.h>

int main() {

    char string1[] = "Moto";
    char string2[] = "Coche";

    char string3[] = "La vida es como una lenteja, o la tomas o la dejas";

    int comparacion = strcmp(string1, string2);

    if (comparacion == 0 ) {
        printf("Las cadenas son iguales");
    }
    else {
            printf("Las cadenas son distintas");
        }

    int longitud = strlen(string3);
    
    return 0;
}