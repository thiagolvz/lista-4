#include <stdio.h>

int menor(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    printf("O menor numero e: %d\n", menor(num1, num2));
    return 0;
}
