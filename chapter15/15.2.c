#include <stdio.h>
#include <stdlib.h>

int switch_num(const char * str);
char *switch_str(int n, char *str);

int main(int argc, char *argv[])
{
    char chucun[8 * sizeof(int) + 1];
    
    if (argc != 3)
    {
        fprintf(stderr, "Usage: %s binarynum1 binarynum2\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    int num1 = switch_num(argv[1]);
    int num2 = switch_num(argv[2]);
    printf("~%s = %s\n", argv[1], switch_str(~num1, chucun));
    printf("~%s = %s\n", argv[2], switch_str(~num2, chucun));
    printf("%s & %s = %s\n", argv[1], argv[2], switch_str(num1 & num2, chucun));
    printf("%s | %s = %s\n", argv[1], argv[2], switch_str(num1 | num2, chucun));
    printf("%s ^ %s = %s\n", argv[1], argv[2], switch_str(num1 ^ num2, chucun));
    
    return 0;
}

int switch_num(const char * str)
{
    int val = 0;
    while (*str)
    {
        val = val * 2 + (*str++) - '0';
    }
    return val;
}

char *switch_str(int n, char *str)
{
    int size = 8 * sizeof(int);
    for (int i = size - 1; i >= 0; --i, n >>= 1)
    {
        str[i] = (n & 1) + '0';
    }
    str[size] = '\0';
    return str;
}
