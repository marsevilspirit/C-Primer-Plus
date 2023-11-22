#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
int main(void)
{
    char ch;
    int up, low, words, num, punct;
    up = low = words = num = punct = 0;
    bool inword = false;

    while ((ch = getchar()) != EOF) 
    {
        if (islower(ch))
            low++;
        else if (isupper(ch))
            up++;
        else if (isdigit(ch))
            num++;
        else if (ispunct(ch))
            punct++;
        if (!isspace(ch) && !inword) 
        {
            words++;
            inword = true;
        }
        if (isspace(ch) && inword) 
        {
            inword = false; 
        }
    }
    printf("\nWords: %d\n", words);
    printf("Low: %d\n", low);
    printf("Up: %d\n", up);
    printf("Num: %d\n", num);
    printf("Punct: %d\n", punct);
}
