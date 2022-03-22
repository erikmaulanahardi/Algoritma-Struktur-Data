#include <stdio.h>
#include <stdlib.h>

//Nama  : Erik Maulana Hardianto
//Kelas : TC122F
//NIM   : 672021187
int item, loc, i;

struct node
{
    int data;
    struct node* next;
};
struct node *head;

void awal()
{
    //isi data di node awal
    struct node *ptr;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Masukkan data : ");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nData berhasil tersimpan di NODE awal!\n");
    }
    printf("Press any key to continue...");
    getch();
    system("cls");
}

void akhir()
{
    //isi data di node akhir
    struct node *ptr, *temp;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Masukkan data : ");
        scanf("%d", &item);
        ptr->data = item;
        if(head == NULL)
        {
            ptr->next = NULL;
            head = ptr;
            printf("Berhasil menyimpan NODE!");
        }
        else
        {
            temp = head;
            while(temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = NULL;
            printf("Berhasil menyimpan NODE akhir!");
        }
    }
    printf("\n");
    printf("Press any key to continue...");
    getch();
    system("cls");
}


void sembarang()
{
    //isi data di node sembarang
    struct node *ptr, *temp;

    ptr = (struct node *)malloc(sizeof(struct node *));
    if(ptr == NULL)
    {
        printf("OVERFLOW!");
    }
    else
    {
        printf("Masukkan data : ");
        scanf("%d", &item);
        ptr->data = item;
        printf("Mau simpan di lokasi berapa? ");
        scanf("%d", &loc);
        temp = head;
        for(i = 0; i < loc; i++)
        {
            temp = temp->next;
            if(temp == NULL)
            {
                printf("Tidak bisa simpan datamu!");
                printf("\n");
                printf("Press any key to continue...");
                getch();
                system("cls");
                return;
            }
        }
        ptr->next = temp->next;
        temp->next = ptr;
        printf("NODE berhasil tersimpan\n");
    }
    printf("\n");
    printf("Press any key to continue...");
    getch();
    system("cls");
}

void cetak()
{
    // untuk mencetak linked list
    struct node *ptr;
    ptr = head;
    if(ptr == NULL)
    {
        printf("Listnya kosong boskuhh!");
    }
    else
    {
        printf("Cetak isi list...");
        while(ptr != NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
    printf("Press any key to continue...");
    getch();
    system("cls");
}

void hapusawal()
{
    struct node *ptr;
    if(head == NULL)
    {
        printf("\nList kosong bro!\n");
    }
    else
    {
        ptr = head;
        head = ptr->next;
        free(ptr);
        printf("\nNODE awal berhasil dihapus!\n");
    }
    printf("\n");
    printf("Press any key to continue...");
    getch();
    system("cls");
}

void hapusakhir()
{
    struct node *ptr = head;
    if(head == NULL)
    {
        printf("\nList kosong bro!\n");
    }
    else
    {
        while(ptr->next->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = NULL;
        free(ptr->next);
        printf("\nNODE akhir berhasil dihapus!\n");
    }
    printf("\n");
    printf("Press any key to continue...");
    getch();
    system("cls");
}

void hapussembarang()
{
    struct node *ptr, *temp = head;
    printf("Lokasi mana yang ingin dihapus? (mulai dari 0) ");
    scanf("%d", &loc);
    if(head == NULL)
    {
        printf("\nList kosong bro!\n");
        printf("Press any key to continue...");
        getch();
        system("cls");
        return head;
    }
    else
    {
        for(i = 0; i < loc - 1; i++)
        {
            temp = temp->next;
        }
        struct node *hapus = temp->next;
        temp->next = temp->next->next;
        hapus->next = NULL;
        free(hapus);
        printf("Node di lokasi %d berhasil dihapus!", loc);
        printf("\n");
        printf("Press any key to continue...");
        getch();
        system("cls");
        return head;
    }
}
int main()
{
    int pilihan = 0;
    while(pilihan != 8)
    {
        printf("======================================\n");
        printf("****** Menu Latihan Linked List ******\n");
        printf("======================================");
        printf("\n1. Input Data Awal \n2. Input Data Akhir \n3. Input Data Sembarang \n4. Hapus Data Awal \n5. Hapus Data Akhir \n6. Hapus Data Sembarang \n7. Lihat Data Linked List\n8. KELUAR\n");
        printf("Pilihanmu? ");
        scanf("%d", &pilihan);
        system("cls");
        switch(pilihan)
        {
            case 1:
            awal();
            break;

            case 2:
            akhir();
            break;

            case 3:
            sembarang();
            break;

            case 4:
            hapusawal();
            break;

            case 5:
            hapusakhir();
            break;

            case 6:
            hapussembarang();
            break;

            case 7:
            cetak();
            break;

            case 8:
            exit(0);
            break;

            default:
            printf("Silakan pilih input yang benar!\n");

        }
    }
}
