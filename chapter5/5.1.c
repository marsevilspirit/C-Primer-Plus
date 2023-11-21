#include <stdio.h>
#define MINUTES 60

int main(void)
{
    int m = 0, hour, minutes;

    printf("Please enter a number for minute (<= 0 to quit): ");
    while ((scanf("%d", &m) == 1) && (m > 0))
    {
        hour = m / MINUTES;
        minutes = m % MINUTES;
        printf("%d minutes = %d hours and %d minutes.\n", m, hour, minutes);
        printf("You can enter again (<= 0 to quit): ");
    }
    printf("Done.\n");

    return 0;
}
