#include <stdio.h>
#include <stdlib.h>

typedef struct dataMahasiswa
{
    char nama[101];
    int nilai;
} dataMahasiswa;

int main()
{
    int jmlMahasiswa;
    printf("Banyak mahasiswa: ");
    scanf("%d", &jmlMahasiswa);
    getchar();

    dataMahasiswa *mahasiswa;
    mahasiswa = (dataMahasiswa *)malloc(jmlMahasiswa * sizeof(dataMahasiswa));

    for (int i = 0; i < jmlMahasiswa; i++)
    {
        printf("%-7s: ", "Nama");
        fgets(mahasiswa->nama, sizeof(mahasiswa->nama), stdin);

        printf("%-7s: ", "Nilai");
        scanf("%d", &mahasiswa->nilai);
        getchar();

        putchar('\n');
    }
}
