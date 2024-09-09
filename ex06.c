#include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, char tipo) {
    if (tipo == 'A') {
        return (nota1 + nota2 + nota3) / 3;
    } else if (tipo == 'P') {
        return (nota1 * 5 + nota2 * 3 + nota3 * 2) / 10;
    } else if (tipo == 'H') {
        return 3 / ((1/nota1) + (1/nota2) + (1/nota3));
    }
    return 0;
}

int main() {
    float nota1, nota2, nota3;
    char tipo;
    printf("Digite tres notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);
    printf("Digite o tipo de media (A para aritmetica, P para ponderada, H para harmonica): ");
    scanf(" %c", &tipo);
    printf("A media e: %.2f\n", calcularMedia(nota1, nota2, nota3, tipo));
    return 0;
}
