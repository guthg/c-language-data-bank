#include <stdio.h>
#include <math.h>


int isPrime(int num) {
    if (num <= 1) return 0;
    if (num == 2) return 1;
    if (num % 2 == 0) return 0;


    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    int found = 0;
    for (int i = 2; i <= n - 2; i++) {
        if (isPrime(i) && isPrime(i + 2)) {
            printf("%d %d\n", i, i + 2);
            found = 1;
        }
    }

    // 如果没有找到任何素数对
    if (!found) {
        printf("empty\n");
    }

    return 0;
}