#include <stdlib.h>
#include <stdio.h>

int main() {
    int *numeros=(int *)malloc(10 * sizeof(int));
    if (numeros == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    for (int i = 0; i < 10; i++) {
        numeros[i] = i;
        printf("%d ", numeros[i]);
    }
    free(numeros);
    return 0;
}