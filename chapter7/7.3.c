#include <stdio.h>

int main(void)
{
    int n, odd = 0, even = 0;
    int e_sum = 0, o_sum = 0;

    printf("Please enter a integer (0 to quit): ");
    while (scanf("%d", &n) == 1 && n)
    {
        (n % 2 ? (++odd, o_sum += n) : (++even, e_sum += n));
        printf("You can enter again (0 to quit): ");
    }
    printf("Even number: %d\n", even);
    if (even > 0)
    {
        printf("The average of even: %g\n", (float)e_sum / even);
    }
    printf("Odd number: %d\n", odd);
    if (odd > 0)
    {
        printf("The average of odd: %g\n", (float)o_sum / odd);
    }
    printf("Done.\n");

    return 0;
}
