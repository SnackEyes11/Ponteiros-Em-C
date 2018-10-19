#include <stdio.h>
#include <stdlib.h>

int main(){
    char *alunos[5]={"Rogerdddddddddddddddddddddddddddddddwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww","Marlon","Ronaldo","Franscisco","Monike"};
    float nota[5];
    
    label:
    inicio:
        system("cls");
    for(int i = 0;i < 5;i++){
        printf("Informe a nota do aluno %s: ",alunos[i]);
        scanf("%f",&nota[i]);
    }
    printf("\n\n");

    printf("Notas dos alunos que foram informadas:\n");
    for(int i = 0;i < 5;i++)
        printf("%s: %.2f\n", alunos[i], nota[i]);
    system("pause");
    goto label;
    
    return 0;
}
