#include <stdio.h>

int main() {
    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    printf("Sua media foi: %.2f\n", media);

    if (media >= 5.0) {
        printf("Aprovado!\n");
    } else if (media >= 3) {
    	printf("Exame!\n");
	} else {
        printf("Reprovado!\n");
    }

    return 0;
}
