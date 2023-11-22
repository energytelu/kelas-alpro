#include <stdio.h>

int calcGaji(int a, int jam_kerja, int gaji_total, int gaji_pokok, int gaji_perjam, int gaji_lembur) {
    gaji_total= 150*gaji_pokok;
    gaji_lembur=(jam_kerja-150)*1.5*gaji_pokok;
}

int main(){

	char nama[100];
    int jam_kerja,gaji_total,gaji_pokok,gaji_perjam,gaji_lembur, golongan;
	printf("===KALKULATOR GAJI===\n");
	printf("Nama:\t");gets(nama);
    printf("1. Golongan 1\n2. Golongan 2\n3. Golongan 3\n4. Golongan 4\n5. Golongan 5\n");
	printf("Golongan: "); scanf("%d", &golongan);
    calcGaji( golongan, jam_kerja,  gaji_total, gaji_perjam, gaji_lembur, gaji_pokok);//(B)Tentukan parameter aktual
}

void dispayGaji(int a, int jam_kerja, int gaji_total, int gaji_pokok, int gaji_perjam, int gaji_lembur, char nama, char golongan){//(C)Tentukan identifier
	switch(a){
        case '1':       printf("Masukan jam kerja:\t");scanf("%d",&jam_kerja);
                        if(jam_kerja>150){
                        gaji_pokok= 500000;
                        gaji_perjam= jam_kerja*5000;
                        gaji_lembur=(jam_kerja-150)*7500;
                        gaji_total=gaji_pokok+gaji_perjam+gaji_lembur;
                        printf("Nama: %s\n",nama);
                        printf("Golongan: %c\n",golongan);
                        printf("Detail Gaji: Rp %d",gaji_total);
                        }
                        else     
                        gaji_pokok= 500000;
                        gaji_perjam= jam_kerja*5000;
                        gaji_total=gaji_pokok+gaji_perjam;
                        printf("Nama: %s\n",nama);
                        printf("Golongan: %c\n",golongan);
                        printf("Detail Gaji: Rp %d",gaji_total);
                        break;
        case '2':       printf("Masukan jam kerja:\t");scanf("%d",&jam_kerja);
                        if(jam_kerja>150){
                        gaji_pokok= 300000;
                        gaji_perjam= jam_kerja*3000;
                        gaji_lembur=(jam_kerja-150)*4500;
                        gaji_total=gaji_pokok+gaji_perjam+gaji_lembur;
                        printf("Nama: %s\n",nama);
                        printf("Golongan: %c\n",golongan);
                        printf("Detail Gaji: Rp %d",gaji_total);
                        }
                        else     
                        gaji_pokok= 300000;
                        gaji_perjam= jam_kerja*3000;
                        gaji_total=gaji_pokok+gaji_perjam;
                        printf("Nama: %s\n",nama);
                        printf("Golongan: %c\n",golongan);
                        printf("Detail Gaji: Rp %d",gaji_total);
                        break;
        case '3':       printf("Masukan jam kerja:\t");scanf("%d",&jam_kerja);
                        if(jam_kerja>150){
                        gaji_pokok= 250000;
                        gaji_perjam= jam_kerja*2000;
                        gaji_lembur=(jam_kerja-150)*3000;
                        gaji_total=gaji_pokok+gaji_perjam+gaji_lembur;
                        printf("Nama: %s\n",nama);
                        printf("Golongan: %c\n",golongan);
                        printf("Detail Gaji: Rp %d",gaji_total);
                        }
                        else     
                        gaji_pokok= 250000;
                        gaji_perjam= jam_kerja*2000;
                        gaji_total=gaji_pokok+gaji_perjam;
                        printf("Nama: %s\n",nama);
                        printf("Golongan: %c\n",golongan);
                        printf("Detail Gaji: Rp %d",gaji_total);
                        break;
        case '4':       printf("Masukan jam kerja:\t");scanf("%d",&jam_kerja);
                        if(jam_kerja>150){
                        gaji_pokok= 100000;
                        gaji_perjam= jam_kerja*1500;
                        gaji_lembur=(jam_kerja-150)*2250;
                        gaji_total=gaji_pokok+gaji_perjam+gaji_lembur;
                        printf("Nama: %s\n",nama);
                        printf("Golongan: %c\n",golongan);
                        printf("Detail Gaji: Rp %d",gaji_total);
                        }
                        else     
                        gaji_pokok= 100000;
                        gaji_perjam= jam_kerja*1500;
                        gaji_total=gaji_pokok+gaji_perjam;
                        printf("Nama: %s\n",nama);
                        printf("Golongan: %c\n",golongan);
                        printf("Deatil Gaji: Rp %d",gaji_total);
                        break;
        case '5':       printf("Masukan jam kerja:\t");scanf("%d",&jam_kerja);
                        if(jam_kerja>150){
                        gaji_pokok= 50000;
                        gaji_perjam= jam_kerja*1000;
                        gaji_lembur=(jam_kerja-150)*1500;
                        gaji_total=gaji_pokok+gaji_perjam+gaji_lembur;
                        printf("Nama: %s\n",nama);
                        printf("Golongan: %c\n",golongan);
                        printf("Detail Gaji: Rp %d",gaji_total);
                        }
                        else     
                        gaji_pokok= 50000;
                        gaji_perjam= jam_kerja*1000;
                        gaji_total=gaji_pokok+gaji_perjam;
                        printf("Nama: %s\n",nama);
                        printf("Golongan: %c\n",golongan);
                        printf("Detail Gaji: Rp %d",gaji_total);
                        break;
        default:        printf("Golongan Tersebut Tidak ada\n");
                        printf("Silahkan Coba Kembali\n");
                        main();
        }
}