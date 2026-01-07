/*
==============================
Repetition in C Programming  =
==============================
*/

#include <stdio.h>

int main() {
    
    /*
    =====================
    What is Looping?    =
    =====================
    
    Apa itu Looping?
    - Looping adalah struktur kontrol yang mengulang blok kode
    - Digunakan ketika kita perlu melakukan tugas yang sama berulang kali
    - Membuat kode lebih efisien dan ringkas
    
    Tipe-tipe Loop di C:
    1. for loop - ketika kita tahu berapa kali akan mengulang
    2. while loop - ketika kondisi perulangan tidak pasti
    3. do-while loop - minimal dijalankan 1 kali
    4. nested loop - loop di dalam loop
    */
    
    /*
    ===========
    For Loop  =
    ===========
    
    Syntax:
    for (inisialisasi; kondisi; increment/decrement) {
        // kode yang diulang
    }
    
    Cara kerja:
    1. Inisialisasi: dijalankan sekali di awal
    2. Kondisi: dicek sebelum setiap iterasi
    3. Increment/Decrement: dijalankan setelah setiap iterasi
    */
    
    printf("--- For Loop ---\n\n");
    
    // Contoh 1: Menghitung dari 1 sampai 5
    printf("Contoh 1: Menghitung 1 sampai 5\n");
    for (int i = 1; i <= 5; i++) {
        printf("Iterasi ke-%d\n", i);
    }
    printf("\n");
    
    // Contoh 2: Menghitung mundur
    printf("Contoh 2: Countdown dari 5 sampai 1\n");
    for (int i = 5; i >= 1; i--) {
        printf("%d... ", i);
    }
    printf("Start!\n\n");
    
    // Contoh 3: Loncat 2 angka (increment 2)
    printf("Contoh 3: Bilangan genap 2 sampai 10\n");
    for (int i = 2; i <= 10; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Contoh 4: Tabel perkalian
    printf("Contoh 4: Tabel Perkalian 5\n");
    int angka = 5;
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", angka, i, angka * i);
    }
    printf("\n");
    
    // Contoh 5: Menghitung jumlah angka 1-10
    printf("Contoh 5: Penjumlahan 1 + 2 + 3 + ... + 10\n");
    int jumlah = 0;
    for (int i = 1; i <= 10; i++) {
        jumlah += i;  // jumlah = jumlah + i
        printf("i=%d, jumlah=%d\n", i, jumlah);
    }
    printf("Total: %d\n\n", jumlah);
    
    
    /*
    =============
    While Loop  =
    =============
    
    Syntax:
    while (kondisi) {
        // kode yang diulang
    }
    
    Cara kerja:
    - Kondisi dicek SEBELUM menjalankan code
    - Jika kondisi false, loop tidak akan dijalankan sama sekali
    - Cocok ketika jumlah iterasi tidak diketahui
    */
    
    printf("--- While Loop ---\n\n");
    
    // Contoh 1: Menghitung 1 sampai 5
    printf("Contoh 1: Menghitung 1 sampai 5 dengan while\n");
    int counter = 1;
    while (counter <= 5) {
        printf("Counter: %d\n", counter);
        counter++;  // PENTING: jangan lupa increment!
    }
    printf("\n");
    
    // Contoh 2: Menghitung sampai angka tertentu
    printf("Contoh 2: Hitung mundur dari 10 sampai 0\n");
    int hitung = 10;
    while (hitung >= 0) {
        printf("%d ", hitung);
        hitung--;
    }
    printf("\n\n");
    
    // Contoh 3: Mencari pangkat 2 yang kurang dari 1000
    printf("Contoh 3: Pangkat 2 yang kurang dari 1000\n");
    int pangkat = 1;
    int eksponen = 0;
    while (pangkat < 1000) {
        printf("2^%d = %d\n", eksponen, pangkat);
        pangkat *= 2;  // pangkat = pangkat * 2
        eksponen++;
    }
    printf("\n");
    
    // Contoh 4: Validasi input (simulasi)
    // Bisa digunakan jika kalian ingin terus meminta input hingga user memberikan input yang valid
    printf("Contoh 4: Simulasi validasi angka 1-10\n");
    int input = 15;  // Anggap user input 15 (salah)
    int percobaan = 0;
    while (input < 1 || input > 10) {
        percobaan++;
        printf("Percobaan %d: Input %d tidak valid\n", percobaan, input);
        input -= 2;  // Simulasi input baru (dikurangi 2)
    }
    printf("Input valid: %d (setelah %d percobaan)\n\n", input, percobaan);
    
    
    /*
    ================
    Do-While Loop  =
    ================
    
    Syntax:
    do {
        // kode yang diulang
    } while (kondisi);
    
    Cara kerja:
    - Kode dijalankan DULU, baru cek kondisi
    - Minimal dijalankan 1 kali (berbeda dengan while)
    - Cocok untuk menu atau input yang harus dijalankan minimal sekali
    
    Contoh penggunaan do-while loop ada di file Session-3-Do-While
    */
    
    printf("--- Do While Loop ---\n\n");
    
    //Perbedaan dengan do-while dengan while loop
    printf("Contoh 1: Perbedaan do-while vs while\n");
    int x = 10;
    
    printf("While loop (x=10, kondisi x<5):\n");
    while (x < 5) {
        printf("Ini tidak akan tercetak\n");
        x++;
    }
    // While loop mengecek kondisi di AWAL
    printf("Loop tidak akan dijalankan karena kondisi false\n\n");
    
    printf("Do-While loop (x=10, kondisi x<5):\n");
    x = 10;
    do {
        printf("Ini tercetak 1 kali meskipun kondisi false\n");
        x++;
    } while (x < 5);
    // Do-While loop mengecek kondisi di AKHIR
    printf("Loop akan dijalankan minimal 1 kali\n\n");


    /*
    ================
    When to use?   =
    ================
    
    For Loop:
    ? Gunakan ketika tahu jumlah iterasi
    ? Contoh: loop array, hitung 1-100
    
    While Loop:
    ? Gunakan ketika kondisi tidak pasti
    ? Contoh: baca file sampai selesai, cari nilai tertentu
    
    Do-While Loop:
    ? Gunakan ketika minimal harus 1x dijalankan
    ? Contoh: menu program, validasi input
    
    Tips Menghindari Infinite Loop:  
    1. Pastikan kondisi loop bergerak ke arah dimana dia akan menjadi false
    2. Jangan lupa increment/decrement counter
    
    Contoh Infinite Loop:
    
    int i = 1;
    while (i <= 10) {
        printf("%d", i);
        // LUPA i++; <- loop tidak akan berhenti!
    }
    
    ====================================================
    */
    
    return 0;
}

