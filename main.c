#include <stdio.h>

int main()
{
    char cadena[100];
    FILE*archivo;
    printf("Ingrese cadena de texto: ");
    fgets(cadena, sizeof(cadena),stdin);
    archivo=fopen("texto.txt","w");
    if (archivo==NULL){
        printf("No se pudo abrir el archivo de salida.\n");
        return 1;
    }
    fputs(cadena,archivo);
    fclose(archivo);
    return 0;
}
