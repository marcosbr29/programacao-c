#include <stdio.h>

int main() {
    int escolha;
    printf("diite o numero do produto: 1 para agua, 2 para refrigerante, 3 para suco: ");
    scanf("%d", &escolha);
    switch (escolha) {
        case 1:
            printf("Você escolheu água!\n");
            break;
        case 2:
            printf("Você escolheu refrigerante!\n");
            break;
        case 3:
            printf("Você escolheu suco!\n");
            break;
        default:
            printf("Opção inválida! Escolha novamente.\n");
    }
    return 0;
}