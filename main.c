/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 
 *   Hari dan Tanggal    :
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>
#include <stdlib.h>

int pemenang(int n, int k){
    if(n==2){
        return (k%2+1);
    }
    else{
        return("%d\n",((pemenang(n-1,k)+k)%n));
    }
}

int main()
{
    // Declare Variables
    int n, k;
    printf("Masukkan Jumlah Kursi : ");
    scanf("%d", &n);
    printf("Masukkan Nomor Ketidakberuntungan : ");
    scanf("%d", &k);

    // Print Pemenang
    printf("Pemenang Adalah Kursi Nomor %d", pemenang(n,k));
    return 0;
}
