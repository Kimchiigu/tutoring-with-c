#include <stdio.h>

void floodFill(int img[][4], int rows, int cols, int sr, int sc, int newColor, int oldColor, int isFirstCall) {
    // Kalau panggilan pertama, simpan warna lama dan cek apakah udah sama dengan warna baru
    if (isFirstCall) {
        oldColor = img[sr][sc];
        // Kalau pixel awal udah punya warna baru, ga perlu diubah lagi
        if (oldColor == newColor) {
            return;
        }
    }
    
    // Base case: keluar dari batas atau bukan warna yang dicari
    if (sr < 0 || sr >= rows ||
        sc < 0 || sc >= cols ||
        img[sr][sc] != oldColor) {
        return;
    }
    
    // Ganti warna pixel sekarang
    img[sr][sc] = newColor;
    
    // Rekursif ke 4 tetangga (atas, bawah, kanan, kiri)
    floodFill(img, rows, cols, sr + 1, sc, newColor, oldColor, 0);  // bawah
    floodFill(img, rows, cols, sr - 1, sc, newColor, oldColor, 0);  // atas
    floodFill(img, rows, cols, sr, sc + 1, newColor, oldColor, 0);  // kanan
    floodFill(img, rows, cols, sr, sc - 1, newColor, oldColor, 0);  // kiri
}

void printImage(int img[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", img[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int img[3][4] = {
        {1, 1, 1, 0},
        {0, 1, 1, 1},
        {1, 0, 1, 1}
    };
    
    int rows = 3;
    int cols = 4;
    int sr = 1, sc = 2;
    int newColor = 2;
    
    printf("Image sebelum floodFill:\n");
    printImage(img, rows, cols);
    
    floodFill(img, rows, cols, sr, sc, newColor, 0, 1);
    
    printf("\nImage setelah floodFill:\n");
    printImage(img, rows, cols);
    
    return 0;
}
