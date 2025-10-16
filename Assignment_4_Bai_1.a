#include <stdio.h>

int main(void) {
    long long n;
    if (scanf("%lld", &n) != 1) return 0;

    if (n <= 0) {
        printf("Vui long nhap n la so nguyen duong.\n");
        return 0;
    }

    long long S = 0;
    for (long long i = 1; i <= n; ++i) {
        S += i;
    }
    double avg = (double)S / (double)n;

    printf("Tong S = %lld\n", S);
    printf("Trung binh cong = %.6f\n", avg);
    return 0;
}
