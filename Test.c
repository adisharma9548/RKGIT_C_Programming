#include <stdio.h>
int main()
{
    int x = 5 && 0 != 8 || 0;
    printf("%d", x);
    return 0;
}