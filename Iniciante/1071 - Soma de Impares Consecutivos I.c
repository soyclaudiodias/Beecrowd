#include <stdio.h>
 
int main() {
    int x, y, sum = 0;

    scanf("%d%d", &x, &y);

    for (int i = x-1; i > y; i--){
        if (i%2 != 0)
            sum += i;
    }
    
    printf("%d\n", sum);
 
    return 0;
}
