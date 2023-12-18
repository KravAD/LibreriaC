#include <stdio.h>


int main () {

    FILE *file = fopen("file.txt", "r");

        if (file == NULL) {
            printf("El archivo no se abre.\n");
            return 1;
        }

        FILE *file2 = fopen("file.txt","w");
        if (file == NULL){
            printf("El archivo no se pudo abrir para escribir.\n");
            return 1;
        }

        fclose(file);

    return 0;
}