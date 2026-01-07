#include <stdio.h>
#include <string.h> // Diperlukan untuk strcmp pada contoh Nested If

int main() {
    // =================================================
    // A. Statement 'if'
    // =================================================
    // Statement 'if' digunakan untuk menjalankan sebuah blok kode
    // HANYA jika kondisi yang diberikan bernilai benar (true).
    // Contoh Kasus: Memeriksa apakah sebuah angka bernilai positif.
    printf("=================================================\n");
    printf("A. Statement 'if'\n");
    printf("=================================================\n");
    int angka_a = 10;
    if (angka_a > 0) {
        // Kode di dalam blok ini akan dieksekusi karena 10 > 0 adalah true.
        printf("Angka %d adalah Angka Positif\n\n", angka_a);
    }


    // =================================================
    // B. Statement 'if-else'
    // =================================================
    // 'if-else' memberikan pilihan: jika kondisi true, jalankan blok 'if'.
    // Jika false, jalankan blok 'else'.
    // Contoh Kasus: Memeriksa apakah sebuah angka ganjil atau genap.
    printf("=================================================\n");
    printf("B. Statement 'if-else'\n");
    printf("=================================================\n");
    int angka_b = 11;
    // Operator modulo (%) memberikan sisa bagi.
    // Jika sisa bagi dengan 2 adalah 0, maka angka tersebut genap.
    if (angka_b % 2 == 0) {
        printf("Angka %d adalah Angka Genap\n\n", angka_b);
    } else {
        // Jika sisa bagi tidak 0, maka ganjil. Blok ini yang akan dieksekusi.
        printf("Angka %d adalah Angka Ganjil\n\n", angka_b);
    }


    // =================================================
    // C. Statement 'if-else-if'
    // =================================================
    // Digunakan untuk memeriksa beberapa kondisi secara berurutan.
    // Program akan berhenti di kondisi pertama yang bernilai true.
    // Blok 'else' di akhir bersifat opsional, dieksekusi jika tidak ada kondisi lain yang true.
    // Contoh Kasus: Memberi grade berdasarkan skor siswa.
    printf("=================================================\n");
    printf("C. Statement 'if-else-if'\n");
    printf("=================================================\n");
    int skor = 85;
    char grade;

    if (skor >= 90) {
        grade = 'A';
    } else if (skor >= 80) {
        // Kondisi ini (85 >= 80) true, maka grade akan menjadi 'B' dan pengecekan berhenti di sini.
        grade = 'B';
    } else if (skor >= 70) {
        grade = 'C';
    } else {
        grade = 'F';
    }
    printf("Siswa dengan skor %d mendapatkan grade: %c\n\n", skor, grade);


    // =================================================
    // D. Nested 'if' & Multiple Conditions
    // =================================================
    // Nested 'if' adalah statement 'if' di dalam statement 'if' lainnya.
    // Ini berguna untuk memeriksa kondisi yang lebih spesifik setelah kondisi utama terpenuhi.
    // Hal ini seringkali bisa disederhanakan dengan operator logika AND (&&).
    // Contoh Kasus: Memberikan diskon 25%% untuk orang berumur > 70 & hanya di hari Senin.
    printf("=================================================\n");
    printf("D. Nested 'if' & Multiple Conditions\n");
    printf("=================================================\n");
    int umur = 75;
    char hari[] = "Senin";

    // Cara 1: Menggunakan Nested If
    printf("--- Menggunakan Nested If ---\n");
    if (umur > 70) {
        // Kondisi pertama (umur > 70) terpenuhi.
        // Program masuk untuk memeriksa kondisi kedua.
        if (strcmp(hari, "Senin") == 0) {
            // Kondisi kedua juga terpenuhi.
            printf("Anda berhak mendapatkan diskon 25%%!\n");
        } else {
            printf("Maaf, diskon hanya berlaku di hari Senin.\n");
        }
    } else {
        printf("Maaf, diskon hanya untuk yang berumur di atas 70 tahun.\n");
    }

    // Cara 2: Menggunakan Multiple Condition dengan '&&' (AND)
    // Kode akan dijalankan jika SEMUA kondisi terpenuhi.
    printf("\n--- Menggunakan Operator '&&' ---\n");
    if (umur > 70 && strcmp(hari, "Senin") == 0) {
        printf("Anda berhak mendapatkan diskon 25%%!\n\n");
    } else {
        printf("Anda tidak memenuhi syarat untuk diskon.\n\n");
    }

    // Contoh untuk Operator '||' (OR)
    // Kode akan dijalankan jika SALAH SATU kondisi saja terpenuhi.
    printf("--- Menggunakan Operator '||' ---\n");
    char status_member[] = "Premium";
    int total_belanja = 45000;
    if (strcmp(status_member, "Premium") == 0 || total_belanja > 50000) {
        printf("Anda dapat bonus poin!\n\n");
    } else {
        printf("Anda tidak dapat bonus poin.\n\n");
    }


    // =================================================
    // E. Statement 'switch-case'
    // =================================================
    // 'switch-case' adalah alternatif dari 'if-else-if' untuk memeriksa
    // kesamaan nilai dari sebuah variabel.
    // Di C, switch-case hanya bisa menerima tipe data integer dan char.
    // 'break' sangat penting untuk menghentikan eksekusi agar tidak "jatuh" ke case berikutnya.
    // 'default' akan dieksekusi jika tidak ada case yang cocok.
    // Contoh Kasus: Membuat menu voting pemimpin negara.
    printf("=================================================\n");
    printf("E. Statement 'switch-case'\n");
    printf("=================================================\n");
    int pilihan_vote = 2;
    printf("Anda memasukkan vote: %d\n", pilihan_vote);

    switch (pilihan_vote) {
        case 1:
            printf("Calon A terpilih!\n\n");
            break; // Keluar dari switch
        case 2:
            // Kode ini akan dieksekusi karena pilihan_vote adalah 2.
            printf("Calon B terpilih!\n\n");
            break; // Keluar dari switch
        case 3:
            printf("Calon C terpilih!\n\n");
            break; // Keluar dari switch
        default:
            printf("Pilihan tidak valid!\n\n");
            break;
    }


    // =================================================
    // F. Ternary Operator
    // =================================================
    // Ternary operator adalah cara singkat untuk menulis statement 'if-else'.
    // Formatnya: condition ? expression_if_true : expression_if_false;
    // Contoh Kasus: Menemukan angka terbesar di antara dua angka.
    printf("=================================================\n");
    printf("F. Ternary Operator\n");
    printf("=================================================\n");
    int x = 10, y = 20;
    int max;

    // Menggunakan if-else biasa
    if (x > y) {
        max = x;
    } else {
        max = y;
    }
    printf("Dengan if-else: Nilai terbesar adalah %d\n", max);

    // Menggunakan ternary operator
    // Jika x > y true, maka 'max_ternary' akan diisi dengan nilai x.
    // Jika false, akan diisi dengan nilai y.
    int max_ternary = (x > y) ? x : y;
    printf("Dengan ternary : Nilai terbesar adalah %d\n\n", max_ternary);
    

    // =================================================
    // G. Types of Error (Contoh dalam Komentar)
    // =================================================
    // Berikut adalah contoh error yang tidak bisa dijalankan,
    // sehingga ditulis di dalam komentar sebagai penjelasan.

    // -------------------------------------------------
    // 1. Syntax Error
    // -------------------------------------------------
    // Terjadi ketika kita melanggar aturan penulisan bahasa pemrograman.
    // Contoh: lupa titik koma (;) di akhir statement.
    //
    // printf("Hello, World!") // <- ERROR: Lupa titik koma di sini
    
    // -------------------------------------------------
    // 2. Logic Error
    // -------------------------------------------------
    // Program berjalan tanpa crash, tapi hasilnya tidak sesuai dengan yang diharapkan.
    // Contoh: salah menggunakan operator. Ingin membandingkan (==) tapi malah assignment (=).
    //
    // int nilai = 85;
    // // ERROR: Seharusnya menggunakan '==' untuk membandingkan.
    // // (nilai = 100) akan mengubah 'nilai' menjadi 100 dan kondisi ini dianggap TRUE.
    // if (nilai = 100) {
    //     printf("Keren bang\n"); // Baris ini akan SELALU dieksekusi.
    // } else {
    //     printf("Belajar dulu\n");
    // }

    // -------------------------------------------------
    // 3. Runtime Error
    // -------------------------------------------------
    // Error yang terjadi saat program sedang berjalan, biasanya menyebabkan program berhenti paksa (crash).
    // Contoh: pembagian dengan nol.
    //
    // int a = 10;
    // int b = 0;
    // int hasil = a / b; // ERROR: Program akan crash karena membagi dengan nol.
    // printf("Hasilnya adalah: %d\n", hasil);

    return 0;
}