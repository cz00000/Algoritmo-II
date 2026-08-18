#include <stdio.h>
    
    int main(){
        float salariominimo,salariobruto,quantidadedesalariominimo;
        printf("digite o salario minimo:\n");
        scanf("%f",&salariominimo);
        printf("digite o salario bruto:\n");
        scanf("%f",&salariobruto);
        quantidadedesalariominimo = salariobruto / salariominimo;
        printf("quantidade de salario minimo:%.2f\n",quantidadedesalariominimo);
        return 0;
    }
