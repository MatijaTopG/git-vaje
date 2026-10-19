#include <stdio.h>

int main() {
    int a, b;
    char op;

    printf("Vnesi izraz (npr. 5 + 3): ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+':
            printf("Rezultat: %d\n", a + b);
            break;

        case '-':
            printf("Rezultat: %d\n", a - b);
            break;

        case '*':
            printf("Rezultat: %d\n", a * b);
            break;

        case '/':
            if (b == 0) {
                printf("Deljenje z 0 ni dovoljeno.\n");
            } else {
                printf("Rezultat: %.2f\n", (float)a / b);
            }
            break;

        default:
            printf("Nepodprt operator.\n");
    }

    return 0;
}