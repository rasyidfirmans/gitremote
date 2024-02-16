#include <stdio.h>

int main()
{
    char nama[101];
    int nilai;

    printf("%-7s: ", "Nama");
    fgets(nama, sizeof(nama), stdin);

    printf("%-7s: ", "Nilai");
    scanf("%d", &nilai);
}
