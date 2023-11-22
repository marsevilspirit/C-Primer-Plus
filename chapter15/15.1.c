#include <math.h>
#include <stdio.h>
#include <string.h>
int main(void)
{
    char * pbin = "01001001";
    int length = strlen(pbin);
    int sum = 0;
    for(int i = length-1; i >= 0; i--)
    {
        int temp = (pbin[length-1-i]-48)*pow(2, i); 
        sum += temp;
    }
    printf("%d\n",sum);
}
