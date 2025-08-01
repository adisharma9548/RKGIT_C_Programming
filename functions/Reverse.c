/*Given a signed 32-bit integer x, return x with its digits reversed.
If reversing x causes the value to
go outside the signed 32-bit integer range [-231, 231 - 1], then return 0*/
#include <stdio.h>
int reverse(int x);
int main()
{
    int a = 0, result = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    result = reverse(a);
    printf("The Result is %d\n", result);
}
int reverse(int x)
{
    int rev = 0;
    while (x != 0)
    {
        rev = rev * 10 + x % 10;
        x = x / 10;
    }
    return rev;
}