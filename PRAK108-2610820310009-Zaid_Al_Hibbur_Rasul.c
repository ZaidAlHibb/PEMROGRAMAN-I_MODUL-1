 #include <stdio.h>

int main()
{
    int putaran = 5;
    float jarak_total = 14;
    float pi = 3.14;

    float keliling_taman = jarak_total / putaran;
    float jari_jari = keliling_taman / (2 * pi);

    printf("Diketahui :\n\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n\n\n", jarak_total);
    
    printf("Jawaban :\n\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer", jari_jari);
    return 0;
}