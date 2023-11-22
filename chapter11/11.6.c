#include <stdio.h>
#include <stdbool.h>

bool is_within(char ch, char * str)
{
   for(int i = 0; str[i] != '\0'; i++)
   {
        if(ch == str[i])
        {
            printf("have!\n");
            return true;
        }
   }
   printf("none!\n");
   return false;
}

int main(void)
{
    char ch;
    char str[50] = "\0";
    printf("enter # to quit:\n");
    while ((ch = getchar()) != '#')
    { 
        getchar();
        fgets(str, 50, stdin);
        is_within(ch,str);
        printf("enter # to quit:\n");
    }
    return 0;
}
