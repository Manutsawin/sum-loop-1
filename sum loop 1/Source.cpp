#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
    int num, sum = 0;
    scanf("%d", &num);

    while (num > 9)
    {
        while (num > 0)
        {
            sum = sum + (num % 10);
            num = num / 10;
        }
        num = sum;
        sum = 0;
    }
    printf("%d", num);
    return 0;
}
