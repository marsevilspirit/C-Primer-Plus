#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int arr[100];

    for(int i = 0; i < 100; i++)
    {
        arr[i] = (rand()%10) + 1;
        printf("%d ",arr[i]);
    }
    
    for(int i = 0; i < 99; i++)
    {
        for(int j = 0; j < 99-i; j++)
        {
            if(arr[j] < arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("\n");
    for(int i = 0; i < 100; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
