#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){

    int num1 = -1;
    int num2 = -2;
    int num3 = -3;

    int abs_num1 = abs(num1);
    int abs_num2 = abs(num2);
    int abs_num3 = abs(num3);

    srand(time(0));

    int numero_aleatorio = rand();

    printf("El valor absoluto de %d es %d\n ", num1, abs_num1);
    printf("El valor absoluto de %d es %d\n ", num2, abs_num2);
    printf("El valor absoluto de %d es %d\n ", num3, abs_num3);

    printf("El numero aleatorio es %d\n", numero_aleatorio);



    return 0;
}