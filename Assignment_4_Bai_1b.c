#include <stdio.h>
#include <stdlib.h>

int main () {
    int a;
    printf("Nhap mot so nguyen: \n");
    scanf("%d", &a);
    int Tong_cac_so_chan = (a/2)*(a/2 +1);
    int Trung_binh_cong_tong_cac_so_chan = (a/2+1); 
    

    printf("Tong cac so chan la %d \n", Tong_cac_so_chan);
    printf("Trung binh cong cac so chan la %d", Trung_binh_cong_tong_cac_so_chan);
    return 0;
}

