/* Write a function which add two integers and return the sum.*/
#include <stdio.h>
// Function Definition
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int sum, x, y;
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    sum = add(x, y);
    printf("Sum is %d\n", sum);
    return 0;
}
