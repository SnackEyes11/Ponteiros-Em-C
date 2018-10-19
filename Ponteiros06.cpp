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
    void (*Menu[4])(int vetor[])={Sair,Ler,Soma,Mostrar};   //cria um vetor de 4 posições, em que cada 
                                                            //posição assume uma função. *Menu[0] é igual 
                                                            //a função sair; *Menu[1] é igual a função
                                                            //Ler...
                                                            //O protipos dessa função devem ser declarados
                                                            //antes de serem a tribuidos ao vetor de ponteiros
                                                            //para uma função            
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
        (*Menu[opcao])(vetor);  //Dependo da opção de entrada padrão do usuario, o compilador redireciona
                                //para uma função
                                //Exemplo: se a opção de entrada for 1; o compilador redicionará para a  
                                //função Ler, que foi apontado pelo vetor de ponteiros de funções 
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
        printf("Ainda não a valores no vetor\n\n");
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
        printf("Ainda não a valores no vetor\n\n");
    }
}

void Sair(int vetor[]){
    exit(1);
}
