#include <stdio.h>
 
int main() {
    int n, x, in = 0, out = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        scanf("%d", &x);
        
        if (x >= 10 && x <= 20)
            in += 1;
        else
            out += 1;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);
 
    return 0;
}
