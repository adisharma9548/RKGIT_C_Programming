/*Write a Fuction to Calculate The Power of a number*/
#include <stdio.h>
int power(int x, int y);
int main()
{
    int a = 0, b = 0, result = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter the power: ");
    scanf("%d", &b);
    result = power(a, b);
    printf("The Result is %d\n", result);
}
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