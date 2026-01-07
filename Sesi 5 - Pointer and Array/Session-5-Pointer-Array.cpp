/*
=====================================
POINTERS & ARRAYS IN C PROGRAMMING  =
=====================================
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    
    /*
    ================================
    BAGIAN 1: PENGENALAN POINTER   =
    ================================
    
    Apa itu Pointer?
    - Variabel yang menyimpan ALAMAT MEMORI dari variabel lain
    - Akses langsung ke memori (powerful tapi harus hati-hati!)
    - Digunakan untuk: dynamic memory, array, function parameters
    
    Operator Pointer:
    & (address-of)  : mengambil alamat memori variabel
    * (dereference) : mengakses nilai di alamat tersebut
    
    Deklarasi:
    tipe_data *nama_pointer;
    */
    
    printf("========================================\n");
    printf("    POINTER & ARRAY TUTORIAL\n");
    printf("========================================\n\n");
    
    printf("--- DASAR POINTER ---\n\n");
    
    // Variabel biasa
    int angka = 42;
    printf("Variabel angka:\n");
    printf("Nilai: %d\n", angka);
    printf("Alamat memori: %p\n\n", &angka);
    
    // Pointer ke variabel
    int *ptr = &angka;  // ptr menyimpan alamat angka
    printf("Pointer ptr:\n");
    printf("Alamat yang disimpan: %p\n", ptr);
    printf("Nilai yang ditunjuk (*ptr): %d\n\n", *ptr);
    
    // Mengubah nilai melalui pointer
    *ptr = 100;  // Ubah nilai di alamat yang ditunjuk
    printf("Setelah *ptr = 100:\n");
    printf("angka = %d\n", angka);  // value variabel angka berubah
    printf("*ptr = %d\n\n", *ptr);
    
    
    /*
    ===============================
    BAGIAN 2: POINTER ARITMATIKA  =
    ===============================
    
    Pointer bisa di-increment/decrement:
    - ptr++ : pindah ke elemen berikutnya
    - ptr-- : pindah ke elemen sebelumnya
    - ptr + n : lompat n elemen
    */
    
    printf("--- POINTER ARITHMETIC ---\n\n");
    
    int arr[] = {10, 20, 30, 40, 50};
    int *p = arr;  // p menunjuk ke elemen pertama
    
    printf("Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    printf("Akses dengan pointer arithmetic:\n");
    printf("*p = %d (elemen ke-0)\n", *p);
    printf("*(p+1) = %d (elemen ke-1)\n", *(p+1));
    printf("*(p+2) = %d (elemen ke-2)\n", *(p+2));
    printf("*(p+4) = %d (elemen ke-4)\n\n", *(p+4));
    
    printf("Loop dengan pointer:\n");
    for (int *temp = arr; temp < arr + 5; temp++) {
        printf("%d ", *temp);
    }
    printf("\n\n");
    
    /*
    ====================
    BAGIAN 3: ARRAY    =
    ====================
    
    Array: kumpulan elemen dengan tipe data sama
    - Index dimulai dari 0
    - Ukuran tetap (fixed size)
    - Elemen disimpan berurutan di memori
    
    Deklarasi:
    tipe_data nama[ukuran];
    */
    
    printf("--- ARRAY ---\n\n");
    
    // Deklarasi dan inisialisasi
    int numbers[5] = {2, 4, 6, 8, 10};
    
    printf("Elemen array:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d (alamat: %p)\n", 
               i, numbers[i], &numbers[i]);
    }
    printf("\n");
    
    // Akses dan modifikasi
    printf("Modifikasi array:\n");
    printf("numbers[2] sebelum: %d\n", numbers[2]);
    numbers[2] = 99;
    printf("numbers[2] sesudah: %d\n\n", numbers[2]);
    
    // Array tanpa ukuran (compiler hitung otomatis)
    int data[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(data) / sizeof(data[0]);
    printf("Ukuran array data: %d elemen\n\n", size);
    
    
    /*
    ======================================
    BAGIAN 4: HUBUNGAN POINTER & ARRAY   =
    ======================================
    
    PENTING: Nama array adalah pointer ke elemen pertama!
    arr[i] sama dengan *(arr + i)
    */
    
    printf("--- POINTER & ARRAY ---\n\n");
    
    int values[] = {100, 200, 300, 400};
    
    printf("Nama array adalah pointer:\n");
    printf("values = %p\n", (void*)values);
    printf("&values[0] = %p\n\n", &values[0]);
    
    printf("Dua cara akses elemen:\n");
    printf("values[0] = %d\n", values[0]);
    printf("*values = %d\n", *values);
    printf("values[2] = %d\n", values[2]);
    printf("*(values+2) = %d\n\n", *(values+2));
    
    // Pointer ke array
    int *pArr = values;
    printf("Traversal dengan pointer:\n");
    for (int i = 0; i < 4; i++) {
        printf("pArr[%d] = %d\n", i, pArr[i]);
    }
    printf("\n");
    
    
    /*
    ===============================
    BAGIAN 5: ARRAY MULTIDIMENSI  =
    ===============================
    
    Array 2D: array of arrays (seperti tabel/matrix)
    Deklarasi: tipe_data nama[baris][kolom];
    */
    
    printf("--- MULTIDIMENSIONAL ARRAY ---\n\n");
    
    // Array 2D (3x4 matrix)
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    
    printf("Matrix 3x4:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // Akses elemen
    printf("matrix[1][2] = %d\n", matrix[1][2]);
    printf("Alamat: %p\n\n", (void*)&matrix[1][2]);
    
    // Array 3D
    int cube[2][2][3] = {
        {{1, 2, 3}, {4, 5, 6}},
        {{7, 8, 9}, {10, 11, 12}}
    };
    
    printf("Array 3D [2][2][3]:\n");
    for (int i = 0; i < 2; i++) {
        printf("Layer %d:\n", i);
        for (int j = 0; j < 2; j++) {
            printf("  ");
            for (int k = 0; k < 3; k++) {
                printf("%3d", cube[i][j][k]);
            }
            printf("\n");
        }
    }
    printf("\n");
    
    
    /*
    =========================================
    BAGIAN 6: STRING (ARRAY OF CHARACTERS)  =
    =========================================
    
    String di C = array of char yang diakhiri '\0' (null terminator)
    */
    
    printf("--- STRINGS (CHARACTER ARRAYS) ---\n\n");
    
    // Deklarasi string
    char str1[] = "Hello";  // Otomatis tambah '\0'
    char str2[10] = "World";
    char str3[] = {'H', 'i', '\0'};  // Manual null terminator
    
    printf("String 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("String 3: %s\n\n", str3);
    
    // String adalah array
    printf("Karakter dalam '%s':\n", str1);
    for (int i = 0; str1[i] != '\0'; i++) {
        printf("str1[%d] = '%c' (ASCII: %d)\n", i, str1[i], str1[i]);
    }
    printf("str1[%d] = '\\0' (null terminator)\n\n", 5);
    
    // String functions
    char source[] = "Programming";
    char dest[20];
    
    printf("String operations:\n");
    printf("strlen(\"%s\") = %lu\n", source, strlen(source));
    
    strcpy(dest, source);
    printf("strcpy: dest = \"%s\"\n", dest);
    
    strcat(dest, " C");
    printf("strcat: dest = \"%s\"\n", dest);
    
    int cmp = strcmp(source, "Programming");
    printf("strcmp(\"Programming\", \"Programming\") = %d\n\n", cmp);
    
    
    /*
    ================================
    BAGIAN 7: POINTER TO POINTER   =
    ================================
    
    Double pointer: pointer yang menyimpan alamat pointer lain
    Berguna untuk: array 2D dinamis, function yang ubah pointer
    */
    
    printf("--- POINTER TO POINTER ---\n\n");
    
    int val = 50;
    int *ptr1 = &val;
    int **ptr2 = &ptr1;  // Pointer ke pointer
    
    printf("val = %d\n", val);
    printf("*ptr1 = %d\n", *ptr1);
    printf("**ptr2 = %d\n\n", **ptr2);
    
    printf("Alamat:\n");
    printf("&val = %p\n", (void*)&val);
    printf("ptr1 = %p\n", (void*)ptr1);
    printf("&ptr1 = %p\n", (void*)&ptr1);
    printf("ptr2 = %p\n\n", (void*)ptr2);
    
    // Ubah nilai melalui double pointer
    **ptr2 = 200;
    printf("Setelah **ptr2 = 200:\n");
    printf("val = %d\n\n", val);
    
    /*
    ============================
    BAGIAN 8: OPERASI ARRAY   =
    ============================
    */
    
    printf("--- OPERASI ARRAY ---\n\n");
    
    int nums[] = {45, 23, 67, 12, 89, 34, 56};
    int n = sizeof(nums) / sizeof(nums[0]);
    
    printf("Array: ");
    for (int i = 0; i < n; i++) printf("%d ", nums[i]);
    printf("\n\n");
    
    // Cari nilai maksimum
    int max = nums[0];
    int maxIdx = 0;
    for (int i = 1; i < n; i++) {
        if (nums[i] > max) {
            max = nums[i];
            maxIdx = i;
        }
    }
    printf("Nilai maksimum: %d (index %d)\n", max, maxIdx);
    
    // Cari nilai minimum
    int min = nums[0];
    int minIdx = 0;
    for (int i = 1; i < n; i++) {
        if (nums[i] < min) {
            min = nums[i];
            minIdx = i;
        }
    }
    printf("Nilai minimum: %d (index %d)\n", min, minIdx);
    
    // Hitung rata-rata
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
    }
    float avg = (float)sum / n;
    printf("Rata-rata: %.2f\n\n", avg);
    
    
    /*
    ============================
    BAGIAN 9: REVERSE ARRAY   =
    ============================
    */
    
    printf("--- REVERSE ARRAY ---\n\n");
    
    int original[] = {1, 2, 3, 4, 5};
    int len = sizeof(original) / sizeof(original[0]);
    
    printf("Array asli: ");
    for (int i = 0; i < len; i++) printf("%d ", original[i]);
    printf("\n");
    
    // Reverse in-place
    for (int i = 0; i < len / 2; i++) {
        int temp = original[i];
        original[i] = original[len - 1 - i];
        original[len - 1 - i] = temp;
    }
    
    printf("Array terbalik: ");
    for (int i = 0; i < len; i++) printf("%d ", original[i]);
    printf("\n\n");
    
    
    /*
    ============================================================================
    BAGIAN 10: CONTOH PRAKTIS - SORTING (BUBBLE SORT)
    ============================================================================
    */
    
    printf("--- PRAKTIS 3: BUBBLE SORT ---\n\n");
    
    int unsorted[] = {64, 34, 25, 12, 22, 11, 90};
    int sortLen = sizeof(unsorted) / sizeof(unsorted[0]);
    
    printf("Sebelum sort: ");
    for (int i = 0; i < sortLen; i++) printf("%d ", unsorted[i]);
    printf("\n");
    
    // Bubble sort algorithm
    for (int i = 0; i < sortLen - 1; i++) {
        for (int j = 0; j < sortLen - i - 1; j++) {
            if (unsorted[j] > unsorted[j + 1]) {
                // Swap
                int temp = unsorted[j];
                unsorted[j] = unsorted[j + 1];
                unsorted[j + 1] = temp;
            }
        }
    }
    
    printf("Setelah sort: ");
    for (int i = 0; i < sortLen; i++) printf("%d ", unsorted[i]);
    printf("\n\n");
    
    
    /*
    ============================================================================
    BAGIAN 11: CONTOH PRAKTIS - SEARCH (LINEAR & BINARY)
    ============================================================================
    */
    
    printf("--- PRAKTIS 4: SEARCHING ---\n\n");
    
    int searchArr[] = {10, 25, 30, 45, 50, 65, 80, 95};
    int searchLen = sizeof(searchArr) / sizeof(searchArr[0]);
    int target = 45;
    
    // Linear Search
    printf("Linear Search (target=%d):\n", target);
    int found = -1;
    for (int i = 0; i < searchLen; i++) {
        if (searchArr[i] == target) {
            found = i;
            break;
        }
    }
    if (found != -1) {
        printf("Ditemukan di index %d\n\n", found);
    } else {
        printf("Tidak ditemukan\n\n");
    }
    
    // Binary Search (array harus terurut)
    printf("Binary Search (target=%d):\n", target);
    int left = 0, right = searchLen - 1;
    found = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        printf("Cek index %d (nilai=%d)\n", mid, searchArr[mid]);
        
        if (searchArr[mid] == target) {
            found = mid;
            break;
        } else if (searchArr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    if (found != -1) {
        printf("Ditemukan di index %d\n\n", found);
    }
    
    
    /*
    ================================
    BAGIAN 12: MATRIX OPERATIONS   =
    ================================
    */
    
    printf("--- MATRIX OPERATIONS ---\n\n");
    
    int matA[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int matB[2][3] = {{7, 8, 9}, {10, 11, 12}};
    int matSum[2][3];
    
    printf("Matrix A:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d", matA[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatrix B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%3d", matB[i][j]);
        }
        printf("\n");
    }
    
    // Matrix addition
    printf("\nA + B:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            matSum[i][j] = matA[i][j] + matB[i][j];
            printf("%3d", matSum[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    // Transpose
    int matT[3][2];
    printf("Transpose A:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            matT[i][j] = matA[j][i];
            printf("%3d", matT[i][j]);
        }
        printf("\n");
    }
    printf("\n");
