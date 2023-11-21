#include <stdio.h>
#define INCH 2.54
#define FEET 30.48

int main(void)
{
    int feet;
    double cm, inch;

    printf("Enter a height in centimeters: ");
    while ((scanf("%lf", &cm) == 1) && (cm > 0))
    {
        feet = (int)(cm / FEET);
        inch = (cm - FEET * feet) / INCH;
        printf("%.1f cm = %d feet, %.1f inches\n", cm, feet, inch);
        printf("Enter a height in centimeters (<=0 to quit): ");
    }
    printf("bye\n");

    return 0;
}
