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
    return 0;
}
