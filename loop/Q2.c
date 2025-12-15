// Write a program to read 10 numbers from keyboard and find their sum and average.
// Test Data :
// Input the 10 numbers :
// Number-1 : 2
// ...
// Number-10 : 2
// Expected Output :
// The sum of 10 no is : 55
// The Average is : 5.500000

#include <stdio.h>
int main()
{
    int n, sum = 0;
    float average;
    printf("Input the 10 numbers : \n");

    for (int i = 1; i <= 10; i++)
    {
        printf(" Number - %d : ", i);
        scanf("%d", &n);
        sum += n;
    }
    average = sum / 10.0;
    printf("\nThe sum of 10 no is :%d\n", sum);

    printf("The Average is : %.2f", average);

    return 0;
}
