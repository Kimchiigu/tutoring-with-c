/* ==============================
Introduction to C Programming   =
   ==============================
*/

#include <stdio.h> // Library untuk input/output (printf, scanf, puts, fgets, dll)

int main() {
    
    /*
    Karakteristik C:
    1. Compiled language (dikompilasi ke machine code)
    2. Case-sensitive (huruf besar ? huruf kecil)
    3. Menggunakan semicolon (;) sebagai terminator
    4. Menggunakan curly braces {} untuk blok kode
    
    Struktur Program C:
    1. Preprocessor Directives (#include, #define)
    2. Global Declarations
    3. Function main()
    4. Local Declarations
    5. Statements
    6. Return Statement
    */
    
    printf("--- Introduction to C Programming ---\n\n");
    
    
    /*
    ASCII (American Standard Code for Information Interchange)
    
    Semua karakter yang kita ketik direpresentasikan sebagai angka oleh komputer,
    ASCII adalah standar pengkodean karakter untuk hal itu, dimana:
    - Setiap karakter memiliki nilai numerik (0-127)
    - Digunakan untuk merepresentasikan huruf, angka, dan simbol
    
    Rentang ASCII:
    - 0-31    : Karakter kontrol (tidak tercetak)
    - 32-47   : Simbol (!@#$%, dll)
    - 48-57   : Angka 0-9
    - 65-90   : Huruf besar A-Z
    - 97-122  : Huruf kecil a-z
    - 127     : DEL (delete)
    
    Boleh di search di internet "ASCII Table"
    */
    
    printf("--- ASCII Values ---\n\n");
    
    // Value ASCII dari karakter
    char huruf = 'A';
    printf("Karakter: %c\n", huruf);
    printf("Nilai ASCII: %d\n", huruf);
    printf("Hexadecimal: %X\n\n", huruf);
    
    // Karakter dari nilai ASCII
    int ascii = 66;
    printf("Nilai ASCII: %d\n", ascii);
    printf("Karakter: %c\n\n", (char)ascii);
    
    /*
    ====================
    Escape Sequences   =
    ====================
    
    Escape sequences dimulai dengan backslash (\) untuk karakter khusus
    yang tidak bisa ditampilkan langsung.
    */
    
    printf("--- Escape Sequences ---\n\n");
    
    // \n - Newline (pindah baris / baris baru)
    printf("Baris 1\\n - Newline:\n");
    printf("Baris pertama\nBaris kedua\nBaris ketiga\n\n");
    
    // \t - Tab horizontal
    printf("\\t - Tab horizontal:\n");
    printf("Nama\tUmur\tKota\n");
    printf("Andi\t20\tJakarta\n");
    printf("Budi\t22\tBandung\n\n");
    
    // \\ - Backslash
    printf("\\\\ - Backslash:\n");
    printf("Path: C:\\Users\\Documents\\file.txt\n\n");
    
    // \" - Double quote
    printf("\\\" - Double quote:\n");
    printf("Dia berkata: \"Halo, apa kabar?\"\n\n");
    
    // \' - Single quote
    printf("\\' - Single quote:\n");
    printf("Karakter: \'A\', \'B\', \'C\'\n\n");
    
    // \b - Backspace
    printf("\\b - Backspace:\n");
    printf("Hello\b!\n\n");  // 'o' akan terhapus
    
    // \r - Carriage return (kembali ke awal baris)
    printf("\\r - Carriage return:\n");
    printf("12345\rAB\n\n");  // AB akan menimpa 12
    
    // \a - Alert (bell/beep sound)
    printf("\\a - Alert beep: ");
    printf("\a");  // Akan berbunyi beep (jika disupport sistem)
    printf("(beep sound)\n\n");
    
    // \0 - Null character (akhir string)
    printf("\\0 - Null character:\n");
    printf("Hello\0World\n");  // World tidak akan tercetak
    printf("(World tidak tercetak karena \\0)\n\n");
    
    /*
    ===============================
    Output Formatting - printf()  =
    ===============================
    
    printf() digunakan untuk menampilkan output ke layar
    Format: printf("format string", variable1, variable2, ...);
    */
    
    printf("--- Output Formatting - (printf) ---\n\n");
    
    // Format specifiers dasar
    printf("Format Specifiers Dasar:\n");
    int integer = 42;
    float floatNum = 3.14159;
    double doubleNum = 2.71828;
    char karakter = 'X';
    char string[] = "Hello";
    
    printf("%%d atau %%i (integer): %d\n", integer);
    printf("%%f (float): %f\n", floatNum);
    printf("%%lf (double): %lf\n", doubleNum);
    printf("%%c (char): %c\n", karakter);
    printf("%%s (string): %s\n\n", string);
    
    // Precision control untuk float (jumlah angka dibelakang koma)
    printf("Kontrol Presisi Desimal:\n");
    float pi = 3.14159265359;
    printf("Default: %f\n", pi);
    printf("%%.2f (2 desimal): %.2f\n", pi);
    printf("%%.4f (4 desimal): %.4f\n", pi);
    printf("%%.10f (10 desimal): %.10f\n\n", pi);
    
    // Width specification
    printf("Spesifikasi Lebar (Width):\n");
    int num1 = 5;
    int num2 = 123;
    int num3 = 45678;
    printf("%%5d: |%5d|\n", num1);     // Lebar 5, rata kanan
    printf("%%5d: |%5d|\n", num2);
    printf("%%5d: |%5d|\n\n", num3);
    
    // Left-aligned dengan minus (-)
    printf("Rata Kiri (Left-aligned):\n");
    printf("%%-5d: |%-5d|\n", num1);   // Lebar 5, rata kiri
    printf("%%-5d: |%-5d|\n", num2);
    printf("%%-5d: |%-5d|\n\n", num3);
    
    // Zero-padding
    printf("Padding dengan Zero:\n");
    printf("%%05d: %05d\n", num1);     // Isi dengan 0
    printf("%%05d: %05d\n", num2);
    printf("%%05d: %05d\n\n", num3);
    
    // Kombinasi width dan precision
    printf("Kombinasi Width dengan Precision:\n");
    float score = 123.456789;
    printf("%%10.2f: |%10.2f|\n", score);   // Lebar 10, 2 desimal
    printf("%%10.4f: |%10.4f|\n", score);   // Lebar 10, 4 desimal
    printf("%%-10.2f: |%-10.2f|\n\n", score); // Rata kiri, 2 desimal
    
    // Contoh tabel dengan formatting
    printf("Contoh Tabel dengan Formatting:\n");
    printf("+-----------+---------+-----------+\n");
    printf("| %-9s | %-7s | %-9s |\n", "Nama", "Umur", "Nilai");
    printf("+-----------+---------+-----------+\n");
    printf("| %-9s | %7d | %9.2f |\n", "Andi", 20, 85.5);
    printf("| %-9s | %7d | %9.2f |\n", "Budi", 22, 90.75);
    printf("| %-9s | %7d | %9.2f |\n", "Citra", 21, 88.25);
    printf("+-----------+---------+-----------+\n\n");
    
    
    /*
    ========================================
    Input Formatting - scanf()   =
    ========================================
    
    scanf() digunakan untuk membaca input dari keyboard kita
    Format: scanf("format", &nama variable);
    Note: Gunakan & (address-of operator) untuk variabel
    */
    
    printf("--- Input - (scanf) ---\n\n");
    
    printf("Contoh Penggunaan scanf():\n");
    
    // Simulasi input integer
    printf("Input integer:\n");
    int angkaInput;
    scanf("%d", &angkaInput);
    printf("Contoh input: %d\n\n", angkaInput);
    
    // Simulasi input float
    printf("Input float:\n");
    float nilaiInput;
    scanf("%f", &nilaiInput);
    printf("Contoh input: %.1f\n\n", nilaiInput);
    
    // Simulasi input char
    printf("Input char:\n");
    char charInput;
    scanf("%c", &charInput);
    printf("Contoh input: %c\n\n", charInput);
    
    // Contoh multiple input
    printf("Multiple Input:\n");
    int a;
    float b;
    char c;
    scanf("%d %f %c", &a, &b, &c);
    printf("Contoh input: %d %.2f %c\n\n", a, b, c);    
    
    /*
    ================================
    Input/Output Alternative       =
    ================================
    */
    
    printf("--- Alternative Input / Output Functions ---\n\n");
    
    // getchar() dan putchar()
    printf("getchar() dan putchar():\n");
    printf("- getchar(): baca 1 karakter dari input\n");
    printf("- putchar(c): tampilkan 1 karakter\n");
    printf("Contoh: ");
    putchar('H');
    putchar('i');
    putchar('!');
    printf("\n\n");
    
    // gets() dan puts()
    printf("gets() dan puts():\n");
    printf("- gets(): Tidak aman dari buffer overflow karena akan menerima input terus melebihi ukuran\n");
    printf("- Gunakan fgets() sebagai gantinya\n");
    printf("- puts(str): tampilkan string + newline\n");
    
    // fgets(), agar aman dari buffer overflow
    printf("fgets() - Cara aman baca string:\n");
    printf("fgets(str, size, stdin);\n");
    printf("- Membaca hingga size-1 karakter\n");

    
    return 0;
}
