#include <stdio.h>

typedef struct {
    char nama[50];
    char nim[20];
} Mahasiswa;

int main() {
    Mahasiswa mhs;
    FILE *fp = fopen("kampus.txt", "a"); // mode append agar data lama tidak hilang

    printf("Masukkan Nama: ");
    scanf("%[^\n]", mhs.nama); getchar(); // getchar untuk membuang newline
    printf("Masukkan NIM: ");
    scanf("%s", mhs.nim);

    // Simpan struct ke file
    fprintf(fp, "%s#%s\n", mhs.nama, mhs.nim); 
    // Menggunakan pemisah '#' agar mudah dibaca nanti

    fclose(fp);
    printf("Data berhasil disimpan ke kampus.txt!\n");
    return 0;
}