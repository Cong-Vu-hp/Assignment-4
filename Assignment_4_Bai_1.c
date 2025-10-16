#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main () {
    int n;
    printf("Nhap mot so nguyen: \n");
    scanf("%d", &n);
    
    int Tong_cac_so_le = 0;
    for (int i = 1; i <= n; i+=2) {
        Tong_cac_so_le += i;
    }
    printf("Tong cac so le la %d \n", Tong_cac_so_le);
    printf("Trung binh cong cua tong cac so le la %d \n", Tong_cac_so_le/(n/2));
    return 0;
    
}

