/*
Write a Program Which adds One In Every Digit No Carry Is Forwarded
*/
#include <stdio.h>
int power(int x, int y)
{
    int i, result;
    result = 1;
    for (i = 1; i <= y; i++)
    {
        result = result * x;
    }
    return result;
}
int main()
{
    int n, rem;
    int i = 0;
    int val = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = ((n % 10) + 1) % 10;
        val = (power(10, i) * rem) + val;
        n = n / 10;
        i++;
    }
    printf("The Result is %d\n", val);
}
