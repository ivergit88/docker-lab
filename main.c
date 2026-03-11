#include <stdio.h>

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    printf(" Simple numbers 1-100\n");
    int cnt = 0;
    for (int i = 2; i <= 100; i++) {
        if (is_prime(i)) {
            printf("%d ", i);
            cnt++;
        }
    }
    printf("\nTotal: %d\n", cnt);
    return 0;
}
