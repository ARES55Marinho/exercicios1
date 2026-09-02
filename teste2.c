#include <stdio.h>

int main() {
	int Codigo;

	printf("Digite Seu Codigo: ");
    scanf("%d", &Codigo);
    
    if (Codigo == 1) {
        printf("Escriturario!\n");
    } else if (Codigo == 2) {
    	printf("Secretaria!\n");
    } else if (Codigo == 3) {
    	printf("Caixa!\n");
	} else if (Codigo == 4) {
    	printf("Gerente!\n");
    } else if (Codigo == 5) {
    	printf("Diretor!\n");
	} else {
        printf("Erro!\n");
    }

    return 0;
}

