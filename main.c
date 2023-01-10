#include <stdio.h>
#include <stdlib.h>

void menu_dipilih( int x )
{
    int harga,jumlah;
    if (x == 1 ){

        harga = 5000;
        printf (" || Anda Memilih Roti Bakar Keju dengan Harga Rp.%d/pcs\n",harga);
    }else if (x == 2 ){
        harga = 7500;
        printf (" || Anda Memilih Nasi Jengkol dengan Harga Rp.%d/pcs\n",harga);
    }else if (x == 3 ){
        harga = 8000;
        printf (" || Anda Memilih Nasi Ayam Balado dengan Harga Rp.%d/pcs\n",harga);
    }else if (x == 4 ) {
        harga = 12000;
        printf (" || Anda Memilih Nasi Bakar Mozarella dengan Harga Rp.%d/pcs\n",harga);
    }else if (x == 5 ) {
        harga = 10000;
        printf (" || Anda Memilih Nasi Pecel Tumpang dengan Harga Rp.%d/pcs\n",harga);
    }else if (x == 6 ) {
        harga = 3000;
        printf (" || Anda Memilih Es Teh dengan Harga Rp.%d/pcs\n",harga);
    }else if (x == 7 ) {
        harga = 7000;
        printf (" || Anda  Memilih Es Jus dengan Harga Rp.%d/pcs\n",harga);
    }else if (x == 8 ) {
        harga = 6000;
        printf (" || Anda Memilih Es Teh Tarik dengan Harga Rp.%d/pcs\n",harga);
    }else if (x == 9 ) {
        harga = 5000;
        printf (" || Anda Memilih Es Degan Susu Madu dengan Harga Rp.%d/pcs\n",harga);
    }else if (x == 10 ) {
        harga = 3500;
        printf (" || Anda Memilih Es Jeruk dengan Harga Rp.%d/pcs\n",harga);
    }else {
        printf (" || Barang yang anda Masukkan Salah\n");
        return 0;

    }

    printf (" || Masukkan jumlah : ");
    scanf ("%d",&jumlah);
    totalan(jumlah,harga);

}

void totalan(int x,int y){

    int total,total_diskon;

    if (x > 5 && x <= 10){
        total = y*x;
        printf ("\n =========================================================================="
                "\n ||----------------------------------------------------------------------||"
                "\n ||   > > > > >     SELAMAT ANDA MENDAPATKAN DISKON 15%%     < < < < <    ||"
                "\n ||----------------------------------------------------------------------||"
                "\n ==========================================================================");
        total_diskon = total - total/100*15;
        printf ("\n ||        $ $ $     Dari Rp.%d  ===> Menjadi %d     $ $ $         ||"
                "\n ==========================================================================\n",total,total_diskon);
    }else if (x > 10){

        total = y*x;
        printf ("\n =========================================================================="
                "\n ||----------------------------------------------------------------------||"
                "\n ||   > > > > >     SELAMAT ANDA MENDAPATKAN DISKON 20%%     < < < < <    ||"
                "\n ||----------------------------------------------------------------------||"
                "\n ==========================================================================");
        total_diskon = total - total/100*20;
        printf ("\n ||        $ $ $     Dari Rp.%d  ===> Menjadi %d     $ $ $         ||"
                "\n ==========================================================================\n",total,total_diskon);
    }else {
        total = y*x;
        printf ("\n || Total Harga = Rp.%d\n",total);
    }
}


int main()
{
    char ulang;
do{
    int pilihan;
    system("color e");
    printf (" ==========================================================================\n"
            " |$|      $     $   $ $$$$$$ $  $ $$$$  $ $   $ $$$$$$     $     $   $  |$|\n"
            " |$|     $ $    $$  $ $      $ $  $   $ $ $$  $ $         $ $    $$  $  |$|\n"
            " |$|    $   $   $ $ $ $  $$$ $$   $$$$  $ $ $ $ $  $$$   $   $   $ $ $  |$|\n"
            " |$|   $ $ $ $  $  $$ $    $ $ $  $  $  $ $  $$ $    $  $ $ $ $  $  $$  |$|\n"
            " |$|  $       $ $   $ $$$$$$ $  $ $   $ $ $   $ $$$$$$ $       $ $   $  |$|\n"
            " ==========================================================================\n\n"
            " ==========================================================================\n"
            " || < < < < <          SELAMAT DATANG DI ANGKRINGAN            > > > > > || \n"
            " ||======================================================================||\n"
            " ||               > > > > >    MENU PESANAN     < < < < <                ||\n"
            " ||======================================================================||\n");

    char menu [15][84] = {" || 1 |Roti Bakar Keju      : Rp.7500      | 6 | Es Teh        : Rp.3000 ||\n",
                          " || 2 |Nasi Jengkol         : Rp.5000      | 7 | Es Jus        : Rp.7000 ||\n",
                          " || 3 |Nasi Ayam Balado     : Rp.8000      | 8 | Es Kopi       : Rp.6000 ||\n",
                          " || 4 |Nasi Bakar Mozarella : Rp.12000     | 9 | Es Degan      : Rp.5000 ||\n",
                          " || 5 |Nasi Pecel Tumpang   : Rp.10000     | 10| Es Jeruk      : Rp.3500 ||\n"};

    for (int a = 0; a<5; a++){
        printf ("%s",menu[a]);
    }
    printf (" ==========================================================================\n");
    printf (" || Masukkan Menu yang Anda Inginkan : ");
    scanf  ("%d",&pilihan);

    puts(" ");
    menu_dipilih(pilihan);

    printf ("\n || Ingin Memilih Menu Lagi : ");
    printf ("\n || y / t : ");
    scanf (" %c",&ulang);

    system ("cls");

} while (ulang == 'y');
    printf ("===============================================================\n"
            "---------------------------------------------------------------\n"
            "   >>>>>> TERIMAKASIH SUDAH MAMPIR DI ANGKRINGAN KAMI <<<<<<   \n"
            "---------------------------------------------------------------\n"
            "===============================================================\n");

    return 0;
}
