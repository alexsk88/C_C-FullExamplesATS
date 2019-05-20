#include <stdio.h>
int main() {
    int dato[3]; dato[0] = 000; dato[1]= 111; dato[2]=222;    // 3 datos numerados del 0 al 2
    int datoExtraido[3];
    
    char sate[100];
    FILE* archivo;
    //ESCRITURA
//    archivo = fopen("misdatos.txt", "wt");
//    fprintf (archivo, "%d %c", dato[0], '\n');
//    fprintf (archivo, "%d %c", dato[1], '\n');
//    fprintf (archivo, "%d %c", dato[2], '\n');
//    fclose(archivo);
//    printf("Proceso de escritura completado \n");

    //LECTURA
    archivo = fopen("person_00.txt", "rt");

    fscanf (archivo, "%s", sate );
    fscanf (archivo, "%d", &datoExtraido[1] );
    fscanf (archivo, "%d", &datoExtraido[2] );

    printf ("Dato extraido indice 0 vale %s \n", sate);
    printf ("Dato extraido indice 1 vale %d \n", datoExtraido[1]);
    printf ("Dato extraido indice 2 vale %d \n", datoExtraido[2]);
    fclose(archivo);
    printf("Proceso de lectura completado");
}
