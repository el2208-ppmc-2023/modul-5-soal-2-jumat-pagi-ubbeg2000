/** EL2208 Praktikum Pemecahan Masalah dengan C 2022/2023
 *   Modul               : 
 *   Hari dan Tanggal    :
 *   Nama (NIM)          :
 *   Nama File           : main.c
 *   Deskripsi           :
 */

#include <stdio.h>

int solve(int n, int k) {
    if (n == 1) {
        return 1;
    } else {
        return (solve(n - 1, k) + k - 1) % n + 1;
    }
}

int main() {
    int n, k, result;
    printf("Masukkan Jumlah Kursi : ");
    scanf("%d", &n);
    printf("Masukkan Nomor Ketidakberuntungan : ");
    scanf("%d", &k);
    result = solve(n, k);
    printf("Pemenang Adalah Kursi Nomor %d", result);
    return 0;
}

