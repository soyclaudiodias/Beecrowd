#include <stdio.h>
#include <stdbool.h>
 
int main() {
    int n;

    while (true) {
        scanf("%d", &n);

        if (n == 2002) {
            printf("Acesso Permitido\n");
            break;
        } else
            printf("Senha Invalida\n");
    }
 
    return 0;
}
