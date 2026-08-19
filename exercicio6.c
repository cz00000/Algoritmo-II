#include <stdio.h>
    
    int main(){
        int valor;
        printf("digite o valor:\n");
        scanf("%d",&valor);
        if (valor % 5 > 0) {
            printf("O valor nao é multiplo de 5.\n");
        } else {
            printf("O valor é multiplo de 5.\n");
        }
        return 0;
    }
