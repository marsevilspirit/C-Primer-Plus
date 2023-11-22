#include <stdio.h>
#include "pe12-2a.h"

static int mode;
static double averuse;
static double fuel;

void set_mode(int n)
{
    if(n > 1)
        printf("Invalid mode specified. Mode %s used.\n", (0 == mode)?"0(metric)":"1(US)");
    else
        mode = n;
    return;
}

void get_info(void)
{
    if(mode == 0)
        printf("Enter distance traveled in kilometers: ");
    else
        printf("Enter distance traveled in miles: ");

    scanf("%lf",&averuse);

    if(mode == 0) 
        printf("Enter fuel consumed in liters: ");
    else
        printf("Enter fuel consumed in gallons: ");
    
    scanf("%lf",&fuel);

    return;
}

void show_info(void)
{
    if(mode == 0)
        printf("Fuel consumption is %.2lf liters per 100km.\n", (fuel/averuse)*100);
    else
        printf("Fuel consumption is %.1lf miles per gallons.\n", averuse/fuel);
    return; 
}
