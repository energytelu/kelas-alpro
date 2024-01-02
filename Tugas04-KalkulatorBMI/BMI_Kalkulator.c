#include <stdio.h>

int main() {
    char jenisKelamin;
    float tinggi, berat, bmi;

    printf("===INPUT===\n");
    printf("Pilih Jenis Kelamin (P/Pria, W/Wanita): ");
    scanf(" %c", &jenisKelamin);

    switch (jenisKelamin) {
        case 'P':
        case 'p':
            printf("Masukkan Tinggi Badan (Meter): ");
            scanf("%f", &tinggi);

            printf("Masukkan Berat Badan (Kilogram): ");
            scanf("%f", &berat);

            bmi = berat / (tinggi * tinggi);
            printf("===OUTPUT===\n");
            printf("BMI Anda: %.2f\n", bmi);

            if (bmi >= 17 && bmi <= 23) {
                printf("Badan Ideal\n");
            } else {
                printf("Badan Tidak Ideal\n");
            }
            break;

        case 'W':
        case 'w':
            printf("Masukkan Tinggi Badan (Meter): ");
            scanf("%f", &tinggi);

            printf("Masukkan Berat Badan (Kilogram): ");
            scanf("%f", &berat);

            bmi = berat / (tinggi * tinggi);
            printf("===OUTPUT===\n");
            printf("BMI Anda: %.2f\n", bmi);

            if (bmi >= 18 && bmi <= 25) {
                printf("Badan Ideal\n");
            } else {
                printf("Badan Tidak Ideal\n");
            }
            break;
    }

    return 0;
}