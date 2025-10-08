#include<stdio.h>
#include<string.h>

int main(){
	// =================================================
	// A. strlen()
	// =================================================
	// Mengecek panjang sebuah string
	// Function/Method ini akan return sebuah integer berupa panjang string
	// '' -> char
	// "" -> array of char (string)
	// [] -> sistem yang menentukan
	//       panjang arraynya, hanya
	//       berlaku jika kita kasih
	//       value awalnya
	 char nama[] = "Christopher";
	//             1234567891011
	// expected output : 11
	 int panjang = strlen(nama);
	 printf("Panjang Namaku : %d\n", panjang);
	
	// =================================================
	// B. strcpy()
	// =================================================
	// Copy value dari string source ke string destination
	 char src[] = "Halo";
	 char dest[5];
	
	// hanya berlaku jika data typenya
	// adalah numeric (int, float, double)
	// dan char saja
	// dest = src; // emg gabisa ya??
	
	// strcpy(variable destination, variable source)
	// jangan kebalik
	 strcpy(dest, src);
	
	 printf("Source      : %s\n", src);
	 printf("Destination : %s\n", dest);
	
	// =================================================
	// C. strcat()
	// =================================================
	// Menggabungkan string1 dengan string2
	// Urutan ngaruh ya temen"
	 char fullname[50] = "Christopher ";
	 char surname[] = "Hardy";
	
	// cat -> concat -> menggabungkan
	// typecasting
	// Umurku + 21 (x)
	// Umurku + typecast(21) (v)
	// Christopher + Hardy + Gunawan
	// strcat(Christopher, Hardy)
	// strcat(Christopher Hardy, Gunawan)
	
	// use case: username
	// christopher hardy
	// hardy.christopher 
	// '.' (x)
	// "." (v)
	 strcat(fullname, surname);
	 printf("Namaku %s\n", fullname);
	
	// =================================================
	// D. strcmp()
	// =================================================
	// Compare antara string1 dan string2
	// Jika sama maka perbedaan ascii valuenya 0
	 char pass_input[] = "admin123";
	 char pass_check[] = "123admin";
	
	// urutan tidak ngaruh jika ingin cek
	// apakah sama atau tidak
	// strcmp() return perbedaan ascii value (int)
	 if (strcmp(pass_input, pass_check) == 0){
	 	printf("Login Berhasil\n");
	 } else {
	  	printf("Login Gagal\n");
	 }
	
	return 0;
}
