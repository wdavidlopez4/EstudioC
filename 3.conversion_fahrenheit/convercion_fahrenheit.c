#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;

    printf("celsius, fahrenheit  \n");

    while(celsius <= upper)
    {
        fahr = 32 + (9.0/5.0 * celsius);
        printf("%3.0f  \t %6.2f  \n", celsius, fahr);

        celsius = celsius + step;
    }

}