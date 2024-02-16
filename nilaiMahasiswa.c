#include <stdio.h>

int main()
{
    int jmlMahasiswa;
    printf("Jumlah mahasiswa: ");
    scanf("%d", &jmlMahasiswa);
    getchar();
    putchar('\n');

    int nilai[jmlMahasiswa];

    for (int i = 0; i < jmlMahasiswa; i++)
    {
        printf("%-20s%d: ", "Nilai mahasiswa ke-", i + 1);
        scanf("%d", &nilai[i]);
    }

    putchar('\n');

    for (int i = 0; i < jmlMahasiswa; i++)
    {
        if (nilai[i] < 65)
        {
            printf("Mahasiswa ke-%d: Tidak lulus\n", i + 1);
        }
        else
        {
            printf("Mahasiswa ke-%d: Lulus\n", i + 1);
        }
    }
    return 0;
}
