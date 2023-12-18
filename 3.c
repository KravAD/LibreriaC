#include <stdio.h>

int main () {

    FILE *file = fopen("file.txt", "r");
    if (file = NULL){
        printf("El archivo no existe");
    }

    return 0;
}