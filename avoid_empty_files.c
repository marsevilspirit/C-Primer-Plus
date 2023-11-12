#include<stdio.h>
int main(int argc,char *argv[])
{
    int ch;
    FILE *fp;
    fp = fopen(argv[1],"r");
    ch = getc(fp);
    while(ch != EOF)
    {
        putchar(ch);
        ch = getc(fp);
    }
}
