#include <stdio.h>

int main(void)
{
    int i = 1;
    int friends = 5;

    while (friends < 150)
    {
        printf("At %d weeks, Rabnud has", i);
        friends = 2 * (friends - i++);
        printf("%4d friends.\n", friends);
    }
    printf("At %d weeks, over Dunbar's number(150).\n", i);

    return 0;
}
