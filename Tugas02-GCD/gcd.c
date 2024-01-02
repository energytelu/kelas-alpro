#include <stdio.h>
void main()
{
    int m,n,y;
    printf("Masukkan Nilai Pertama: ");scanf("%d", &m);
    printf("Masukkan Nilai Kedua: ");scanf("%d", &n);
    while (n>0){
    y = n;
    n = m%n;
    m = y;
    }
    printf("GCD = %d\n", y);
}