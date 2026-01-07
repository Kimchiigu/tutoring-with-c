#include <stdio.h>
#include <string.h>

typedef struct {
    char nama[50];
    long long harga;
    int stok;
} Barang;

int main() {
    Barang daftarBarang[2];
    long long totalAset;
    long long grandTotal = 0;
    int i;

    for (i = 0; i < 2; i++) {
        printf("Data Barang ke-%d:\n", i + 1);
        
        printf("Nama Barang: ");
        scanf(" %[^\n]", daftarBarang[i].nama); 
        
        printf("Harga: Rp ");
        scanf("%lld", &daftarBarang[i].harga);
        
        printf("Stok: ");
        scanf("%d", &daftarBarang[i].stok);
    }

    printf("\n\n=== Laporan Aset ===\n");
    printf("%-20s | %-15s | %-5s | %-15s\n", "Nama Barang", "Harga", "Stok", "Total Aset");
    printf("------------------------------------------------------------------\n");

    for (i = 0; i < 2; i++) {
        totalAset = daftarBarang[i].harga * daftarBarang[i].stok;
        grandTotal += totalAset;

        // menampilkan data
        // %-20s artinya rata kiri (left align) selebar 20 karakter
        printf("%-20s | Rp %-12lld | %-5d | Rp %-12lld\n", 
               daftarBarang[i].nama, 
               daftarBarang[i].harga, 
               daftarBarang[i].stok, 
               totalAset);
    }
    
    printf("------------------------------------------------------------------\n");
    printf("Total Aset Keseluruhan: Rp %lld\n", grandTotal);

    return 0;
}