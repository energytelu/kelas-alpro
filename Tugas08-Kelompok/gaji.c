#include <stdio.h>
int bayaranlembur;
int golongan, jamKerja, gajiakhir, gajiakhir2, gajiakhir3, gajilembur, lembur, jamlembur;
int calcGaji(int gajiakhir, int gajilembur, int jamlembur){
    gajiakhir2 = gajiakhir*1.5;
    bayaranlembur = gajilembur*jamlembur;
    gajiakhir3 = gajiakhir2 + bayaranlembur;
}

void displayGaji(){
    if (jamKerja>150)
    {
        printf("Total gaji yang anda dapatkan adalah Rp%d\n", gajiakhir2);
        printf("Dengan tambahan gaji sebesar Rp%d\n", bayaranlembur);
        printf("Maka total gaji yang anda dapatkan adalah Rp%d\n", gajiakhir3);
    }else{
        printf("Total Gaji yang anda dapatkan adalah Rp%d\n", gajiakhir);
    }
    
}
int main() {
    float datagajiPerJam[5] = {5000, 3000, 2000, 1500, 1000};
    float datagajitetap[5] = {500000, 300000, 250000, 100000, 50000};
    printf("Masukkan golongan (1-5): ");
    scanf("%d", &golongan);
    printf("Jam Kerja: ");
    scanf("%d", &jamKerja);
    getchar();
    if (jamKerja>150)
    {
        jamlembur = jamKerja-150;
    }
    switch (golongan)
    {
    case 1:
        gajiakhir = datagajitetap[0];
        gajilembur = datagajiPerJam[0];
        if (jamKerja>150)
        {
            calcGaji(gajiakhir, gajilembur, jamlembur);
        }
        break;
    case 2:
        gajiakhir = datagajitetap[1];
        gajilembur = datagajiPerJam[1];
        if (jamKerja>150)
        {
            calcGaji(gajiakhir, gajilembur, jamlembur);
        }
        break;
    case 3:
        gajiakhir = datagajitetap[2];
        gajilembur = datagajiPerJam[2];
        if (jamKerja>150)
        {
            calcGaji(gajiakhir, gajilembur, jamlembur);
        }
        break;
    case 4:
        gajiakhir = datagajitetap[3];
        gajilembur = datagajiPerJam[3];
        if (jamKerja>150)
        {
            calcGaji(gajiakhir, gajilembur, jamlembur);
        }
        break;
    case 5:
        gajiakhir = datagajitetap[4];
        gajilembur = datagajiPerJam[4];
        if (jamKerja>150)
        {
            calcGaji(gajiakhir, gajilembur, jamlembur);
        }
        break;
    default:
    printf("Golongan yang anda masukkan tidak valid");
        break;
    }
    displayGaji();
    return 0;
}