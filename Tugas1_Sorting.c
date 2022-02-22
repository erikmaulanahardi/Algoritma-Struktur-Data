#include <stdio.h>
#include <stdlib.h>

// IDENTITAS DIRI
// Nama : Erik Maulana Hardianto
// NIM  : 672021187
// Kelas: TC121F

int array[100], array2[100], size;

void swap(int *a, int *b)
{
    int tempo = *a;
    *a = *b;
    *b = tempo;
}

void input()
{
    system("cls");
    printf("Input data yang anda inginkan : ");
    scanf("%d", &size);
    for(int i = 0; i < size; i++)
    {
        printf("Input data anda yang ke - %d : ", (i+1));
        scanf("%d", &array[i]);
        array2[i] = array[i];
    }
    printf("\n");
    printf("Proses Input Data selesai!\n");
    printf("Tekan tombol apapun untuk kembali ke menu awal...");
    getch();
    main();
}

void insertion_sort()
{
    system("cls");
    int temp,i, j;
    for(i = 1; i < size; i++)
    {
        temp = array[i];
        j = i - 1;
        while(array[j] > temp && j >= 0)
        {
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
    printf("Proses Insertion Sort selesai!\n");
    printf("Tekan tombol apapun untuk kembali ke menu awal...");
    getch();
    main();
}

void selection_sort()
{
    system("cls");
    for(int i = 0; i < size-1;i++)
    {
        int min_idx = i;
        for(int j = i+1; j < size;j++)
        {
            if(array[j] < array[min_idx])
            min_idx = j;
        }
        swap(&array[min_idx], &array[i]);
    }
    printf("Proses Selection Sort selesai!\n");
    printf("Tekan tombol apapun untuk kembali ke menu awal...");
    getch();
    main();
}

void bubble_sort()
{
    system("cls");
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - i - 1; j++)
        {
            if(array[j] > array [j+1])
            swap(&array[j],&array[j+1]);
        }
    }
    printf("Proses Bubble Sort selesai!\n");
    printf("Tekan tombol apapun untuk kembali ke menu awal...");
    getch();
    main();
}

void exchange_sort()
{
    system("cls");
    for(int i = 0; i < size-1; i++)
    {
        for(int j = i+1; j < size; j++)
        {
            if(array[j] < array[i])
            swap(&array[j],&array[i]);
        }
    }
    printf("Proses Exchange Sort selesai!\n");
    printf("Tekan tombol apapun untuk kembali ke menu awal...");
    getch();
    main();
}

void cetak()
{
    system("cls");
    printf("Angka Ascending : \n");
    for(int i = 0; i < size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Tekan tombol apapun untuk kembali ke menu awal...");
    getch();
    main();
}

int main()
{
        int opsi;
        system("cls");
        puts("==============");
        puts("|Menu Sorting|");
        puts("==============\n");
        puts("1. Input Data");
        puts("2. Bubble Sort");
        puts("3. Exchange Sort");
        puts("4. Selection Sort");
        puts("5. Insertion Sort");
        puts("6. Cetak Data");
        puts("7. Exit\n");
        printf("Silakan input menu anda : ");
        scanf("%d", &opsi);

        switch(opsi)
        {
            case 1 : input(); break;
            case 2 : bubble_sort(); break;
            case 3 : exchange_sort(); break;
            case 4 : selection_sort(); break;
            case 5 : insertion_sort(); break;
            case 6 : cetak(); break;    
        }
   if(opsi < 1 || opsi > 7)
   main();

return (0);
}
