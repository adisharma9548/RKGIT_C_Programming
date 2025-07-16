#include <stdio.h>
int main()
{
    int x;
    printf("Enter the Value of X \n");
    scanf("%d", &x);
    // check x Number is even or Odd
    if (x % 2 == 0)
        printf("The Value of X is Even \n");
    else
        printf("The Value of X is Odd \n");

    return 0;
}
