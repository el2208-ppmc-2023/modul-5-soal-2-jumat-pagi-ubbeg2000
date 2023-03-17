/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 
 *   Hari dan Tanggal    :
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>

void pemenang(int n, int k, int cnt, int index){
    if(cnt == 1) {
        printf("Pemenang Adalah Kursi Nomor %d", index + 1);
    }
    else {
        index = ((index+k) % n);
        cnt -= 1;
        n -= 1;
        pemenang(n , k, cnt, index);
    }
}

int main()
{
    // Declare Variables
    int n, k, cnt, index;
    printf("Masukkan Jumlah Kursi : ");
    scanf("%d", &n);
    printf("Masukkan Nomor Ketidakberuntungan : ");
    scanf("%d", &k);

    // Print Pemenang
    cnt = n;
    index = 0;
    pemenang(n,k - 1,cnt,index);
    return 0;
}
