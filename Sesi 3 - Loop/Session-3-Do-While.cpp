#include <stdio.h>

int main() {
    
    // Contoh 1: Menu sederhana yang akan looping minimal sekali,
    // dan akan dilanjutkan terus selama user belum memilih option 3
    int pilihan;
    do {
        printf("\n=== Simple Menu ===\n");
        printf("1. Tambah\n");
        printf("2. Lihat\n");
        printf("3. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &pilihan);
        
        if (pilihan == 1) printf("Menambah data...\n");
        else if (pilihan == 2) printf("Menampilkan data...\n");
        
    } while (pilihan != 3);
    printf("Keluar program.\n\n");
    
    
    // Contoh 2: Validasi input, meminta input dengan range 1-10
    // Input selain 1-10 dianggap tidak valid dan looping akan diulang terus
    int angka;
    do {
        printf("Masukkan angka 1-10: ");
        scanf("%d", &angka);
        if (angka < 1 || angka > 10) {
            printf("Salah! Coba lagi.\n");
        }
    } while (angka < 1 || angka > 10);
    printf("Benar! Anda input: %d\n\n", angka);
    
    
    // Contoh 3: Cek password (percobaan max 3x)
    // Validasi password dari user dengan maksimal percobaan 3x
    // Jika password yang di input benar, maka looping akan dihentikan walaupun belum sampai 3x percobaan
    // else looping akan berjalan sampai 3x percobaan
    int password, percobaan = 0;
    int benar = 1234;
    do {
        percobaan++;
        printf("Percobaan %d - PIN: ", percobaan);
        scanf("%d", &password);
        if(password == benar){
        	break;
		}
    } while (percobaan < 3);
    
    if (password == benar) printf("Akses diterima!\n");
    else printf("Akses ditolak!\n");
    
    return 0;
}
