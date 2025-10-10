#include <stdio.h>

int main() {
    int n;
    unsigned long long fatorial = 1; // Usamos "unsigned long long" para armazenar números grandes
    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);
    // Verificação para números negativos
    if (n < 0) {
        printf("O fatorial não está definido para números negativos.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é %llu\n", n, fatorial);
    }
    return 0;
}