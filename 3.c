#include <stdio.h>

int main () {

    FILE *file = fopen("file.txt", "r");
    if (file = NULL){
        printf("El archivo no se abre. \n");
        return 1;
    }

    return 0;
}