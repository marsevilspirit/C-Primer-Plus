#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
        int ch;
        FILE* fp1;
        FILE* fp2;
        if(argc != 3)
        {
                printf("no");
                exit(EXIT_FAILURE);
        }
        if((fp1 = fopen(argv[1],"rb")) == NULL)
        {
                printf("no");
                exit(EXIT_FAILURE);
        }
        fp2 = fopen(argv[2],"wb");
        while((ch = getc(fp1)) != EOF)
        {
                putc(ch,fp2);
        }
        fclose(fp1);
        fclose(fp2);
        printf("success!");
        return 0;
}
