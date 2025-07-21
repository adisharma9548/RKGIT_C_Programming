/*Return the nth term in fibonacci series*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int t1 = 0, t2 = 1, nextTerm = 0, i = 2;
    if (n <= 1)
    {
        printf("The %dth term in fibonacci series is %d", n, n);
    }
    else
    {
        while (i <= n)
        {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            i++;
        }
        printf("The %dth term in fibonacci series is %d", n, nextTerm);
    }
    return 0;
}