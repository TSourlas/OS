#include <stdio.h>

void add(int *a, int *b, int *c, int *result) {
    *result = *a + *b + *c;
}

int main() {
    int x = 1, y = 2, z = 3, sum;
    add(&x, &y, &z, &sum);
    printf("Sum: %d\n", sum);
    return 0;
}