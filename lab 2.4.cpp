#include <stdio.h>

/* Закрита підпрограма (функція) обчислення y за варіантом 2 */
double calc_y(double x) {
    if (x < 4.0) {
        double sum = 0.0;
        for (int i = 1; i <= 4; i++) {
            sum += (x * x + 8.0) / i;
        }
        return x * sum;
    } else {
        return 3.0 * x * x - 5.0;
    }
}

int main(void) {
    double start = 1.0;
    double end = 6.0;
    double step = 0.2;

    printf("    x    |       y\n");
    printf("---------------------\n");

    /* + 1e-9 додано, щоб через похибку дробових чисел не пропустити x = 6.0 */
    for (double x = start; x <= end + 1e-9; x += step) {
        double y = calc_y(x);
        printf("%8.2f | %10.4f\n", x, y);
    }

    return 0;
}
