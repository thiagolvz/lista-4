#include <stdio.h>

int verificaPar(int num) {
    return (num % 2 == 0) ? 1 : 0;
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (verificaPar(num)) {
        printf("%d e par\n", num);
    } else {
        printf("%d e impar\n", num);
    }
    return 0;
}
