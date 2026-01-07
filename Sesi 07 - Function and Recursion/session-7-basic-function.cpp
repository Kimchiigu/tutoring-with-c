#include <stdio.h>

// 1. Fungsi tanpa return (void) - cuma print aja
void hello(char nama[]) {
    printf("Halo, %s!\n", nama);
}

// 2. Fungsi dengan return value (int) - ngasih nilai balik
int tambah(int a, int b) {
    return a + b;
}

// 3. Fungsi dengan berbagai return type
float bagi(int a, int b) {
    return (float)a / b;
}

// 4. Pass by value - nilai asli gak berubah
// variabel biasa (int, float, char) di-copy nilainya
// jadi perubahan di dalam fungsi gak ngaruh ke variabel asli
void cobaUbahNilai(int x) {
    x = 100;  // ini cuma ngubah copy-annya
    printf("Dalam fungsi: x = %d\n", x);
}

// Pass by value contoh lain
int kuadrat(int n) {
    n = n * n;  // ngubah copy
    return n;   // harus di-return baru kelihatan hasilnya
}

// 5. Passing array - array di-pass by REFERENCE (bisa diubah)
// array itu sebenernya pointer, jadi yang di-pass adalah alamat memory-nya
// makanya perubahan di dalam fungsi langsung ngaruh ke array asli
void ubahArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2;  // ini ngubah array aslinya, bukan copy
    }
}

// 6. Hitung jumlah elemen array
int hitungTotal(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

// 7. Passing 2D array - harus kasih tau kolom-nya
// 2D array juga pass by reference seperti 1D array
void printMatrix(int mat[][3], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

// 8. Ubah elemen 2D array
// perubahan langsung ngaruh ke matrix asli (pass by reference)
void kaliMatrix(int mat[][3], int rows, int pengali) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {
            mat[i][j] *= pengali;
        }
    }
}

int main() {
    // void function
    printf("1. Fungsi void (no return):\n\n");
    hello("Budi");
    
    // Tfunction with return value
    printf("2. Fungsi dengan return:\n\n");
    int hasil = tambah(5, 3);
    printf("5 + 3 = %d\n", hasil);
    
    // return type berbeda
    printf("3. Return type float:\n\n");
    float hasilBagi = bagi(7, 2);
    printf("7 / 2 = %.2f\n", hasilBagi);
    
    // pass by value
    printf("4. Pass by value:\n\n");
    int angka = 50;
    printf("Sebelum fungsi = %d\n", angka);
    cobaUbahNilai(angka);
    printf("Setelah fungsi = %d (gak berubah karena pass by value)\n\n", angka);
    
    // contoh lain pass by value
    int num = 5;
    printf("\nContoh num sebelum kuadrat: %d\n", num);
    int hasil_kuadrat = kuadrat(num);
    printf("num setelah kuadrat: %d (tetep sama)\n", num);
    printf("hasil yang di-return: %d\n", hasil_kuadrat);
    
    // passing array
    printf("\n5. Passing array (pass by reference):\n");
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    printf("Array awal: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    
    ubahArray(arr, size);
    printf("\nSetelah ubahArray (x2): ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n(array berubah karena array selalu dipass by reference)");
    
    // return dari fungsi array
    printf("\n\n6. Return value dari fungsi array:\n");
    int total = hitungTotal(arr, size);
    printf("Total elemen array: %d\n", total);
    
    // 2D array
    printf("\n7. Passing 2D array:\n");
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    printf("Matrix awal:\n");
    printMatrix(matrix, 2);
    
    kaliMatrix(matrix, 2, 3);
    printf("Setelah dikali 3:\n");
    printMatrix(matrix, 2);
    
    return 0;
}
