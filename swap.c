#include <stdio.h>
int main()
{
    int x = 20;
    int y = 19;
    printf("%d \n", x); // 20
    printf("%d \n", y); // 19
    int item = x;
    x = y;
    y = item;
    printf("%d \n", x); // 20 -->19
    printf("%d \n", y); // 19 --20
    return 0;
}