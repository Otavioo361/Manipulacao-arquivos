#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int arg, char *argv[]){
    void mycopy(FILE *file1, FILE *file2);

    FILE  *file1 = fopen("exercicio.txt", "rb");
    if (file1 == NULL){
        printf("Nao foi possivel abrir o arquivo.");
        return 1;
    }

    FILE *file2 = fopen("exercicio2.txt", "w");

    mycopy(file1, file2);

    fclose(file1);
    fclose(file2);

    return 0;
}

void mycopy(FILE *file1, FILE *file2){

    char leitor[1000];
    
    while (fgets(leitor, 1000, file1) !=NULL)

    fputs (leitor, file2); 
    
}
