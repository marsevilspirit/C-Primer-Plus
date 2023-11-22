#include <stdio.h>
#include <stdlib.h>

void getnchar(char * str, int n);

int main(void)
{
    int n;
    scanf("%d",&n);
    getchar();//去除“\n”
    char * str = (char *)malloc(n * sizeof(char));

    getnchar(str, n);

    puts(str); 

    free(str);

    return 0;
}

void getnchar(char * str, int n)
{
    for(int i = 0; i < n; i++)
    {
        *(str+i) = getchar();
    }
}
