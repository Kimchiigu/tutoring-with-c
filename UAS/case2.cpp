#include<stdio.h>
#include<string.h>

struct Orang {
	char nama[50];
	int umur;
};

// * -> menandakan kita passing based on references
// passing by value, passing by references
// angka = 1
// by value ke method lain
void swap(struct Orang *a, struct Orang *b){
	struct Orang temp;
	// c = a
	// a = b
	// b = c
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int n;
	struct Orang kumpulanOrang[101];
	
	scanf("%d", &n); getchar();
	for(int i = 0; i < n; i++){
		// %[^\n] -> baca inputan sampai ketemu \n
		// %[^\#] -> baca inputan sampai ketemu #
		scanf("%s %d", kumpulanOrang[i].nama, &kumpulanOrang[i].umur); getchar();
	}
	
	// bubble sort
	// belajar lagi merge sort & quick sort & insertion sort
	// 1. ketika udah elemen terakir, gabisa compare lagi ama sblhnya
	// karena udah kosong sebelahnya / NULL
	// 2. elemen terakir pasti udah bener posisinya
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			int perluTuker = 0;
			if(kumpulanOrang[j].umur > kumpulanOrang[j+1].umur){
				perluTuker = 1;
			} else if(kumpulanOrang[j].umur == kumpulanOrang[j+1].umur){
				// A -> kecil, Z -> besar
				// Zaki [j]
				// Andi [j+1]
				// Zaki > Andi
				if(strcmp(kumpulanOrang[j].nama, kumpulanOrang[j+1].nama) > 0){
					perluTuker = 1;
				}
			}
			
			if(perluTuker){
				swap(&kumpulanOrang[j], &kumpulanOrang[j+1]);
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("%s %d\n", kumpulanOrang[i].nama, kumpulanOrang[i].umur);
	}
	
	return 0;
}
