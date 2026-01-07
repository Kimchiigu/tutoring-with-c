#include <stdio.h>

// fungsi buat ngitung luas persegi panjang
int hitungLuas(int p, int l) {
    return p * l;
}

// cek bilangan genap apa ganjil
int cekGenap(int n) {
    if (n % 2 == 0) {
        return 1; // genap
    }
    return 0; // ganjil
}

// buat nampilin nilai maksimal dari 3 angka
int nilaiMax(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

// hitung faktorial pake loop biasa (nanti ada versi rekursif)
int faktorial(int n) {
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

// konversi celcius ke fahrenheit
float celciusToFahrenheit(float c) {
    return (c * 9.0 / 5.0) + 32;
}

// fungsi void buat nampilin tabel perkalian
void tabelPerkalian(int n) {
    printf("\nTabel perkalian %d:\n", n);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    int pil;
    
    printf("=== Basic Kalculator Menggunakan Function ===\n");
    printf("1. Hitung luas persegi panjang\n");
    printf("2. Cek genap/ganjil\n");
    printf("3. Cari nilai maksimal\n");
    printf("4. Hitung faktorial\n");
    printf("5. Konversi suhu\n");
    printf("6. Tabel perkalian\n");
    printf("Pilih menu (1-6): ");
    scanf("%d", &pil);
    
    switch(pil) {
        case 1: {
            int p, l;
            printf("Masukkan panjang: ");
            scanf("%d", &p);
            printf("Masukkan lebar: ");
            scanf("%d", &l);
            printf("Luas = %d\n", hitungLuas(p, l));
            break;
        }
        case 2: {
            int num;
            printf("Masukkan angka: ");
            scanf("%d", &num);
            if (cekGenap(num)) {
                printf("%d adalah bilangan genap\n", num);
            } else {
                printf("%d adalah bilangan ganjil\n", num);
            }
            break;
        }
        case 3: {
            int a, b, c;
            printf("Masukkan 3 angka: ");
            scanf("%d %d %d", &a, &b, &c);
            printf("Nilai maksimal: %d\n", nilaiMax(a, b, c));
            break;
        }
        case 4: {
            int n;
            printf("Masukkan nilai n: ");
            scanf("%d", &n);
            printf("%d! = %d\n", n, faktorial(n));
            break;
        }
        case 5: {
            float c;
            printf("Masukkan suhu (Celcius): ");
            scanf("%f", &c);
            printf("%.2f C = %.2f F\n", c, celciusToFahrenheit(c));
            break;
        }
        case 6: {
            int n;
            printf("Masukkan angka: ");
            scanf("%d", &n);
            tabelPerkalian(n);
            break;
        }
        default:
            printf("Pilihan tidak valid!\n");
    }
    
    return 0;
}
