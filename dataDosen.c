#include <stdio.h>
#include <stdlib.h>

typedef struct dataDosen
{
    char nama[101];
    char nip[10];
} dataDosen;

int main()
{
    int jmlDosen;
    printf("Jumlah dosen: ");
    scanf("%d", &jmlDosen);
    getchar();

    dataDosen *dosen;
    dosen = (dataDosen *)malloc(jmlDosen * sizeof(dataDosen));

    for (int i = 0; i < jmlDosen; i++)
    {
        printf("%-7s: ", "Nama");
        fgets(dosen->nama, sizeof(dosen->nama), stdin);

        printf("%-7s: ", "NIP");
        fgets(dosen->nip, sizeof(dosen->nip), stdin);

        putchar('\n');
    }
}