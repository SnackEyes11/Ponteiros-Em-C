    /*Cubo de uma variavel chamada por valor*/
#include <stdio.h>

int CuboPorValor(int i);
int CuboPorReferencia(int *Ponteiro);

int main(){
    int number = 5; /*incializa número*/
    auto int number1 = 5;
    
    printf("\t\t\tPor Valor\n");
    printf("O valor original do numero e %d\n",number);
    number = CuboPorValor(number);
    printf("\nO novo valor do numero e %d",number);
    
    printf("\n\n\n");
    printf("\t\t\tPor Referencia\n");
    printf("O valor original do numero e: %d\n",number1);
    CuboPorReferencia(&number1);
    printf("\nO novo valor do numero e %d",number1);
    
    return 0;
}

int CuboPorValor(int i){
    return i * i * i;
}

int CuboPorReferencia(int *Ponteiro){
    *Ponteiro = *Ponteiro * *Ponteiro * *Ponteiro;
}

