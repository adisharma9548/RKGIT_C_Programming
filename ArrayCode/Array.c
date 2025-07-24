/*Write a Program To Take
Five Input From the User in
Integer array and Print Those values*/
#include <stdio.h>
void inputArray(int a[], int size)
{
    for (int i = 0; i < 5; i++)
    {
        printf("Enter The Value Of a[%d] ", i);
        scanf("%d", &a[i]);
    }
}
void printArray(int a[], int size)
{
    // Print the Array
    for (int i = 0; i < 5; i++)
    {
        printf("The [%d]th Value Of a is %d \n", i, a[i]);
    }
}
// Function to Add the values of Array
int addArray(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += a[i];
    }
    return sum;
}
// Write a Code for Sequential search
int search(int *nums, int numsSize, int target)
{
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int a[5] = {23, 34, 45, 56, 67};
    printArray(a, 5);
    printf("\n");
    printf("The Item is Found at Index %d ", search(a, 5, 45));
    printf("\n");
    // printf("The Sum of Array is %d", addArray(a, 5));
    printf("\n");
    // inputArray(a, 5);
    // printArray(a, 5);
    return 0;
}