#include <stdio.h>
 
int main() {
    int n, x, y;

    scanf("%d", &n);

    for (int i = 0; i < n ; i++) {
        int sum = 0;
        
        scanf("%d %d", &x, &y);

        if (x < y) {
            for (int i = x+1; i < y; i++) {
                if ((i % 2) != 0)
                    sum += i;
            }
        } else {
            for (int i = y+1; i < x; i++) {
                if ((i % 2) != 0)
                    sum += i;
            }
        }

        printf("%d\n", sum);
    }
 
    return 0;
}
