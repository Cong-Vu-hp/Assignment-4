#include <stdio.h>
#include <stdlib.h>
int Tong_cac_so_tu_nhien(int n) {
    int Tong = n*(n+1)/2;
    return Tong;
}
int Tong_cac_so_chan(int n) {
    int Tong = (n/2)*(n/2+1);
    return Tong;
}
int Tong_cac_so_le(int n) {
    int Tong = Tong_cac_so_tu_nhien(n) - Tong_cac_so_chan(n);
    return Tong;
}
int main () {
    int a;
    printf("Nhap mot so nguyen: \n");
    scanf("%d", &a);
    int Tong_cac_so_chan = (a/2)*(a/2 +1);
    int Trung_binh_cong_tong_cac_so_chan = Tong_cac_so_chan/2; 
    

    printf("Tong cac so chan la %d \n", Tong_cac_so_chan);
    printf("Trung binh cong cac so chan la %d", Trung_binh_cong_tong_cac_so_chan);
    return 0;
}
