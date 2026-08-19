#include <stdio.h>
    
    int main(){
        float altura, largura, area;
        printf("digite a altura:\n");
        scanf("%f",&altura);
        printf("digite a largura:\n");
        scanf("%f",&largura);
        area = altura * largura;
        printf("a area do terreno é: %.2f",area);
        return 0;
    }
