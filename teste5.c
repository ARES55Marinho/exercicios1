#include <stdio.h>

int main() {
	
	
	char Nome[50];
		
		printf("Digite seu nome: \n");
    scanf("%s", &Nome);
	
	char Apto;
	
	printf("A - Preco da diaria: R$150,00. \n B - Preco da diaria: R$100,00. \n C - Preco da diaria: R$75,00. \n D - Preco da diaria: R$50,00\n\n");

	printf("Digite o a letra do Apto que deseja: \n");
    scanf("%c", &Apto);
    
    Apto = toupper(Apto);
    
    int Dias;
    
    printf("Digite o numero de dias que vai estar hospedado: \n");
    scanf("%d", &Dias);
    
    if (Apto == 'A') {
        printf("o cliente %s ficou no Apto A por %d dias!\n",Nome,  Dias);
    } else if (Apto == 'B') {
    	printf("mutiplicacao!\n");
    } else if (Apto == 'C') {
    	printf("subtracao!\n");
	} else if (Apto == 'D') {
    	printf("divisao!\n");
	} else {
        printf("Codigo invalido!\n");
    }
    
    
    return 0;
}

