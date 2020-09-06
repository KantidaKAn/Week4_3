#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    float num;
    scanf("%f", &num);
    if (num < 32)
    {
        printf("Too cold to live");
    }
    else if (num >= 32)
    {
        printf("%.2f Celcius", (5 * (num - 32)) / 9.0);
    }
    return 0;
}