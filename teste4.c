#include <stdio.h>

int main() {
	int Menu;
	
	printf("1 - Adicao. \n 2 - mutiplicacao. \n 3 - subtracao. \n 4 - divisao\n\n");

	printf("Digite o numero da operacao que deseja: \n");
    scanf("%d", &Menu);
    
    if (Menu == 1) {
        printf("Adicao!\n");
    } else if (Menu == 2) {
    	printf("mutiplicacao!\n");
    } else if (Menu == 3) {
    	printf("subtracao!\n");
	} else if (Menu == 4) {
    	printf("divisao!\n");
	} else {
        printf("Codigo invalido!\n");
    }
    
    float Numero1, Numero2;
    
    printf("Digite o primeiro numero: \n");
    scanf("%f", &Numero1);
    
    printf("Digite o segundo numero: \n");
    scanf("%f", &Numero2);


if (Menu == 1) {
    printf("%.2f + %.2f = %.2f\n", Numero1, Numero2, Numero1 + Numero2);
    } else if (Menu == 2) {
    	 printf("%.2f + %.2f = %.2f\n", Numero1, Numero2, Numero1 * Numero2);
    } else if (Menu == 3) {
    	 printf("%.2f + %.2f = %.2f\n", Numero1, Numero2, Numero1 - Numero2);
	} else if (Menu == 4) {
     printf("%.2f + %.2f = %.2f\n", Numero1, Numero2, Numero1 / Numero2);
	} else {
        printf("Codigo invalido!\n");
    }


    return 0;
}

