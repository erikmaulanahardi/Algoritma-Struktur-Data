#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main();
void pilihan1();
void pilihan2();
void pilihan3();

void pilihan1(){
        char nama[50],nim[50],matkul[50];
        int nilai;
            system("cls");
            printf("=---=-=-=-=-=-=-=-=-=-=--=\n");
            printf("|PROGRAM KELULUSAN MATKUL|\n");
            printf("=---=-=-=-=-=-=-=-=-=-=--=\n");
            printf("Masukkan Nama: ");
            scanf("%s", nama);
            printf("\n");
            printf("Masukkan NIM: ");
            scanf("%s", nim);
            printf("\n");
            printf("Masukkan Matkul: ");
            scanf("%s", matkul);
            printf("\n");
            printf("Masukkan Nilai (0-100): ");
            scanf("%d", &nilai);
            printf("\n\n");

        if(nilai < 0 || nilai > 100){
            printf("Input nilai anda berada di luar batas!\n\n");
            printf("Tekan tombol apapun untuk mengulang......");
            getch();
            system("cls");
            pilihan1();
        }
        if(nilai <= 100 && nilai >= 85){
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("|Selamat %s, anda lulus di mata kuliah %s dengan mendapatkan nilai A\n", nama, matkul);
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
        }
        else if(nilai <= 84 && nilai >= 80){
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
            printf("|Selamat %s, anda lulus di mata kuliah %s dengan mendapatkan nilai AB|\n", nama, matkul);
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n\n");
        }
        else if(nilai <= 79 && nilai >= 75){
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Selamat %s, anda lulus di mata kuliah %s dengan mendapatkan nilai B\n", nama, matkul);
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
        }
        else if(nilai <= 74 && nilai >= 70){
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Selamat %s, anda lulus di mata kuliah %s dengan mendapatkan nilai BC\n", nama, matkul);
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
        }
        else if(nilai <= 69 && nilai >= 65){
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Selamat %s, anda lulus di mata kuliah %s dengan mendapatkan nilai C\n", nama, matkul);
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
        }
        else if(nilai <= 64 && nilai >= 60){
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Mohon maaf %s, anda tidak lulus di mata kuliah %s dengan mendapatkan nilai CD\n", nama, matkul);
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
        }
        else if(nilai <= 59 && nilai >= 55){
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Mohon maaf %s, anda tidak lulus di mata kuliah %s dengan mendapatkan nilai D\n", nama, matkul);
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
        }
        else {
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("Mohon maaf %s, anda tidak lulus di mata kuliah %s dengan mendapatkan nilai E\n", nama, matkul);
            printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
        }

         printf("Tekan tombol apapun untuk kembali ke menu utama......");
         getch();
         system("cls");
         main();
}

void pilihan2(){
    system("cls");
    int a,b,c,d,e,cinta;
    printf("=-=-=-=-=-=-=-=\n");
    printf("|PROGRAM CINTA|\n");
    printf("=-=-=-=-=-=-=-=\n");
    printf("Seberapa besar cintamu? ");
    scanf("%d", &cinta);
    // 2 segitiga kecil bagian atas
    for(a=1; a<=cinta; a++)
    {
        for(b=1; b<=cinta-a; b++)
        {
            printf(" ");
        }
        for(c=1; c<=2*a-1; c++)
        {
            printf("-");
        }
        for(d=1; d<=2*(cinta-a); d++)
        {
            printf(" ");
        }
        for(e=1; e<=2*a-1; e++)
        {
            printf("-");
        }
        printf("\n");
    }
    // 1 segitiga besar bagian bawah
    for(a=2*cinta-1; a>=1; a--)
    {
        for(b=1; b<=2*cinta-a-1; b++)
        {
            printf(" ");
        }
        for(c=1; c<=2*a; c++)
        {
            printf("-");
        }
        printf("\n");
    }
    if(cinta > 5)
    {
        puts("Yakin secinta itu sama dia? Tapi dia udah ada yang punya:')\n");
    }
    else if(cinta == 5)
    {
        puts("Cintamu sempurna, semoga ga disia-siain sama doi ya!!\n");
    }
    else if(cinta == 4)
    {
        puts("Terkadang kita memang harus membatasi rasa cinta, tapi kalau dirasa nyaman ya dipertahankan!\n");
    }
    else if(cinta == 3)
    {
        puts("Terkadang kita memang harus membatasi rasa cinta, takut juga kalo dihantuing hikshikshiks :')\n");
    }
    else if(cinta <= 2)
    {
         puts("Kalo ga mau diseriusin, udahin aja deh ya!\n");
    }
    printf("Tekan tombol apapun untuk kembali ke menu utama......");
    getch();
    system("cls");
    main();
}

void main() {

    int opsi;
    printf("================================\n");
    printf("|         |TUGAS ASD |         |\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=|\n");
    printf("|         |MENU UTAMA|         |\n");
    printf("================================\n\n");

    printf("=====================================\n");
    printf("|1. Cek Kelulusan Matkul            |\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("|2. Cinta                           |\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-|\n");
    printf("|3. Keluar                          |\n");
    printf("=====================================\n");
    printf("Pilih menu yang diinginkan: ");
    scanf("%d", &opsi);


    if(opsi < 1 || opsi > 3){
        printf("\n");
        puts("Maaf input anda tidak ada di menu!");
        printf("Tekan tombol apapun untuk mengulang....");
        getch();
        system("cls");
        main();
    }
    switch(opsi)
    {
        case 1 :
            pilihan1();
            break;
        case 2:
            pilihan2();
            break;
        case 3:
            exit(0);
            break;
    }

}
