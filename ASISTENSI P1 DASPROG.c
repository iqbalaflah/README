#include <stdio.h>

int main() {
    char nama_barang1[50], nama_barang2[50];
    float harga_barang1, harga_barang2, total;

    // Input untuk barang pertama
    printf("Masukkan nama barang pertama: ");
    scanf("%s", nama_barang1);
    printf("Masukkan harga untuk %s: Rp ", nama_barang1);
    scanf("%f", &harga_barang1);

    // Input untuk barang kedua
    printf("Masukkan nama barang kedua: ");
    scanf("%s", nama_barang2);
    printf("Masukkan harga untuk %s: Rp ", nama_barang2);
    scanf("%f", &harga_barang2);

    // Menghitung total
    total = harga_barang1 + harga_barang2;

    // Tampilkan struk belanja
    printf("\n--- Struk Belanja ---\n");
    printf("%-20s Rp%.2f\n", nama_barang1, harga_barang1);
    printf("%-20s Rp%.2f\n", nama_barang2, harga_barang2);
    printf("\nTotal Belanja: Rp%.2f\n", total);

    return 0;
}
