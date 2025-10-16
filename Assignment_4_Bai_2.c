#include <stdio.h>
#include <stdlib.h>
int main() {
    int h, m;
    int n;
    float BMI;
    printf("Chon don vi tinh: \n 1. cm, kg \n 2. inch, pound \n");
    scanf("%d", &n);
    while (n != (int)1 && n != (int)2) {
        printf("Nhap sai, vui long nhap lai: \n");
        scanf("%d", &n);

    }
    printf("Nhap chieu cao: \n");
    scanf("%d", &h);
    printf("Nhap can nang: \n");
    scanf("%d", &m);
    switch(n){
        case 1:
            float BMI = (float)m/(h*h)*10000;
            printf("Chi so BMI cua ban la: %f. \n", BMI);
            break;
        case 2:
            BMI = (float)m/(h*h)*703;
            printf("Chi so BMI cua ban la: %f. \n", BMI);
            break;
    
    }
    
    return 0;
}