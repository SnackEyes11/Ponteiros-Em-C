#include <stdio.h>
#include <stdlib.h>

#define MAX 5

void Ler(int vetor[]);
void Soma(int vetor[]);
void Mostrar(int vetor[]);
void Sair(int vetor[]);
int check=0;

int main(){
    int vetor[MAX];
    int opcao;
    void (*Menu[4])(int vetor[])={Sair,Ler,Soma,Mostrar};   //cria um vetor de 4 posi��es, em que cada 
                                                            //posi��o assume uma fun��o. *Menu[0] � igual 
                                                            //a fun��o sair; *Menu[1] � igual a fun��o
                                                            //Ler...
                                                            //O protipos dessa fun��o devem ser declarados
                                                            //antes de serem a tribuidos ao vetor de ponteiros
                                                            //para uma fun��o            
    inicio:
    system("cls");
    printf("Opcao de entrada:\n");
    printf("(0) - Sair do Programa\n");
    printf("(1) - Ler novo valor do vetor\n");
    printf("(2) - Soma dos valores do vetor\n");
    printf("(3) - Mostrar valores do vetor\n");
    printf("Opcao: ");
    label:
    scanf("%d",&opcao);
    if(opcao>=0 && opcao<=3)
        (*Menu[opcao])(vetor);  //Dependo da op��o de entrada padr�o do usuario, o compilador redireciona
                                //para uma fun��o
                                //Exemplo: se a op��o de entrada for 1; o compilador redicionar� para a  
                                //fun��o Ler, que foi apontado pelo vetor de ponteiros de fun��es 
                                //(*Menu[1])(vetor)
    else{
        printf("\nInforme uma opcao valida: ");
        goto label;
    }
    system("pause");
    goto inicio;
    return 0;
}

void Ler(int vetor[]){
    system("cls");
    check++;
    printf("Informe os valores do vetor:\n");
    for(int i = 0;i < MAX;i++)
        scanf("%d",&vetor[i]);
    printf("\n\n");    
}
void Soma(int vetor[]){
    system("cls");
    if(check > 0){
        long int soma = 0;
    
        printf("Soma dos valores do vetor: ");
        for(int i = 0;i < MAX;i++)
            soma += vetor[i];
        printf("%ld\n\n",soma);
    }else{
        printf("Ainda n�o a valores no vetor\n\n");
    }
}
void Mostrar(int vetor[]){
    system("cls");
    
    if(check > 0){
        printf("Valores existentes no vetor:\n");
        for(int i = 0;i < MAX;i++)
            printf("%d\t",vetor[i]);
        printf("\n\n");
    }else{
        printf("Ainda n�o a valores no vetor\n\n");
    }
}

void Sair(int vetor[]){
    exit(1);
}
