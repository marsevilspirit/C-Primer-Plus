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
//also could do this
//#include<stdio.h>
//int main(int argc,char *argv[])
//{
//    int ch;
//    FILE *fp;
//    fp = fopen(argv[1],"r");
//    ch = getc(fp);
//    while(ch = getc(fp)) != EOF)
//    {
//        putchar(ch);
//    }
//}
