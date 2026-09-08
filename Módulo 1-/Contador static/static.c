#include <stdio.h>

void incrementa() {
    static int contador = 0; // Variável estática para manter o valor entre chamadas
    contador++;
    printf("Contador: %d\n", contador);
}

int main() {
    
    incrementa(); // Chamada 1
    incrementa(); // Chamada 2
    incrementa(); // Chamada 3
    incrementa(); // Chamada 4
    return 0;
}