#include <stdio.h>

int potencia(int base, int expoente) {
    int resultado = 1;
    for (int i = 0; i < expoente; i++) {
        resultado *= base;
    }
    return resultado;
}

int main() {
    int base, expoente;
    printf("Digite a base e o expoente: ");
    scanf("%d %d", &base, &expoente);
    printf("%d elevado a %d e: %d\n", base, expoente, potencia(base, expoente));
    return 0;
}
