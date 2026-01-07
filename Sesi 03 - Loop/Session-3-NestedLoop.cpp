/* =================================
Nested Loop and Pattern Printing   =
   =================================
   Nested Loop (Loop Bersarang) seperti namanya, adalah loop di dalam loop lain.
   Cara terbaik untuk latihan logic nested loop salah satunya lewat pattern printing
   Resource yang cukup bagus: "geeksforgeeks pattern printing in c"
*/

#include <stdio.h>

int main() {
	int n = 5;
	
	/* 
	Salah satu caraku agar bisa dapat logic atau strategi untuk mengerjakan pattern printing
	adalah lewat visualisasi matriksnya dulu, dan kita lihat "*", " ", ataupun "\n" harus diprint
	disaat i dan j berapa.
	
	Dari situ kita bisa mendapat ide untuk merumuskan nested loop yang tepat.
	
	contoh:
	
	for(int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			printf("*");
		}
		printf("\n");
	}
	
	loop i disini akan mengatur baris/rows nya
	loop j disini akan mengatur kolom/column nya
	
	tiap 1 iterasi i, looping j akan dijalankan sampai complete
	maka akan menghasilkan:
	Persegi 5 baris × 5 kolom.
	Outer loop 5 kali, inner loop 5 kali per baris, total 25 cetak bintang.
	Total iterasi inner = 25; total cetak newline = 5.
	*/
	printf("Matriks Visualisasi:\n");
	for (int i = 0; i < n; i++) { // loop baris
		// i berjalan dari 0..n-1 (total n baris)
		for (int j = 0; j < n; j++) { // loop kolom
			// j berjalan dari 0..n-1 (total n kolom per baris)
			// Di titik (i,j) ini biasanya kita putuskan mau cetak apa: "*", spasi, angka, dsb.
			printf("[%d,%d]", i, j);
		}
		// Setelah satu baris selesai (j selesai), pindah baris dengan \n
		printf("\n");
	}
	
	printf("\n\n");
	
	// Contoh 1: Persegi n x n
	printf("Persegi:\n");
	for (int i = 0; i < n; i++) { // loop baris
		// Setiap baris, kita cetak tepat n buah '*'
		for (int j = 0; j < n; j++) { // loop kolom
			// Karena selalu bintang, tidak pakai if-else
			printf("*");
		}
		// Tutup baris
		printf("\n");
	}
	
	printf("\n\n");
	
	// Contoh 2: Persegi bolong tengah
	// Ide: pinggiran (baris pertama/terakhir atau kolom pertama/terakhir) dicetak '*', selain itu spasi.
	printf("Persegi bolong tengah:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			// i==0     -> baris paling atas
			// i==n-1   -> baris paling bawah
			// j==0     -> kolom paling kiri
			// j==n-1   -> kolom paling kanan
			// Jika salah satu kondisi pinggir terpenuhi -> cetak '*', selain itu spasi
			if (i == 0 || i == n-1 || j == 0 || j == n-1) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}
	
	printf("\n\n");
	
	
    // Contoh 3: Segitiga kiri (Left angle triangle)
    // Loop luar untuk baris/row
    printf("Segitiga Rata Kiri:\n");
    for (int i = 0; i < n; i++) {
        // Baris ke-i (0-based) akan berisi (i+1) bintang karena j berjalan 0..i
		// Pola naik (1, 2, 3, ..., 5 bintang)
		
		// Loop dalam untuk kolom/column
        for (int j = 0; j <= i; j++) {
            // Setiap iterasi cetak "* " (bintang + spasi) -> memberi jarak antar bintang
            printf("* ");
        }
        // Setelah selesai satu baris, ganti baris
        printf("\n");
    }
    
    printf("\n\n");
    
    // Contoh 4: Segitiga kanan (Right Angle Triangle)
	// Tujuan: segitiga kanan (rata kanan) -> tambahkan spasi di depan lalu bintang.
	// Strategi: untuk baris i, jumlah spasi leading = 2*(n-i)-1 (di sini dipakai 2x supaya jarak sesuai dengan "* ")
    printf("Segitiga Rata Kanan:\n");
	for (int i = 0; i < n; i++) {

        // Loop ini untuk mencetak spasi di depan (leading spaces)
        // jumlah spasi berkurang saat i bertambah, supaya bentuknya rata kanan
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            // Semakin ke bawah (i naik), spasi berkurang -> bentuknya menja-di rata kanan
            printf(" ");
        }

        // Loop ini untuk mencetak karakter '*'
        // tiap baris i memiliki (i+1) bintang
        for (int k = 0; k <= i; k++) {
            // Baris i punya (i+1) bintang -> naik satu per baris
            printf("* ");
        }
        printf("\n");
    }
    
    printf("\n\n");
    
    // Contoh 5: Piramida (Full pyramid)
    // Bentuk segitiga sama kaki penuh. Intinya: spasi kiri makin sedikit, bintang makin banyak (jumlah ganjil per baris).
    // Di bawah, bintang dicetak "* " berulang (bukan satu karakter '*'), jadi perhitungan spasi diperbanyak supaya simetris.
    // Loop ini untuk mencetak seluruh baris piramida
    printf("Piramida:\n");
    for (int i = 0; i < n; i++) {

        // Inner loop 1: cetak spasi di kiri untuk setiap baris
        for (int j = 0; j < 2 * (n - i) - 1; j++) {
            // Banyak spasi leading turun seiring i naik -> puncak di atas, dasar di bawah
            printf(" ");
        }

        // Inner loop 2: cetak "* " berjumlah ganjil (2*i+1)
        for (int k = 0; k < 2 * i + 1; k++) {
            // Banyaknya "* " mengikuti deret ganjil (1,3,5,...) melalui rumus 2*i+1
            printf("* ");
        }
        // Tutup baris setiap selesai satu lapisan piramida
        printf("\n");
    }
    
    return 0;
}
