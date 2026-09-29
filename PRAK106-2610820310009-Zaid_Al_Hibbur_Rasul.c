#include <stdio.h>

int main()
{
    int a = 4; int b = 8; int c = 3;
    int hasil;
    
    printf("Variabel a bernilai %d\n\n", a);
    printf("Variabel b bernilai %d\n\n", b);
    printf("Variabel c bernilai %d\n\n", c);
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n\n", a == b);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n\n", b > c);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d", a != c);
    return 0;
}