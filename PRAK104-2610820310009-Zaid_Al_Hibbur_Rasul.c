#include <stdio.h>

int main()
{
    float A = 400000; float B = 350000;
    float PersenA = 13; float PersenB = 21;

    float DiskonA = A * (1 - (PersenA / 100));
    float DiskonB = B * (1 - (PersenB / 100));

    printf("Harga sepatu A adalah %.f\n\n", A);
    printf("Harga sepatu B adalah %.f\n\n", B);
    printf("Sepatu A mendapat diskon %.0f%% sehingga harganya menjadi %.f\n\n", PersenA, DiskonA);
    printf("Sepatu B mendapat diskon %.0f%% sehingga harganya menjadi %.f", PersenB, DiskonB);
    return 0;
}