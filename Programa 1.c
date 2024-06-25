#include <stdio.h>

//Samuel Marinho de Carvalho - 202403616441;//
//Samuel Silva de Jesus - sem matricula,por enquanto.//

int main(){
    float nota1,nota2,nota3;
    float media;
    printf("Digite suas notas:");
    scanf("%f,%f,%f",&nota1,&nota2,&nota3);
    
    media=(nota1+nota2+nota3)/3;
    printf("Sua media e:%f\n",media);
    return 0;
}
