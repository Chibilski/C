#include <stdio.h>

int main (){
    int chute = 0;
    int numerosecreto = 42;
    int acertou = chute == numerosecreto;
    if(acertou) {
        printf("Parab�ns! Voc� acertou!\n");
    }
    else {
        if(chute > numerosecreto) {
            printf("Seu chute foi maior do que o n�mero secreto!\n");
        }
        if(chute < numerosecreto) {
            printf("Seu chute foi menor do que o n�mero secreto!\n");
        }
    }

return 0;
}
