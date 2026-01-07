#include<stdio.h>
#include<string.h>

int main(){
	// ==================================
	// REVIEW LOOPING
	// ==================================
	// 1. for loop
	// untuk start: i mulai dari 0
	// dan selama i < 5
	// maka kita naikkan value i sebanyak 1 (i++)
	// selama kondisi belum terpenuhi (i < 5)
	// kita bakal print halo
	// for(int i = 0; i < 5; i++){
	// 	  puts("Halo");
	// }
	
	// 2. while
	// selama i kurang dari 5, kita print halo
	// cek kondisi dulu, baru jalanin
	// int i = 0; // inisialisasi dulu variablenya diluar while
	// while(i < 5){
	// 	  puts("Halo");
	// 	  i++;
	// }
	
	// 3. do while
	// run dulu isiannya, baru cek kondisi
	// do{
	// 	  puts("Halo\n");
	// 	  i++;
	// }while(i < 5);
	
	// =====================================
	// CASE BIKIN MENU
	// =====================================
	// validasi
	// 1. input harus antara 1-3 (inclusive)
	// 2. kalau menu 3 -> end program
	// menu
	// (1) membuat username
	// (2) validasi login
	// (3) exit
	
	int input;
	do{
		do{
			// puts() -> printf("\n")
			puts("Menu");
			puts("1. Buat Username");
			puts("2. Login");
			puts("3. Exit");
			printf("Choose : ");
			scanf("%d", &input);
			getchar();
		}while(input < 1 || input > 3);	// looping menu
		
		switch(input){
			case 1:{
				char nama_depan[50];
				char nama_belakang[50];
				
				printf("Masukkan nama depan: ");
				scanf("%s", nama_depan);
				printf("Masukkan nama belakang: ");
				scanf("%s", nama_belakang);
				
				// nama_depan + "." + nama_belakang
				// 1. gabungin nama_depan + "."				
				strcat(nama_depan, ".");
				// nama_depan = nama_depan + "."
				// 2. gabungin (nama_depan + ".") + nama_belakang
				strcat(nama_depan, nama_belakang);
				printf("Username Anda : %s\n", nama_depan);
				
				break;
			}
			case 2:{
				char pass_input[] = "admin123";
				char pass_check[] = "admin123";
					
				// urutan tidak ngaruh jika ingin cek
				// apakah sama atau tidak
				// strcmp() return perbedaan ascii value (int)
				if (strcmp(pass_input, pass_check) == 0){
					printf("Login Berhasil\n");
				} else {
					printf("Login Gagal\n");
				}
				break;
			}
			case 3:{
				puts("Good Bye!");
				break;
			}
			default:{
				break;
			}
		}
	}while(input != 3); // looping program sampai menu 3 dipilih
	
	return 0;
}
