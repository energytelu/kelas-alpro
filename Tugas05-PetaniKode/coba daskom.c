#include <stdio.h>
#include <string.h>
#include <stdlib.h>
FILE *fh, *fh2, *fh3;

int loginSebagai, menuCustomer, menuPustakawan, menuPengaturanAkunCustomer, menuPengaturanAkunPustakawan, menuDaftarBukuCustomer, menuDaftarBukuPustakawan, menuDendaPustakawan, menuPengembalianBukuCustomer;
int tambahdenda;
int k = 3;
int konfirmasi;
int n = 3;
int pilihari;
struct index
{
    char username[30], password[30];
    int denda, tambahDenda;
} akun;

struct dataBuku
{
    char kategori[50], jenis1[50], jenis2[50], judul[50];
    int jumlah;
} buku;

struct dataPinjam
{
    char username[50], kategori[50], jenis1[50], jenis2[50], judul[50];
    int hari;
} pinjam;

char username[30], password[30], ubahPassword[30], passwordBaru[30], dicari[30], username1[30], tempDicari[30];
void daftarakun();
int cekLoginCustomer(int);
void customer();
void pengaturanAkunCustomer();
void daftarBukuCustomer();
void pengembalianBukuCustomer();
void lihatDendaCustomer();
void beriFeedbackBukuCustomer();
void tulisFeedbackCustomer();
void pustakawan();
void pengaturanAkunPustakawan();
void daftarBukuPustakawan();
void lihatPeminjamanPustakawan();
void pengaturanDendaPustakawan();
void lihatFeedbackPustakawan();
void logout();

int main()
{
    int tipelogin, menu;
    
    printf(" _     _ _                            _   _ _ _             \n");
    printf("| |   () |                          | | | (|_)            \n");
    printf("| |    | |_  _ _ _ _ _ _ _   _  | || |_ _  __ _ _   _ \n");
    printf("| |   | | '_ \\| '/ _` | '| | | | |  _  | | |/ _` | | | |\n");
    printf("| || | |) | | | (| | |  | || | | | | | | | (| | || |\n");
    printf("\\_/|./||  \\,||   \\, | \\| |/| |\\,|\\,|\n");
    printf("                               __/ |        _/ |            \n");
    printf("                              |/        |_/             \n");
    printf("\n===Selamat Datang di Tampilan Utama Library Hijau===\n");
    printf("1. Register\n");
    printf("2. Login\n");
    printf("Pilih menu (1-2): ");
    scanf("%d", &tipelogin);
    getchar();
    switch (tipelogin)
    {
    case 1:
        daftarakun();
        break;
    case 2:
        cekLoginCustomer(3);
        break;
    default:
        printf("\nPilihan anda tidak valid, silahkan masukkan nilai yang benar\n");
        
        
        main();
        break;
    }
}

void daftarakun()
{
    fh = fopen("daftarakun.dat", "ab+");
    printf("\n===Halaman Register Akun Library Hijau===");
    printf("\nMasukkan username anda: ");
    gets(username1);
    while (fread(&akun, sizeof(akun), 1, fh) == 1)
    {
        if (strcmp(akun.username, username1) == 0)
        {
            printf("Username ini telah diambil, silahkan pilih username lain\n");
            fclose(fh);
            daftarakun();
        }
    }
    strcpy(akun.username, username1);
    printf("Masukkan password anda: ");
    gets(akun.password);
    akun.denda = 0;
    fwrite(&akun, sizeof(akun), 1, fh);
    (650);
    printf("|=====");
    printf("=====|\n");
    (650);
    printf("Akun anda berhasil dibuat, silahkan login ulang\n");
    
    
    fclose(fh);
    main();
}

int cekLoginCustomer(int x)
{
    fh = fopen("daftarakun.dat", "rb");
    if (x == 0)
    {
        printf("\nKesempatan anda telah habis, anda akan dikeluarkan dari program\n");
        
        
        fclose(fh);
        exit(1);
    }
    else if (x == 3)
    {
        printf("\n===Halaman Login Library Hijau===");
        printf("\nMasukkan username anda: ");
        gets(username);
        printf("Masukkan password anda: ");
        gets(password);
    }
    else if (x >= 1)
    {
        printf("\nAnda mempunyai %d kesempatan lagi\n", x);
        printf("Masukkan username anda: ");
        gets(username);
        printf("Masukkan password anda: ");
        gets(password);
    }
    while (fread(&akun, sizeof(akun), 1, fh) == 1)
    {
        if (strcmp(akun.username, username) == 0 && strcmp(akun.password, password) == 0)
        {
            printf("|=====");
            (20);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (400);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (650);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=====|\n");
            (650);
            printf("\nLogin anda berhasil\n");
            
            
            fclose(fh);
            customer();
        }
        if (strcmp(username, "pustakawan") == 0 && strcmp(password, "pustakawankece") == 0)
        {
            printf("|=====");
            (20);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (400);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (650);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=");
            (10);
            printf("=====|\n");
            (650);
            printf("\nAnda berhasil login sebagai pustakawan\n");
            
            
            fclose(fh);
            pustakawan();
        }
    }
    cekLoginCustomer(x - 1);
    fclose(fh);
}

void pustakawan()
{
    printf("\n===Halo Pustakawan, Selamat Datang di Menu Library Hijau===\n");
    printf("1. Pengaturan Akun Customer\n");
    printf("2. Pengaturan Buku\n");
    printf("3. Lihat Daftar Peminjaman Buku\n");
    printf("4. Pengaturan Denda\n");
    printf("5. Lihat Feedback\n");
    printf("6. Logout\n");
    printf("Pilih nomer menu(1-6): ");
    scanf("%d", &menuPustakawan);
    getchar();
    switch (menuPustakawan)
    {
    case 1:
        pengaturanAkunPustakawan();
        break;
    case 2:
        daftarBukuPustakawan();
        break;
    case 3:
        lihatPeminjamanPustakawan();
        break;
    case 4:
        pengaturanDendaPustakawan();
        break;
    case 5:
        lihatFeedbackPustakawan();
        break;
    case 6:
        logout();
        break;
    default:
        printf("\nPilihan anda tidak valid, silahkan masukkan nilai yang benar\n");
        
        
        pustakawan();
        break;
    }
}

void pengaturanAkunPustakawan()
{
    printf("\n===Selamat Datang di Pengaturan Akun===\n");
    printf("1. Lihat akun customer\n");
    printf("2. Hapus akun customer\n");
    printf("Pilih nomer menu(1-2): ");
    scanf("%d", &menuPengaturanAkunPustakawan);
    getchar();
    switch (menuPengaturanAkunPustakawan)
    {
    case 1:
        
        fh = fopen("daftarakun.dat", "rb");
        printf("\n=====DATA AKUN CUSTOMER LIBRARY HIJAU=====");
        while (fread(&akun, sizeof(akun), 1, fh) == 1)
        {
            printf("\nUsername : %s\n", akun.username);
            printf("Password : %s\n", akun.password);
            printf("Denda : %d\n", akun.denda);
        }
        printf("\nAnda akan dialihkan ke menu utama\n");
        
        
        fclose(fh);
        pustakawan();
        break;
    case 2:
        fh = fopen("daftarakun.dat", "rb");
        fh2 = fopen("daftarakun2.dat", "wb");
        printf("Masukkan username yang ingin dihapus: ");
        gets(dicari);
        while (fread(&akun, sizeof(akun), 1, fh) == 1)
        {
            if (strcmp(akun.username, dicari) != 0)
            {
                fwrite(&akun, sizeof(akun), 1, fh2);
            }
        }
        fclose(fh);
        fclose(fh2);
        remove("daftarakun.dat");
        rename("daftarakun2.dat", "daftarakun.dat");
        printf("\nAkun berhasil dihapus\nAnda akan dialihkan ke menu utama\n");
        
        
        pustakawan();
        break;
    default:
        printf("\nPilihan anda tidak valid, silahkan masukkan nilai yang benar\n");
        
        
        pengaturanAkunPustakawan();
        break;
    }
}

void daftarBukuPustakawan()
{
    printf("\n===Selamat Datang di Pengaturan Buku===\n");
    printf("1. Lihat buku\n");
    printf("2. Tambah buku\n");
    printf("3. Hapus buku\n");
    printf("Pilih nomer menu(1-2): ");
    scanf("%d", &menuDaftarBukuPustakawan);
    getchar();
    switch (menuDaftarBukuPustakawan)
    {
    case 1:
        
        fh = fopen("databuku.dat", "rb");
        printf("\n=====Data Buku Library Hijau=====\n");
        printf("Fiksi\n");
        printf("\tKomik\n");
        printf("\t\tManga\n");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "Manga") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        fh = fopen("databuku.dat", "rb");
        printf("\t\tAction\n");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "Action") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        printf("\tNovel\n");
        printf("\t\tFantasi\n");
        fh = fopen("databuku.dat", "rb");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "Fantasi") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        printf("\t\tRomance\n");
        fh = fopen("databuku.dat", "rb");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "Romance") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        printf("Non-Fiksi\n");
        printf("\tBuku Pelajaran\n");
        printf("\t\tIPA\n");
        fh = fopen("databuku.dat", "rb");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "IPA") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        printf("\t\tIPS\n");
        fh = fopen("databuku.dat", "rb");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "IPS") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        printf("\tBuku Ensiklopedia\n");
        printf("\t\tEnsiklopedia Indonesia\n");
        fh = fopen("databuku.dat", "rb");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "Ensiklopedia Indonesia") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        printf("\t\tEnsiklopedia Dunia\n");
        fh = fopen("databuku.dat", "rb");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "Ensiklopedia Dunia") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        pustakawan();
        break;
    case 2:
        
        fh = fopen("databuku.dat", "ab");
        printf("\n=====Halaman Tambah Buku=====\n");
        printf("Masukkan kategori buku: ");
        gets(buku.kategori);
        printf("Masukkan jenis 1 buku: ");
        gets(buku.jenis1);
        printf("Masukkan jenis 2 buku: ");
        gets(buku.jenis2);
        printf("Masukkan judul buku: ");
        gets(buku.judul);
        fwrite(&buku, sizeof(buku), 1, fh);
        fclose(fh);
        printf("\nBuku berhasil ditambahkan\n");
        
        
        pustakawan();
        break;
    case 3:
        fh = fopen("databuku.dat", "rb");
        fh2 = fopen("databuku2.dat", "wb");
        printf("Masukkan judul buku yang ingin dihapus: ");
        gets(dicari);
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.judul, dicari) != 0)
            {
                fwrite(&buku, sizeof(buku), 1, fh2);
            }
        }
        fclose(fh);
        fclose(fh2);
        remove("databuku.dat");
        rename("databuku2.dat", "databuku.dat");
        printf("\nBuku telah berhasil dihapus\n");
        
        
        pustakawan();
        break;
    default:
        printf("\nPilihan anda tidak valid, silahkan masukkan nilai yang benar\n");
        
        
        daftarBukuPustakawan();
        break;
    }
}

void lihatPeminjamanPustakawan()
{
    
    fh = fopen("pinjambuku.dat", "rb");
    printf("\n=====Data Peminjaman Buku Library Hijau=====");

    if (fh == NULL)
    {
        printf("\nTidak ada data peminjaman\n");
        pustakawan();
    }
    while (fread(&pinjam, sizeof(pinjam), 1, fh) == 1)
    {
        printf("\nBuku ini dipinjam oleh: %s\n", pinjam.username);
        printf("Kategori buku: %s\n", pinjam.kategori);
        printf("Jenis 1 buku: %s\n", pinjam.jenis1);
        printf("Jenis 2 buku: %s\n", pinjam.jenis2);
        printf("Judul buku: %s\n", pinjam.judul);
        printf("Lama peminjaman: %d hari\n", pinjam.hari);
    }
    printf("\n");
    fclose(fh);
    pustakawan();
}

void pengaturanDendaPustakawan()
{
    printf("\n===Selamat Datang di Menu Tambah Denda Customer===\n");
    printf("1. Lihat data denda customer\n");
    printf("2. Tambah denda customer\n");
    printf("3. Hapus denda customer\n");
    printf("Pilih nomer menu(1-3): ");
    scanf("%d", &menuDendaPustakawan);
    getchar();
    switch (menuDendaPustakawan)
    {
    case 1:
        
        fclose(fh);
        fh = fopen("daftarakun.dat", "rb");
        printf("\n=====Halaman Denda=====\n");
        while (fread(&akun, sizeof(akun), 1, fh) == 1)
        {
            printf("Username: %s\n", akun.username);
            printf("Denda: %d\n\n", akun.denda);
        }
        printf("\nAnda akan dialihkan ke menu utama\n");
        
        
        fclose(fh);
        pustakawan();
        break;
    case 2:
        fclose(fh);
        fclose(fh2);
        fclose(fh3);
        fh = fopen("daftarakun.dat", "rb");
        fh2 = fopen("daftarakun.dat", "ab+");
        fh3 = fopen("daftarakun2.dat", "wb");
        printf("\n=====Halaman tambah denda=====\n");
        printf("Masukkan username yang ingin ditambah dendanya: ");
        gets(dicari);
        while (fread(&akun, sizeof(akun), 1, fh2) == 1)
        {
            if (strcmp(akun.username, dicari) != 0)
            {
                fwrite(&akun, sizeof(akun), 1, fh3);
            }
        }
        while (fread(&akun, sizeof(akun), 1, fh) == 1)
        {

            if (strcmp(akun.username, dicari) == 0)
            {
                akun.tambahDenda = 0;
                printf("Masukkan nominal denda yang akan ditambahkan kepada %s: ", akun.username);
                scanf("%d", &akun.tambahDenda);
                akun.denda = akun.denda + akun.tambahDenda;
                printf("Denda berhasil ditambahkan kepada %s sebesar %d\n", akun.username, akun.tambahDenda);
                fwrite(&akun, sizeof(akun), 1, fh3);
                printf("Total denda %s adalah %d\n", akun.username, akun.denda);
            }
        }
        fclose(fh);
        fclose(fh2);
        fclose(fh3);
        remove("daftarakun.dat");
        rename("daftarakun2.dat", "daftarakun.dat");
        printf("\nAnda akan dialihkan ke menu utama\n");
        
        
        pustakawan();
        break;
    case 3:
        fh = fopen("daftarakun.dat", "rb");
        fh2 = fopen("daftarakun2.dat", "wb");
        printf("\nMasukkan username yang dendanya ingin dihapus: ");
        gets(dicari);
        while (fread(&akun, sizeof(akun), 1, fh) == 1)
        {
            if (strcmp(akun.username, dicari) != 0)
            {
                fwrite(&akun, sizeof(akun), 1, fh2);
            }
            if (strcmp(akun.username, dicari) == 0)
            {
                akun.denda = 0;
                fwrite(&akun, sizeof(akun), 1, fh2);
            }
        }
        fclose(fh);
        fclose(fh2);
        remove("daftarakun.dat");
        rename("daftarakun2.dat", "daftarakun.dat");
        printf("Denda dari akun %s berhasil dihapus\n", dicari);
        printf("\nAnda akan dialihkan ke menu utama\n");
        
        
        pustakawan();
        break;
    default:
        printf("\nPilihan anda tidak valid, silahkan masukkan nilai yang benar\n");
        
        
        pengaturanDendaPustakawan();
        break;
    }
}

void lihatFeedbackPustakawan()
{
    
    fh = fopen("feedback.txt", "r");
    char feedback[150];
    if (fh == NULL)
    {
        printf("\nTidak ada feedback dari customer\n");
        fclose(fh);
        pustakawan();
    }
    printf("\n=====Halaman Feedback=====\n");
    while (fgets(feedback, sizeof(feedback), fh) != NULL)
    {
        printf("%s", feedback);
    }
    fclose(fh);
    pustakawan();
}

void customer()
{
    printf("\n===Halo %s, Selamat Datang di Menu Library Hijau===\n", username);
    printf("1. Pengaturan Akun\n");
    printf("2. Menu Buku\n");
    printf("3. Pengembalian Buku\n");
    printf("4. Lihat Denda\n");
    printf("5. Berikan Feedback Untuk Library Hijau\n");
    printf("6. Logout\n");
    printf("Pilih Nomer Menu(1-6): ");
    scanf("%d", &menuCustomer);
    getchar();
    switch (menuCustomer)
    {
    case 1:
        pengaturanAkunCustomer();
        break;
    case 2:
        daftarBukuCustomer();
        break;
    case 3:
        pengembalianBukuCustomer();
        break;
    case 4:
        lihatDendaCustomer();
        break;
    case 5:
        tulisFeedbackCustomer();
        break;
    case 6:
        logout();
        break;
    default:
        printf("\nPilihan anda tidak valid, silahkan masukkan nilai yang benar\n");
        
        
        customer();
        break;
    }
}

void pengaturanAkunCustomer()
{
    printf("\n===Selamat Datang di Pengaturan Akun===\n");
    printf("1. Ubah Password\n");
    printf("2. Hapus Akun\n");
    printf("Pilih Nomer Menu(1-2): ");
    scanf("%d", &menuPengaturanAkunCustomer);
    getchar();
    switch (menuPengaturanAkunCustomer)
    {
    case 1:
        fh = fopen("daftarakun.dat", "rb");
        fh2 = fopen("daftarakun2.dat", "wb");
        do
        {
            printf("\nMasukkan password lama anda: ");
            gets(ubahPassword);
            if (strcmp(ubahPassword, password) != 0)
            {
                printf("Password lama anda salah\n");
                if (n > 1)
                {
                    printf("Kesempatan anda sisa %d kali lagi\n", n - 1);
                }
                else
                {
                    printf("\nKesempatan anda telah habis\nAnda akan keluar dari program\n");
                    
                    
                    fclose(fh);
                    fclose(fh2);
                    exit(0);
                }
                n--;
            }

        } while (strcmp(ubahPassword, password) != 0 && n != 0);

        printf("Masukkan password baru anda: ");
        gets(passwordBaru);
        while (fread(&akun, sizeof(akun), 1, fh) == 1)
        {
            if (strcmp(akun.username, username) != 0)
            {
                fwrite(&akun, sizeof(akun), 1, fh2);
            }
            if (strcmp(akun.username, username) == 0 && strcmp(akun.password, password) == 0)
            {
                strcpy(akun.password, passwordBaru);
                fwrite(&akun, sizeof(akun), 1, fh2);
            }
        }
        fclose(fh);
        fclose(fh2);
        remove("daftarakun.dat");
        rename("daftarakun2.dat", "daftarakun.dat");
        printf("\nAkun anda telah berhasil ganti password\nSilahkan login ulang\n");
        
        
        main();
        break;
    case 2:
        printf("Apakah anda yakin ingin menghapus akun anda?\n1. Ya\n2. Tidak\nSilahkan input 1-2: ");
        scanf("%d", &konfirmasi);
        getchar();
        switch (konfirmasi)
        {
        case 1:
            fh = fopen("daftarakun.dat", "rb");
            while (fread(&akun, sizeof(akun), 1, fh) == 1)
            {
                if (strcmp(akun.username, username) == 0)
                {
                    if (akun.denda > 0)
                    {
                        printf("\nAkun ini memiliki denda sebesar %d yang belum dibayar\nSilahkan bayar terlebih dahulu sebelum menghapus akun\n", akun.denda);
                        
                        
                        fclose(fh);
                        customer();
                    }
                }
            }
            fclose(fh);
            do
            {
                printf("\nMasukkan password lama anda: ");
                gets(ubahPassword);
                if (strcmp(ubahPassword, password) != 0)
                {
                    printf("Password lama anda salah\n");
                    if (k > 1)
                    {
                        printf("Kesempatan anda sisa %d kali lagi\n", k - 1);
                    }
                    else
                    {
                        printf("\nKesempatan anda telah habis\nAnda akan keluar dari program\n");
                        
                        
                        exit(0);
                    }
                    k--;
                }

            } while (strcmp(ubahPassword, password) != 0 && k != 0);
            fh = fopen("daftarakun.dat", "rb");
            fh2 = fopen("daftarakun2.dat", "wb");
            while (fread(&akun, sizeof(akun), 1, fh) == 1)
            {
                if (strcmp(akun.username, username) != 0)
                {
                    fwrite(&akun, sizeof(akun), 1, fh2);
                }
            }
            fclose(fh);
            fclose(fh2);
            remove("daftarakun.dat");
            rename("daftarakun2.dat", "daftarakun.dat");
            printf("\nAkun anda telah dihapus\nAnda akan keluar dari program\n");
            
            
            exit(0);
            break;
        default:
            printf("Pilihan anda tidak valid, silahkan masukkan nilai yang benar");
            break;
        case 2:
            printf("\nAnda akan dialihkan ke menu utama\n");
            
            
            fclose(fh);
            fclose(fh2);
            customer();
        }
        break;
    default:
        printf("\nPilihan anda tidak valid, silahkan masukkan nilai yang benar\n");
        
        
        pengaturanAkunCustomer();
        break;
    }
}

void daftarBukuCustomer()
{
    printf("\n===Selamat Datang di Menu Perpustakaan===\n");
    printf("1. Lihat daftar buku\n");
    printf("2. Pinjam buku\n");
    printf("Pilih nomer menu(1-2): ");
    scanf("%d", &menuDaftarBukuCustomer);
    getchar();
    switch (menuDaftarBukuCustomer)
    {
    case 1:
        
        fh = fopen("databuku.dat", "rb");
        printf("\n=====Data Buku Library Hijau=====\n");
        printf("Fiksi\n");
        printf("\tKomik\n");
        printf("\t\tManga\n");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "Manga") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        fh = fopen("databuku.dat", "rb");
        printf("\t\tAction\n");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "Action") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        printf("\tNovel\n");
        printf("\t\tFantasi\n");
        fh = fopen("databuku.dat", "rb");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "Fantasi") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        printf("\t\tRomance\n");
        fh = fopen("databuku.dat", "rb");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "Romance") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        printf("Non-Fiksi\n");
        printf("\tBuku Pelajaran\n");
        printf("\t\tIPA\n");
        fh = fopen("databuku.dat", "rb");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "IPA") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        printf("\t\tIPS\n");
        fh = fopen("databuku.dat", "rb");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "IPS") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        printf("\tBuku Ensiklopedia\n");
        printf("\t\tEnsiklopedia Indonesia\n");
        fh = fopen("databuku.dat", "rb");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "Ensiklopedia Indonesia") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        printf("\t\tEnsiklopedia Dunia\n");
        fh = fopen("databuku.dat", "rb");
        while (fread(&buku, sizeof(buku), 1, fh) == 1)
        {
            if (strcmp(buku.jenis2, "Ensiklopedia Dunia") == 0)
            {
                printf("\t\t   Judul Buku: %s\n", buku.judul);
            }
        }
        fclose(fh);
        customer();
        break;
    case 2:
        fh = fopen("databuku.dat", "rb");
        fh2 = fopen("databuku2.dat", "wb");
        fh3 = fopen("pinjambuku.dat", "ab");
        printf("Masukkan judul buku yang ingin dipinjam: ");
        gets(dicari);
        printf("\nPinjam untuk berapa hari?\n");
        printf("1. 1 Hari\n");
        printf("2. 3 Hari\n");
        printf("3. 7 Hari\n");
        printf("Pilih hari(1-3): ");
        scanf("%d", &pilihari);
        getchar();
        switch (pilihari)
        {
        case 1:
            while (fread(&buku, sizeof(buku), 1, fh) == 1)
            {
                if (strcmp(buku.judul, dicari) != 0)
                {
                    fwrite(&buku, sizeof(buku), 1, fh2);
                }
                if (strcmp(buku.judul, dicari) == 0)
                {
                    strcpy(pinjam.username, username);
                    strcpy(pinjam.kategori, buku.kategori);
                    strcpy(pinjam.jenis1, buku.jenis1);
                    strcpy(pinjam.jenis2, buku.jenis2);
                    strcpy(pinjam.judul, buku.judul);
                    pinjam.hari = 1;
                    fwrite(&pinjam, sizeof(pinjam), 1, fh3);
                }
            }
            break;
        case 2:
            while (fread(&buku, sizeof(buku), 1, fh) == 1)
            {
                if (strcmp(buku.judul, dicari) != 0)
                {
                    fwrite(&buku, sizeof(buku), 1, fh2);
                }
                if (strcmp(buku.judul, dicari) == 0)
                {
                    strcpy(pinjam.username, username);
                    strcpy(pinjam.kategori, buku.kategori);
                    strcpy(pinjam.jenis1, buku.jenis1);
                    strcpy(pinjam.jenis2, buku.jenis2);
                    strcpy(pinjam.judul, buku.judul);
                    pinjam.hari = 3;
                    fwrite(&pinjam, sizeof(pinjam), 1, fh3);
                }
            }
            break;
        case 3:
            while (fread(&buku, sizeof(buku), 1, fh) == 1)
            {
                if (strcmp(buku.judul, dicari) != 0)
                {
                    fwrite(&buku, sizeof(buku), 1, fh2);
                }
                if (strcmp(buku.judul, dicari) == 0)
                {
                    strcpy(pinjam.username, username);
                    strcpy(pinjam.kategori, buku.kategori);
                    strcpy(pinjam.jenis1, buku.jenis1);
                    strcpy(pinjam.jenis2, buku.jenis2);
                    strcpy(pinjam.judul, buku.judul);
                    pinjam.hari = 7;
                    fwrite(&pinjam, sizeof(pinjam), 1, fh3);
                }
            }
            break;
        default:
            printf("Pilihan anda tidak valid, silahkan masukkan nilai yang benar");
            break;
        }
        fclose(fh);
        fclose(fh2);
        fclose(fh3);
        remove("databuku.dat");
        rename("databuku2.dat", "databuku.dat");
        printf("\nBuku berhasil dipinjam\n");
        
        
        customer();
        break;
    default:
        printf("\nPilihan anda tidak valid, silahkan masukkan nilai yang benar\n");
        
        
        daftarBukuCustomer();
        break;
    }
}

void pengembalianBukuCustomer()
{
    printf("\n===Selamat datang di Menu Peminjaman===\n");
    printf("1. Lihat buku yang dipinjamn\n");
    printf("2. Kembalikan buku yang dipinjam\n");
    printf("Pilih menu (1-2): ");
    scanf("%d", &menuPengembalianBukuCustomer);
    getchar();
    switch (menuPengembalianBukuCustomer)
    {
    case 1:
        
        fh = fopen("pinjambuku.dat", "rb");
        printf("\n=====Data buku yang dipinjam=====");
        if (fh == NULL)
        {
            printf("\nTidak ada buku yang dipinjam\n");
            customer();
        }
        while (fread(&pinjam, sizeof(pinjam), 1, fh) == 1)
        {
            if (strcmp(pinjam.username, username) == 0)
            {
                printf("\nKategori buku: %s\n", pinjam.kategori);
                printf("Jenis 1 buku: %s\n", pinjam.jenis1);
                printf("Jenis 2 buku: %s\n", pinjam.jenis2);
                printf("Judul buku: %s\n", pinjam.judul);
                printf("Lama peminjaman: %d hari\n", pinjam.hari);
            }
        }
        printf("\n");
        fclose(fh);
        customer();
        break;
    case 2:
        fh = fopen("pinjambuku.dat", "rb");
        fh2 = fopen("pinjambuku2.dat", "wb");
        fh3 = fopen("databuku.dat", "ab");
        printf("Masukkan judul buku yang ingin dikembalikan: ");
        gets(dicari);
        while (fread(&pinjam, sizeof(pinjam), 1, fh) == 1)
        {
            if (strcmp(pinjam.judul, dicari) != 0)
            {
                fwrite(&pinjam, sizeof(pinjam), 1, fh2);
            }
            if (strcmp(pinjam.judul, dicari) == 0 && strcmp(pinjam.username, username) == 0)
            {
                pinjam.hari = 0;
                strcpy(buku.kategori, pinjam.kategori);
                strcpy(buku.jenis1, pinjam.jenis1);
                strcpy(buku.jenis2, pinjam.jenis2);
                strcpy(buku.judul, pinjam.judul);
                fwrite(&buku, sizeof(buku), 1, fh3);
            }
        }
        fclose(fh);
        fclose(fh2);
        fclose(fh3);
        remove("pinjambuku.dat");
        rename("pinjambuku2.dat", "pinjambuku.dat");
        printf("\nBuku berhasil dikembalikan\nSilahkan beri feedback untuk buku ini\n");
        
        
        beriFeedbackBukuCustomer();
        break;
    default:
        printf("\nPilihan anda tidak valid, silahkan masukkan nilai yang benar\n");
        
        
        pengembalianBukuCustomer();
        break;
    }
}

void beriFeedbackBukuCustomer()
{
    fh = fopen("feedback.txt", "a");
    char feedback[150];
    printf("\n=====Halaman Feedback=====");
    printf("\nMasukkan feedback anda kepada buku %s: ", dicari);
    gets(feedback);
    fprintf(fh, "Feedback dari %s untuk buku %s: %s\n", username, dicari, feedback);
    printf("Feedback berhasil dikirim, anda akan dialihkan ke menu utama\n");
    
    
    fclose(fh);
    customer();
}

void lihatDendaCustomer()
{
    
    fclose(fh);
    fh = fopen("daftarakun.dat", "rb");
    printf("\n=====Halaman Denda=====\n");
    while (fread(&akun, sizeof(akun), 1, fh) == 1)
    {
        if (strcmp(akun.username, username) == 0)
        {
            printf("Username: %s\n", akun.username);
            printf("Denda: %d\n\n", akun.denda);
        }
    }
    printf("\nAnda dialihkan ke menu utama\n");
    
    
    fclose(fh);
    customer();
}

void tulisFeedbackCustomer()
{
    
    fh = fopen("feedback.txt", "a");
    char feedback[150];
    printf("\n=====Halaman Feedback=====");
    printf("\nMasukkan feedback anda kepada library hijau: ");
    gets(feedback);
    fprintf(fh, "Feedback dari %s untuk Library Hijau: %s\n", username, feedback);
    printf("\nFeedback berhasil dikirim, anda akan dialihkan ke menu utama\n");
    
    
    fclose(fh);
    customer();
}

void logout()
{
    printf("\nAnda telah logout, anda akan dikeluarkan dari program\n");
    
    
    exit(1);
}