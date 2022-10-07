#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>


void mygrep(FILE *file1){
    int i, achou = 1, o;

    char leitor[1000], buscado[100];
    scanf("%s", buscado);    
    printf("%ld", strlen(buscado));
    printf("\n");
    while (fgets(leitor, 1000, file1) != NULL ){
        //printf("%s", leitor);
        for(i = 0 ; i<strlen(buscado); i++){
            if(leitor[i] != buscado[i]){
                achou = 0;
                break;
            }
        }
        if (achou == 1) break;
    }
    if (achou == 1)
        printf("Achou a %s string!\n", buscado);
    else printf("Não achou!\n");
       
}


int main(int arg, char *argv[]){
    FILE  *file1 = fopen("exerciciograp.txt", "r");
    if (file1 == NULL){
        printf("Nao foi possivel abrir o arquivo.");
        return 1;
    }
   
    mygrep(file1);

    fclose(file1);

    return 0;
}

