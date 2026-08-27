#include <stdio.h>

const float PI = 3.14159;

int main() {
    int raio = 5;
    float area;
    
    printf("Olá bem-vindo ao programa calculo area do circulo!\n");

    area = PI * raio * raio;
    
    printf("A area do circulo com raio %d é: %.2f\n", raio, area);
    return 0;
}