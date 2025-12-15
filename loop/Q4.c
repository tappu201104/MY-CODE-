// Write a program to display the multiplication table of a given integer.
// Test Data :
// Input the number (Table to be calculated) : 15
// Expected Output :
// 15 X 1 = 15
// ...
// ...
// 15 X 10 = 150

#include <stdio.h>
int main()
{
    int n, i;
    printf("Input the number(Table to be claculated) : ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        int multiple = n * i;

        printf(" %d x %d = %d\n", n, i, multiple);
    }
    return 0;
}