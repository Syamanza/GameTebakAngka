#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int angkaUntukDitebak, tebakan, percobaan = 0;

    // generator nomor acak dengan waktu saat ini
    
    srand(time(NULL));

    // Hasilkan nomor acak antara 1 dan 100
    
    angkaUntukDitebak = rand() % 100 + 1;

    printf("Selamat datang di Game Tebak Angka!\n");
    printf("Coba tebak angka antara 1 sampai 100\n\n");

    do {
        printf("Masukkan Tebakan Angka Anda: \n");
        scanf("%d", &tebakan);

        percobaan++;

        if (tebakan > angkaUntukDitebak) {
            printf("Angkanya terlalu tinggi! Coba lagi\n");
        } else if (tebakan < angkaUntukDitebak) {
            printf("Angkanya terlalu rendah! Coba lagi\n");
        } else {
            printf("\nSelamat! Anda telah menebak nomornya : %d \ndalam %d percobaan\n", angkaUntukDitebak, percobaan);
        }

    } while (tebakan != angkaUntukDitebak);

    return 0;
}

