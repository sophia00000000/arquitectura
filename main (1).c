#include <stdio.h>

int main()
{
    int numero;
    FILE *archivoEntrada, *archivoSalida;
    
    archivoEntrada=fopen("entrada.txt","r");
    if (archivoEntrada==NULL){
        printf("No.\n");
        return 1;
    }
    fscanf(archivoEntrada, "%d", &numero);
    fclose(archivoEntrada);
    
    archivoSalida=fopen("salida.txt", "w");
    if (archivoSalida==NULL){
        printf("No.\n");
        return 1;
    }
    fprintf(archivoSalida, "E numero es: %d", numero);
    fclose(archivoSalida);
    
    printf("EL numero ha sido leido y escrito en el archivo de salia.\n");
    return 0;
}
