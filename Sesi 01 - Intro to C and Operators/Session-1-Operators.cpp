// ============================================
// Introduction to C Programming & Operators  =
// ============================================

#include <stdio.h>  // Library untuk input/output (printf, scanf, puts, fgets, dll)

int main() {
        
    /*
    ===========================
    Variable and Data Types   =
    ===========================
    */
    
    printf("--- Tipe Data Dasar ---\n");
    
    // Tipe data integer (bilangan bulat)
    int umur = 20;
    int jumlahSiswa = 30;
    
    // Tipe data float (bilangan desimal presisi rendah)
    float nilaiUjian = 85.5;
    float tinggi = 170.5;
    
    // Tipe data double (bilangan desimal presisi tinggi)
    double pi = 3.14159265359;
    double gravitasi = 9.81;
    
    // Tipe data char (karakter tunggal)
    char grade = 'A';
    char inisial = 'J';
    
    // Menampilkan variabel
    printf("Umur: %d tahun\n", umur);                    // %d untuk integer
    printf("Nilai Ujian: %.1f\n", nilaiUjian);          // %.1f untuk float (1 desimal)
    printf("Pi: %.10lf\n", pi);                          // %.10lf untuk double (10 desimal)
    printf("Grade: %c\n\n", grade);                      // %c untuk char
    
    
    /*
    ===========================
    Arithmetic Operators      =
    ===========================
    Operator untuk operasi matematika dasar
    */
    
    printf("--- Arithmetic Operators ---\n");
    
    int a = 10;
    int b = 3;
    
    // Penjumlahan (+)
    int penjumlahan = a + b;
    printf("%d + %d = %d\n", a, b, penjumlahan);
    
    // Pengurangan (-)
    int pengurangan = a - b;
    printf("%d - %d = %d\n", a, b, pengurangan);
    
    // Perkalian (*)
    int perkalian = a * b;
    printf("%d * %d = %d\n", a, b, perkalian);
    
    // Pembagian (/)
    // Note: pembagian integer menghasilkan integer (tanpa desimal)
    int pembagian = a / b;
    printf("%d / %d = %d (pembagian integer)\n", a, b, pembagian);
    
    // Untuk mendapat hasil desimal, gunakan float atau double
    float pembagianFloat = (float)a / b;  // (float) = type casting
    printf("%d / %d = %.2f (pembagian float)\n", a, b, pembagianFloat);
    
    // Modulus (%) - sisa hasil bagi
    int modulus = a % b;
    printf("%d %% %d = %d (sisa bagi)\n\n", a, b, modulus);
    
    
    /*
    ========================
    Assignment Operators   =
    ========================
    Operator untuk memberikan nilai ke variabel
    */
    
    printf("--- Assignment Operators ---\n");
    
    int angka = 10;  // = (assignment sederhana)
    printf("Nilai awal: %d\n", angka);
    
    angka += 5;  // Sama dengan: angka = angka + 5
    printf("Setelah += 5: %d\n", angka);
    
    angka -= 3;  // Sama dengan: angka = angka - 3
    printf("Setelah -= 3: %d\n", angka);
    
    angka *= 2;  // Sama dengan: angka = angka * 2
    printf("Setelah *= 2: %d\n", angka);
    
    angka /= 4;  // Sama dengan: angka = angka / 4
    printf("Setelah /= 4: %d\n", angka);
    
    angka %= 5;  // Sama dengan: angka = angka % 5
    printf("Setelah %%= 5: %d\n\n", angka);
    
    
    /*
    ===========================
    Increment dan Decrement   =
    ===========================
    */
    
    printf("--- Increment and Decrement ---\n");
    
    int counter = 5;
    printf("Nilai awal counter: %d\n", counter);
    
    // Post-increment (digunakan dulu, baru ditambah)
    printf("Post-increment (counter++): %d\n", counter++);
    printf("Nilai setelahnya: %d\n", counter);
    
    // Pre-increment (ditambah dulu, baru digunakan)
    printf("Pre-increment (++counter): %d\n", ++counter);
    
    // Post-decrement (digunakan dulu, baru dikurang)
    printf("Post-decrement (counter--): %d\n", counter--);
    printf("Nilai setelahnya: %d\n", counter);
    
    // Pre-decrement (dikurang dulu, baru digunakan)
    printf("Pre-decrement (--counter): %d\n\n", --counter);
    
    
    /*
    =======================
    Relational Operators  =
    =======================
    Operator untuk membandingkan dua nilai
    Output-nya: 1 (true/benar) atau 0 (false/salah)
    */
    
    printf("--- Relational Operators ---\n");
    
    int x = 10;
    int y = 20;
    
    printf("x = %d, y = %d\n", x, y);
    
    // Sama dengan (==)
    printf("x == y: %d (apakah x sama dengan y?)\n", x == y);
    
    // Tidak sama dengan (!=)
    printf("x != y: %d (apakah x tidak sama dengan y?)\n", x != y);
    
    // Lebih besar (>)
    printf("x > y: %d (apakah x lebih besar dari y?)\n", x > y);
    
    // Lebih kecil (<)
    printf("x < y: %d (apakah x lebih kecil dari y?)\n", x < y);
    
    // Lebih besar atau sama dengan (>=)
    printf("x >= y: %d (apakah x lebih besar atau sama dengan y?)\n", x >= y);
    
    // Lebih kecil atau sama dengan (<=)
    printf("x <= y: %d (apakah x lebih kecil atau sama dengan y?)\n\n", x <= y);
    
    
    /*
    ====================
    Logical Operators  =
    ====================
    Operator untuk operasi logika boolean
    Bisa di search di internet "Logical Operators Table"
    */
    
    printf("--- Logical Operators ---\n");
    
    int nilai1 = 1;  // true
    int nilai2 = 0;  // false
    
    // Logical AND (&&) - benar jika KEDUA operand benar
    printf("1 && 1 = %d (keduanya benar)\n", 1 && 1);
    printf("1 && 0 = %d (salah satu salah)\n", 1 && 0);
    printf("0 && 0 = %d (keduanya salah)\n", 0 && 0);
    
    // Logical OR (||) - benar jika SALAH SATU operand benar
    printf("1 || 1 = %d (keduanya benar)\n", 1 || 1);
    printf("1 || 0 = %d (salah satu benar)\n", 1 || 0);
    printf("0 || 0 = %d (keduanya salah)\n", 0 || 0);
    
    // Logical NOT (!) - membalik nilai boolean
    printf("!1 = %d (not true = false)\n", !1);
    printf("!0 = %d (not false = true)\n\n", !0);
    
    
    // Contoh : Kalkulator Sederhana
    
    printf("--- Mini Kalkulator ---\n");
    
    float bil1 = 15.5;
    float bil2 = 4.2;
    
    // Kita gunakan %.2f jika kita ingin 2 angka di belakang koma, khusus float/double
    printf("Bilangan 1: %.2f\n", bil1);
    printf("Bilangan 2: %.2f\n", bil2);
    printf("Penjumlahan: %.2f + %.2f = %.2f\n", bil1, bil2, bil1 + bil2);
    printf("Pengurangan: %.2f - %.2f = %.2f\n", bil1, bil2, bil1 - bil2);
    printf("Perkalian: %.2f * %.2f = %.2f\n", bil1, bil2, bil1 * bil2);
    printf("Pembagian: %.2f / %.2f = %.2f\n", bil1, bil2, bil1 / bil2);
    printf("\n");
    
    
    // Contoh : Menghitung Nilai Akhir Berdasarkan Kontribusi Nilai Tugas, UTS, dan UAS
    
    printf("--- Menghitung Nilai Akhir Mata Kuliah ---\n");
    
    float nilaiTugas = 80.0;
    float nilaiUTS = 75.0;
    float nilaiUAS = 85.0;
    
    // Bobot: Tugas 30%, UTS 30%, UAS 40%
    float nilaiAkhir = (nilaiTugas * 0.3) + (nilaiUTS * 0.3) + (nilaiUAS * 0.4);
    
    printf("Nilai Tugas: %.1f (bobot 30%%)\n", nilaiTugas);
    printf("Nilai UTS: %.1f (bobot 30%%)\n", nilaiUTS);
    printf("Nilai UAS: %.1f (bobot 40%%)\n", nilaiUAS);
    printf("Nilai Akhir: %.2f\n", nilaiAkhir);
    printf("Lulus? %d (1=Ya, 0=Tidak)\n\n", nilaiAkhir >= 60);
    
    
    // Contoh : Konversi suhu dari celcius ke fahrenheit dan kelvin
    
    printf("Konversi Suhu Celcius -> Fahrenheit dan Celcius -> Kelvin\n");
    
    float celsius = 25.0;
    float fahrenheit = (celsius * 9.0/5.0) + 32.0;
    float kelvin = celsius + 273.15;
    
    printf("Suhu: %.1f C\n", celsius);
    printf("Fahrenheit: %.1f F\n", fahrenheit);
    printf("Kelvin: %.2f K\n\n", kelvin);
    
    
    /*
    ============================================================================
    
    1. Selalu pakai semicolon (;) di akhir sebuah statement
    2. Pakai nama variabel yang deskriptif (contoh: nilaiUjian bukan x)
    3. Perhatikan tipe data - pakai float/double untuk desimal
    4. Hati-hati kalau membagi dengan integer (10/3 = 3, bukan 3.333)
    5. Pakai komentar untuk menjelaskan kode kalian
    6. Format specifier:
       %d atau %i = integer
       %f = float/double
       %c = char
       %s = string
       %lf = double (dalam scanf)
    
    ============================================================================
    */
    
    
    return 0;  // Menandakan program berakhir dengan sukses
}
