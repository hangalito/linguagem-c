#include <stdio.h>

main()
{
    float raio, perimetro;
    double Pi = 3.1415827, area;

    printf("Introduza o raio da circunferencia: ");
    scanf("%f", &raio);
    area = Pi * raio * raio;
    perimetro = 2 * Pi * raio;

    printf("Area = %f\nPerimetro = %f\n", area, perimetro);
}
