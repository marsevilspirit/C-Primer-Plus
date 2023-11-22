#include <stdio.h>

int open_wei(int n);

int main(void)
{
    int n;
    scanf("%d",&n);
    int openwei = open_wei(n);
    printf("%d\n",openwei);
}

int open_wei(int n)
{
    int size = 8*sizeof(int);
    int cnt = 0;
    for (int i = size - 1; i >= 0; i--, n >>= 1)
    {
        if(n & 1) 
            cnt++;
    }
    return cnt;
}
