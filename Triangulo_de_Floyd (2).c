#include <stdio.h>
#include <stdlib.h>

int main (void) {

    int altura;
    printf ("Digite uma altura: ");
    scanf ("%d", &altura);

    int valor = 1;

    for(int i = 1; i <= altura; i++) {
        for (int j = 0; j < i; j++) {
            printf("%d ", valor);
            valor++;
        }
        printf("\n");
    }

    return 0;
}
