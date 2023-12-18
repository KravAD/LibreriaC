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

        fpritf(file2, "Hola GEOVANNY\n");

        fclose(file);

    return 0;
}