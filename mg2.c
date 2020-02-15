#include<stdio.h>
#include<stdlib.h>

int main()
{
	//definisikan variabel
	float Banyaknya_angka_yang_muncul;
	float Banyaknya_percobaan;
	float Frekuensi_relatif;

    printf("SELAMAT DATANG\n");
	printf("Masukkan banyaknya angka yang muncul: ");
	scanf("%f", &Banyaknya_angka_yang_muncul);
	printf("Masukkan banyaknya percobaan: ");
	scanf("%f", &Banyaknya_percobaan);

	//Hitung Frekuensi Relatifnya
	Frekuensi_relatif = (Banyaknya_angka_yang_muncul / Banyaknya_percobaan);
	//Tampilkan Hasil
	printf("\n -> Jadi, frekuensi relatif munculnya angka adalah sebanyak %.2f\n\n" , Frekuensi_relatif);

	return 0;
}
