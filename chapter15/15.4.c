#include <stdio.h>

int what(int x, int pos);
char *switch_str(int n, char *str);

int main(void)
{
    int x;
    scanf("%d",&x);
    int size = 8 * sizeof(int);
    char chucun[8 * sizeof(int) + 1]; 
    
    printf("%d(%s):\n", x, switch_str(x, chucun));
    for (int i = size - 1; i >= 0; --i)
    {
        printf("The position %d is %d\n", i + 1, what(x, i));
    }
    
    return 0;
}

int what(int x, int pos)
{
    return (x >> pos) & 1;
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

