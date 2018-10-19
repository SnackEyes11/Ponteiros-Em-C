#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void Embaralha(int baralho[][13]);
void Distribui(int baralho[][13],const char *nipe[],const char *numero[]);

int main(){
    const char *nipe[4]={"Paus","Copas","Espadas","Ouro"};
    const char *numero[13]={"Ás","Dois","Três","Quatro","Cinco","Seis","Sete","Oito",
    "Nove","Dez","Valete","Dama","Rei"};
    
    srand(time(0));
    label:
    int baralho[4][13]={0};
    system("cls");
    Embaralha(baralho);
    Distribui(baralho,nipe,numero);
    goto label;
    
    return 0;
}

void Embaralha(int baralho[][13]){
    int coluna, linha, carta;
    
    for(carta = 1;carta <= 52;carta++){
        do{
            linha = rand () % 4;
            coluna = rand () % 13;
        }while(baralho[linha][coluna] != 0);        
        
        baralho[linha][coluna] = carta;
    }
}

void Distribui(int baralho[][13], const char *nipe[], const char *numero[]){
    setlocale(LC_ALL,"Portuguese");
    
    for(int carta = 1;carta <= 52;carta++){
        for(int linha = 0;linha < 4;linha++){
            for(int coluna = 0;coluna < 13;coluna++){
                if(baralho[linha][coluna] == carta){
                    printf("%s de %s",numero[coluna] ,nipe[linha]); 
                    carta % 2 == 0 ? printf("\n"):printf("\t\t\t\t");   
                }       
            }
        }
    }
    system("pause");
}
