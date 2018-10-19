#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    
    int vetor[5];
    int *ponteiro=vetor;
    int i;
    
    for(i = 0;i < 5;i++)
        vetor[i] = rand() % 10;
    
    printf("Modo vetor[]:\n");
    for(i = 0;i < 5;i++)
        printf("%d\t",vetor[i]);
    printf("\n\n");
    
    printf("Modo *(ponteiro + i)\n");
    for(i = 0;i < 5;i++)
        printf("%d\t",*(ponteiro + i));
    printf("\n\n");
    
    printf("Modo *(vetor + i)\n");
    for(i = 0;i < 5;i++)
        printf("%d\t",*(vetor + i));
    printf("\n\n");
    
    printf("Modo ponteiro[i]\n");
    for(i = 0;i < 5;i++)
        printf("%d\t",ponteiro[i]);    
    
    
    
    
}
