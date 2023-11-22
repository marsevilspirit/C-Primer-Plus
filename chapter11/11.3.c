#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
char * select_word(char * str)
{
    char * word = (char *)malloc(50*sizeof(char));
    int j = 0;
    int i;
    for(i = 0; i < 50; i++) 
    {
        if(!isspace(str[i]))
            break;
    }
    for (int k = i; !isspace(str[k]); k++) 
    {
        word[j] = str[k];
        j++;
    }
    word[j] = '\0';
    return word;
}
int main(void)
{
    char str[50];
    fgets(str,50,stdin);
    char * selectword = select_word(str);
    printf("%s\n",selectword);
    free(selectword);
}
