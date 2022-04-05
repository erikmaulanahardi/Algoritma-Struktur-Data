#include <stdio.h>
#define MAX 3

typedef struct
{
    int data[MAX];
    int head;
    int tail;
} Queue;

Queue antri;


void Awal()
{
    antri.head = antri.tail = -1;
}

int Empty()
{
    if(antri.tail == -1)
        return 1;
    else
        return 0;
}

int Full()
{
    if(antri.tail == MAX - 1)
        return 1;
    else
        return 0;
}

void Enqueue(int data)
{
    if(Empty() == 1)
    {
        antri.head = antri.tail = 0;
        antri.data[antri.tail] = data;
        printf("%d masuk", antri.data[antri.tail]);
        void Tampil()
        {
            if(Empty() == 0)
            {
                for(int i = antri.head; i <= antri.tail; i++)
                {
                    printf("%d ", antri.data[i]);
                }
            }
            else
            {
                printf("Antrian kosong!");
            }
        }
    }
    else if(Full() == 0)
    {
        antri.tail++;
        antri.data[antri.tail] = data;
        printf("%d masuk", antri.data[antri.tail]);
    }
}

int Dequeue()
{
    int d = antri.data[antri.head];
    for(int i = antri.head; i <= antri.tail - 1; i++)
    {
        antri.data[i] = antri.data[i + 1];
    }
    antri.tail--;
    return d;
}
void Tampil()
{
    if (Empty() == 0)
            {
                for(int i = antri.head; i <= antri.tail; i++)
                {
                    printf("%d ", antri.data[i]);
                }
            }
            else
            {
                printf("Antrian kosong!");
            }
}

void Delete()
{
    antri.head = antri.tail = -1;
    printf("Data dalam antrian telah bersih!");
}

int main()
{
    int pilih, data;
    Awal();
    do
    {
        printf("\n\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. View Queue\n");
        printf("4. Delete Queue\n");
        printf("5. Exit\n");
        printf("Pilihan anda? ");
        scanf("%d", &pilih);
        switch(pilih)
        {
            case 1: printf("Data = ");
                    scanf("%d", &data);
                    Enqueue(data);
            break;

            case 2:
                    printf("Data yang keluar: %d", Dequeue());

            break;

            case 3:
                    Tampil();
            break;

            case 4:
                    Delete();
            break;

        }
    }
    while(pilih != 5);
}
