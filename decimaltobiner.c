#include <stdio.h>

int main()
{
    int dec, hasil, tampung[10], i, arr = 0;
    printf("Masukkan bilangan decimal : ");
    scanf("%d", &dec);

    do
    {
        hasil = dec % 2;
        dec = dec / 2;

        tampung[arr] = hasil;
        arr = arr + 1;

    } while (dec > 0);

    for (i = arr - 1; i >= 0; i--)
    {
        printf("%d", tampung[i]);
    }

    return 0;
}