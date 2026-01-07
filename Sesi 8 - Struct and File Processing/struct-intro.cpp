#include <stdio.h>
#include <string.h>

// ini adalah cara paling benar buat struct di C
// kalau ketemu varian lain seperti langsung tulis "struct Mahasiswa", itu bisa juga
// !!dengan syarat extension file kalian adalah .cpp karena hanya di c++ terdukung
// kalau extension file kalian adalah .c, maka dibawah ini cara benarnya yang ga eror
typedef struct {
    char nama[50];
    int umur;
    float gpa;
} Mahasiswa;

int main() {
    // deklarasi variabel struct
    // nama dari si structnya ini bebas
    // <tipe data> <nama objek>
    Mahasiswa mhs1;

    // akses atribut struct pakai dot (.)
    strcpy(mhs1.nama, "Budi Santoso");
    mhs1.umur = 20;
    mhs1.gpa = 3.75;

    printf("Nama: %s, GPA: %.2f\n", mhs1.nama, mhs1.gpa);

    return 0;
}