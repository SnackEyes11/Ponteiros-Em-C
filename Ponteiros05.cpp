#include <stdio.h>

void function1(int a);
void function2(int b);
void function3(int c);

int main(){
    void (*f[3])(int)={function1,function2,function3};
    
    int choice;
    
    printf("Digite um numero de 0 a 2, 3 para sair: ");
    scanf("%d",&choice);
    
    while(choice>=0 && choice<=2){
        (*f[choice])(choice);
        printf("Digite um numero de 0 a 2, 3 para sair: ");
        scanf("%d",&choice);
    }
    
    printf("\n\nExecucao do programa concluída!");
    return 0;
}

void function1(int a){
    printf("Você digitou %d, de modo que function1 foi chamada\n\n",a);
}

void function2(int b){
    printf("Você digitou %d, de modo que function2 foi chamada\n\n",b);
}

void function3(int c){
    printf("Você digitou %d, de modo que function3 foi chamada\n\n",c);
}
    
