#include <stdio.h>

// Faktorial itu perkalian dari n sampai 1
// Contoh: 5! = 5 x 4 x 3 x 2 x 1 = 120
// Pake rekursif: 5! = 5 x 4! --> 4! = 4 x 3! --> dst sampai 1! = 1
int faktorial(int n) {
    // kalau n = 0 atau 1, langsung return 1 (ini base case-nya)
    if (n == 0 || n == 1) {
        return 1;
    }
    // kalau belum sampe base case, panggil diri sendiri dengan n-1
    return n * faktorial(n - 1);
}

// Fibonacci itu deret angka dimana setiap angka = jumlah 2 angka sebelumnya
// Contoh: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
// fib(0) = 0, fib(1) = 1
// fib(5) = fib(4) + fib(3) --> terus pecah sampe ketemu base case
int fibonacci(int n) {
    // base case: fib(0) = 0 dan fib(1) = 1
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    // rekursif: fib(n) = fib(n-1) + fib(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 8;
    printf("Hasil: %d! = %d\n\n", n, faktorial(n));
    
    printf("Deret: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...\n\n");
    
    int fib_ke = 10;
    printf("Hasil: fibonacci ke-%d = %d\n\n", fib_ke, fibonacci(fib_ke));
    
    printf("Deret fibonacci dari 0 sampai ke-%d:\n", fib_ke);
    for (int i = 0; i <= fib_ke; i++) {
        printf("fib(%d) = %d\n", i, fibonacci(i));
    }
    
    return 0;
}
