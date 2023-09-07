#include <stdio.h>

main()
{
    float celsius;

    printf("farhenheit celsius \n");

    for (int fahr = 0; fahr <= 300; fahr = fahr + 20)
    {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%3d  \t %3.2f \n", fahr, celsius);
    }
}