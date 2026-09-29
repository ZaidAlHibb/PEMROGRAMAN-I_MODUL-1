#include <stdio.h>
#include <math.h>

int main()
{
    int c = 5;  
    int a = 12; 
    int b = sqrt(pow(c, 2) + pow(a, 2));

    int keliling = c + a + b;
    int luas = (c * a) / 2;
    
    printf("Diketahui :\n\n");
    printf("Alas = %d cm\n\n", c);
    printf("Tinggi = %d cm\n\n\n", a);
    
    printf("Jawab :\n\n");
    printf("Sisi A = %d cm\n\n", a);
    printf("Sisi B = %d cm\n\n", b);
    printf("Sisi C = %d cm\n\n", c);
    printf("Keliling = %d cm\n\n", keliling);
    printf("Luas = %d cm", luas);

    return 0;
}