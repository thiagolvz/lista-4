#include <stdio.h>

int verificaPositivoNegativo(int num) {
    if (num > 0) return 1;
    if (num < 0) return -1;
    return 0;
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    int resultado = verificaPositivoNegativo(num);
    if (resultado == 1) {
        printf("%d e positivo\n", num);
    } else if (resultado == -1) {
        printf("%d e negativo\n", num);
    } else {
        printf("%d e zero\n", num);
    }
    return 0;
}
