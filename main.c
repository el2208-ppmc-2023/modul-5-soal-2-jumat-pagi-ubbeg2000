/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 
 *   Hari dan Tanggal    :
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void pemenang(int n, int k, int *p, int p_len, int index){
    if(n == 1) {
        printf("Pemenang Adalah Kursi Nomor %d", index + 1);
    }
    else {
        p[((index+k) % n)] = 1;
        pemenang(n - 1, k, p, p_len, ((index+k) % n));
    }
}

int main()
{
    // Declare Variables
    int n, k, *p, p_len, index;
    printf("Masukkan Jumlah Kursi : ");
    scanf("%d", &n);
    printf("Masukkan Nomor Ketidakberuntungan : ");
    scanf("%d", &k);
    p = (int*)calloc(n, sizeof(int));

    // Print Pemenang
    p_len = n;
    index = 0;
    pemenang(n,k-1,p,p_len,index);
    return 0;
}
