#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define MAX 20

void Bubble(int vetor[],int (*compara)(int num1, int num2));
int Crescente(int num1, int num2);
int Decrescente(int num1, int num2);
void Gerar(int *apontaV);
void Mostrar(int *apontaV);
void Menu(int vetor[]);

int main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor[MAX]={0};
    int opcao;
    
    srand(time(NULL));
    
    printf("Informe opção de entrada:\n");
    printf("(1) - Gerar números aleatórios\n");
    printf("(0) - Sair do programa\n");
    printf("opcao: ");
    inicio:
    scanf("%d",&opcao);
    switch(opcao){
        case (1) : Gerar(&vetor[0]); break;
        case (0) : exit(1);
        default:{
            printf("Entrada Inválida!\n\n");
            printf("Informe uma opção válida: ");
            goto inicio;
        }
    }    
    
    Menu(vetor);
    return 0;
}
    
    
void Bubble(int vetor[],int (*compara)(int num1, int num2)){
    int passada;
    int contador;
    
    void Inverter(int *elemento1, int *elemento2);
    
    for(passada = 1; passada < MAX;passada++){
        for(contador = 0;contador < MAX-1;contador++){
            if((*compara)(vetor[contador],vetor[contador+1])){
                Inverter(&vetor[contador],&vetor[contador+1]);
            }        
        }
    }
    printf("\n\nVetor ordenado com sucesso!");
    printf("\n\n");
    system("pause");
    Menu(vetor);
}

void Inverter(int *elemento1, int *elemento2){
    int guarda;
    
    guarda = *elemento1;
    *elemento1 = *elemento2;
    *elemento2 = guarda;
}

int Crescente(int num1, int num2){
    return num1 > num2;
}

int Decrescente(int num1, int num2){
    return num1 < num2;
}

void Menu(int vetor[]){
    setlocale(LC_ALL,"Portuguese");
    
    int opcao;
    
    label:
    system("cls");
    printf("Lista de opções:\n");
    printf("(1) - Gerar novos valores ao vetor\n");
    printf("(2) - Mostrar valores existentes no vetor\n");
    printf("(3) - Ordenar o vetor em ordem crescente\n");
    printf("(4) - Ordenar o vetor em ordem decrescente\n");
    printf("(0) - sair\n");
    printf("Opção: ");
    inicio:
    scanf("%d",&opcao);
    switch(opcao){
        case (1): Gerar(&vetor[0]); break;
        case (2): Mostrar(&vetor[0]); break;
        case (3): Bubble(vetor, Crescente); break;
        case (4): Bubble(vetor, Decrescente); break;
        case (0): exit(1);
        default:{
            printf("Entrada Inválida!\n\n");
            printf("Informe uma opção válida: ");
            goto inicio;
        }
    }
    goto label;
}

void Gerar(int *apontV){
    for(int i = 0;i < MAX;i++)
        *(apontV + i) = (rand() % 99) + 1;
    
    printf("\n\nNúmeros gerados com sucesso!\n\n");
    system("pause");
}

void Mostrar(int *apontV){
    printf("\n\nValores presente no vetor:\n");
    for(int i = 0;i < MAX;i++)
        printf("%d\t",*(apontV + i));
    printf("\n\n");     
    system("pause");
}

