#include <stdio.h>

int fatorial(int n) {
    int f = 1;
    for (int i = n; i > 1; i--) {
        f *= i;
    }
    return f;
}

void main() {
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) { 
            int z = fatorial(i);
            printf("Fatorial de %d = %d\n", i, z);
        }
    }
}
