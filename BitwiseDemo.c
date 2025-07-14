#include <stdio.h>
int main()
{
    int x = -20;
    int y = 12;

    // int z = x ^ y;
    // int z = ~x;
    int z = x >> 1;
    printf("%d", z);

    float t = 55.7;
    printf("%f", t);
    float g = t >> 1;

    return 0;
}