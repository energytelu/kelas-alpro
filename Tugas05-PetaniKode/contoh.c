#include <stdio.h>

int main() {
    float gajiPerJam[] = {5000, 6000, 7000, 8000, 9000};
    int golongan, jamKerja;

    do {
        printf("Masukkan golongan anda: ");
        scanf("%d", &golongan);

        if (golongan < 1 && golongan > 5) {
            printf("Golongan tidak valid\n");
        }

    } while (golongan < 1 && golongan > 5);

    do {
        printf("Masukkan jam kerja: ");
        scanf("%d", &jamKerja);

        if (jamKerja < 0) {
            printf("Jam kerja tidak valid\n");
        }

    } while (jamKerja < 0);

    float gaji = 0;

    if (jamKerja > 150) {
        gaji = 150 * gajiPerJam[golongan - 1] + (jamKerja - 150) * gajiPerJam[golongan - 1] * 1.5;
    } else {
        gaji = jamKerja * gajiPerJam[golongan - 1];
    }

    printf("Gaji untuk golongan %d dengan %d jam kerja: %.2f\n", golongan, jamKerja, gaji);

    return 0;
}