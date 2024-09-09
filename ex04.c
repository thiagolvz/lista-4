#include <stdio.h>

int absoluto(int num) {
    return (num < 0) ? -num : num;
}

int main() {
    int num;
    for (int i = 0; i < 5; i++) {
        printf("Digite um numero: ");
        scanf("%d", &num);
        printf("O valor absoluto de %d e: %d\n", num, absoluto(num));
    }
    return 0;
}
