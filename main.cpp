#include <stdio.h>
#include <windows.h>

using namespace std;

 int  pilihan, jenisBarang, merek, ukuran, totalBayar, jumlahBarang, Total, harga, jumlahUang, pembayaran, bayar, kembalian, totalHarga, cobaBayar = 0, tanya;
   char username[50],password[10],nama[500];
   int login=0, coba=0;
    int  menu;

void cetak() {
    system("cls");
    printf("|=========================================|\n");
    printf("|              Sport Station              |\n");
    printf("|=========================================|\n");
    printf("\n   Nama Barang: %s", nama);
    printf("\n   Pembayaran: %i", bayar);
    printf("\n   Kembalian: %i", kembalian);
    printf("\n|=========================================|");
    printf("\n|=============TERIMA KASIH================|");
    printf("\n|=========================================|");

}

    void totalbayar() {
        printf("\t\t\t\t  |==================================|\n");
        printf("\t\t\t\t       Masukkan Nama Barang : ");
        scanf("i", &nama );
        printf("\t\t\t\t       masukkan jumlah barang : ");
        scanf("%i", &jumlahBarang );
        totalBayar = jumlahBarang * harga;
        printf("\t\t\t\t  |==================================|\n");
        printf("\t\t\t\t    Total yang harus di bayar %i", totalBayar);
        printf("\t\t\t\t\t\t  |==================================|\n");
                do{
                    if(cobaBayar> 0)
                    {
                    printf("\nUang anda kurang inputkan kembali");
                    }
                printf("\n\t\t\t\t  |==================================|\n");
                printf("\t\t\t\t      Masukan Uang Pembayaran:\n\t\t\t\t\t\t  ");
                scanf("%i", &bayar);
                kembalian = bayar - totalBayar;
                cobaBayar++;
                }
                while(kembalian<0);
                printf("kembali: %i", kembalian);

    while ( tanya == 'y' );
    cetak();
    }

    void basketA() {
    do {
        system("cls");

        tanya = 't';

        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  |        Menu pilihan merek        |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  | 1. Puma ( 400.000 )              |\n" );
        printf ( "\t\t\t\t  | 2. Nike ( 650.000 )              |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t\t   Pilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                harga = 400000;
                totalbayar();
            break;
            case 2:
                harga = 650000;
                totalbayar();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}

void bolaSepak() {
    do {
        system("cls");

        tanya = 't';

        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  |        Menu pilihan merek        |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  | 1. Adidas ( 340.000 )            |\n" );
        printf ( "\t\t\t\t  | 2. League ( 430.000 )            |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t\t   Pilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                harga = 340000;
                totalbayar();
            break;
            case 2:
                harga = 4300000;
                totalbayar();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}

void voli() {
    do {
        system("cls");

        tanya = 't';

        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  |      Menu pilihan merek          |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  | 1. Nike ( 330.000 )              |\n" );
        printf ( "\t\t\t\t  | 2. Puma ( 240.000 )              |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t\t   Pilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                harga = 330000;
                totalbayar();
            break;
            case 2:
                harga = 240000;
                totalbayar();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}


void renang() {
    do {
        system("cls");

        tanya = 't';

        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  |        Menu pilihan Ukuran       |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  | 1. Anak-anak ( 120.000 )         |\n" );
        printf ( "\t\t\t\t  | 2. Dewasa ( 200.000 )            |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t   Pilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                harga = 120000;
                totalbayar();
            break;
            case 2:
                harga = 200000;
                totalbayar();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}

void basket() {
    do {
        system("cls");

        tanya = 't';

        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  |      Menu pilihan Ukuran         |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  | 1. Anak-anak ( 70.000 )          |\n" );
        printf ( "\t\t\t\t  | 2. Dewasa ( 100.000 )            |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t\t   Pilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                harga = 70000;
                totalbayar();
            break;
            case 2:
                harga = 100000;
                totalbayar();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}

void training() {
    do {
        system("cls");

        tanya = 't';

        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  |     Menu pilihan Ukuran          |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  | 1. Anak-anak ( 75.000 )          |\n" );
        printf ( "\t\t\t\t  | 2. Dewasa ( 125.000 )            |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t\t   Pilih menu :" );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                harga = 75000;
                totalbayar();
            break;
            case 2:
                harga = 125000;
                totalbayar();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}



    void ukuranNike() {
    do {
        system("cls");

        tanya = 't';

        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  |    Menu pilihan Ukuran           |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  | 1. 40 ( 350.000)                 |\n" );
        printf ( "\t\t\t\t  | 2. 41 (320.000)                  |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t\t   Pilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                harga = 350000;
                totalbayar();
            break;
            case 2:
                harga = 320000;
                totalbayar();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}

void ukuranAdidas() {
    do {
        system("cls");

        tanya = 't';

        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  |     Menu pilihan Ukuran          |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  | 1. 39 ( 400.000)                 |\n" );
        printf ( "\t\t\t\t  | 2. 40 (360.000)                  |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t\t   Pilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                harga = 400000;
                totalbayar();
            break;
            case 2:
                harga = 360000;
                totalbayar();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}

void ukuranPuma() {
    do {
        system("cls");

        tanya = 't';

        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  |       Menu pilihan Ukuran        |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  | 1. 41 ( 550.000)                 |\n" );
        printf ( "\t\t\t\t  | 2. 42 (560.000)                  |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t\t   Pilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                harga = 550000;
                totalbayar();
            break;
            case 2:
                harga = 560000;
                totalbayar();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}

    void campuran() {
    do {
        system("cls");

        tanya = 't';

        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  |    Menu pilihan merek            |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  | 1. Nike                          |\n" );
        printf ( "\t\t\t\t  | 2. Adidas                        |\n" );
        printf ( "\t\t\t\t  | 3. Puma                          |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t\t  Pilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                ukuranNike();
            break;
            case 2:
                ukuranAdidas();
            break;
            case 3:
                ukuranPuma();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}

void sepatu() {
    do {
        system("cls");

        tanya = 't';

        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  |    Menu pilihan Jenis Sepatu     |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  | 1. Sepatu sepak bola             |\n" );
        printf ( "\t\t\t\t  | 2. Sepatu basket                 |\n" );
        printf ( "\t\t\t\t  | 3. Sepatu Jogging                |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t\t  Pilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                campuran();
            break;
            case 2:
                campuran();
            break;
            case 3:
                campuran();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}

void pakaian() {
    do {
        system("cls");

        tanya = 't';

        printf("\n\n\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  |  Menu pilihan Jenis Pakaian      |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t  | 1. Renang                        |\n" );
        printf ( "\t\t\t\t  | 2. Basket                        |\n" );
        printf ( "\t\t\t\t  | 3. Training                      |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ( "\t\t\t\t \tPilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                renang();
            break;
            case 2:
                basket();
            break;
            case 3:
                training();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}

void bola() {
    do {
        system("cls");

        tanya = 't';

        printf("\n\n\t\t\t\t  |==================================|\n");
        printf ("\t\t\t\t  |     Menu pilihan Jenis Bola      |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf("\t\t\t\t  |==================================|\n");
        printf ("\t\t\t\t  | 1. Basket                        |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ("\t\t\t\t  | 2. Bola sepak                    |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf ("\t\t\t\t  | 3. Voli                          |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf("\t\t\t\t  |==================================|\n\n");
        printf ("\t\t\t\t   Pilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                basketA();
            break;
            case 2:
                bolaSepak();
            break;
            case 3:
                voli();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}

void lain() {
    do {
        system("cls");

        tanya = 't';
        printf("\n\n\t\t\t\t  |==================================|\n");
        printf ("\t\t\t\t  |      Menu Pilihan Lain-Lain      |\n " );
        printf("\t\t\t\t  |==================================|\n");
        printf("\t\t\t\t  |==================================|\n");
        printf ("\t\t\t\t  |   1. Alat Fitnes ( 1.180.000)    |\n" );
        printf ("\t\t\t\t  |   2. Alat Barbel ( 890.000)      |\n" );
        printf("\t\t\t\t  |==================================|\n");
        printf("\t\t\t\t  |==================================|\n\n");
        printf ("\t\t\t\t   Pilih menu :  " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                harga = 1180000;
                totalbayar();
            break;
            case 2:
                harga = 890000;
                totalbayar();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}


void utama(){
system("cls");
    do {
        tanya = 't';

        printf("\t\t\t\t  #######################\n");
        printf("\t\t\t\t  # Anda Berhasil Masuk #\n");
        printf("\t\t\t\t  #######################\n\n\n");

        printf("\t\t\t|****************************************|\n");
        printf("\t\t\t| SELAMAT DATANG DI PROGRAM SPORTSTATION |\n");
        printf("\t\t\t|****************************************|\n\n\n");

        printf("\t\t\t\t  |-----------------------|\n");
        printf ( "\t\t\t\t  | <<Menu Jenis Barang>> |\n" );
        printf("\t\t\t\t  |-----------------------|\n");
        printf("\t\t\t\t  |-----------------------|\n");
        printf ( "\t\t\t\t  |  1. Sepatu            |\n" );
        printf ( "\t\t\t\t  |  2. Pakaian           |\n" );
        printf ( "\t\t\t\t  |  3. Bola              |\n" );
        printf ( "\t\t\t\t  |  4. Lain-lain         |\n" );
        printf("\t\t\t\t  |-----------------------|\n");
        printf ( "\t\t\t\t   Pilih menu : " );
        scanf ( "%i", &menu );

        switch ( menu ) {
            case 1:
                sepatu();
            break;
            case 2:
                pakaian();
            break;
            case 3:
                bola();
            break;
            case 4:
                lain();
            break;
            default :
                printf ("Menu salah, apakah anda ingin mengulangi? (y/n) ");
                scanf ( "%s", &tanya );
            break;
        }
    } while ( tanya == 'y' );
}


int main()
    {

