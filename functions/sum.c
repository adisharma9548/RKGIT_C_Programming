/*Add Two Integer Number By Using Function*/
#include <stdio.h>
// Fuction Prototype
// Fuction Declatration
int add(int x, int y)
{
    int z;
    z = x + y;
    return z;
}
int main()
{
    int a, b, c;
    printf("Enter First Integer Number: ");
    scanf("%d", &a);
    printf("Enter Second Integer Number: ");
    scanf("%d", &b);
    c = add(a, b);
    printf("The Sum is %d\n", c);
}
