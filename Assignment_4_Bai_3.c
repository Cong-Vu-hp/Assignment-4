#include <stdio.h>

int main(void) {
    int year;
    printf("Dien nam: ");
    scanf("%d", &year);
     while (year < 1) {
        printf("Nhap sai, vui long nhap lai: \n");
        scanf("%d", &year);
     }
    int isLeap;
    if (year % 400 == 0) {
        isLeap = 1;
    } else if (year % 100 == 0) {
        isLeap = 0;
    } else if (year % 4 == 0) {
        isLeap = 1;
    } else {
        isLeap = 0;
    }

    if (isLeap)
        printf("%d la nam nhuan.\n", year);
    else
        printf("%d khong la nam nhuan.\n", year);

    return 0;
}
