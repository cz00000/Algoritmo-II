#include <stdio.h>
    
    int main(){
        float salariominimo, valordodolar, quantidadedecasaspossiveis;
        printf("digite o salariominimo:\n");
        scanf("%f",&salariominimo);
        printf("digite o valor do dolar do dia:\n");
        scanf("%f",&valordodolar);
        quantidadedecasaspossiveis = (10000000 * valordodolar) / (salariominimo * 150);
        printf("A quantidade de casas possiveis de construir é: %.0f \n",quantidadedecasaspossiveis);
        return 0;
    }
