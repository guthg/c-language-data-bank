#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0) {
        // 处理一次方程情况
        if (b == 0) {
            if (c == 0) {

                printf("NOANSWER\n");
            }
            else {

                printf("NOANSWER\n");
            }
        }
        else {

            double x = -c * 1.0 / b;
            printf("%.3f\n", x);
        }
    }
    else {
        // 二次方程
        long long delta = (long long)b * b - 4LL * a * c;
        if (delta < 0) {
            // 无实根
            printf("NOANSWER\n");
        }
        else if (delta == 0) {

            double x = -b / (2.0 * a);
            printf("%.3f\n", x);
        }
        else {
            // 两个实根
            double sqrt_delta = sqrt((double)delta);
            double x1 = (-b + sqrt_delta) / (2.0 * a);
            double x2 = (-b - sqrt_delta) / (2.0 * a);
            printf("%.3f %.3f\n", x1, x2);
        }
    }

    return 0;
}