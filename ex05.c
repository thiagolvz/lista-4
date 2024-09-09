#include <stdio.h>

int somaDivisores(int num) {
    int soma = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma;
}

int main() {
    int num;
    for (int i = 0; i < 5; i++) {
        do {
            printf("Digite um numero positivo: ");
            scanf("%d", &num);
        } while (num <= 0);
        printf("A soma dos divisores de %d e: %d\n", num, somaDivisores(num));
    }
    return 0;
}
