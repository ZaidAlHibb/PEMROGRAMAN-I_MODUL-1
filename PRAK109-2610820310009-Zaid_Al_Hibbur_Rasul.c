#include <stdio.h>

int main()
{
    int pasukan = 958730;
    
    char *pahlawan[] = {"Zilong", "Ling", "Baxia", "Wanwan", "Chang'e"};
    int jumlah_pahlawan = sizeof(pahlawan) / sizeof(pahlawan[0]);
    int pasukan_per_pahlawan = pasukan / jumlah_pahlawan;

    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n\n", pasukan);
    printf("Jumlah pahlawan = %d\n\n", jumlah_pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan", pasukan_per_pahlawan);

    return 0;
}
