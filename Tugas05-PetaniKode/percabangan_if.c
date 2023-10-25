#include <stdio.h>

void main(){
    printf("==Program Pembayaran==\n");
    int total_belanja = 0;

    printf("Inputan total belanja:");
    scanf("%i", &total_belanja);

    // menggunakan blok percabangan if
    if(total_belanja > 100000){
        printf("selamat, anda mendapatkan hadiah!\n");
    }

    printf("terimakasih sudah berbelanja di toko kami\n\n");
}