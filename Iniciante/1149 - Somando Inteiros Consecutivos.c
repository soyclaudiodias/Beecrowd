#include <stdio.h>
 
int main() {
    int a, n, sum = 0;

    scanf("%d%d", &a, &n);

    while (n <= 0)
        scanf("%d", &n);

    for (int i = 0; i <= n-1; i++)
        sum += a + i;

    printf("%d\n", sum);
 
    return 0;
}
