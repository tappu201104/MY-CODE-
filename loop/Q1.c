// Write a program to display n terms of natural number and their sum. 
// Expected Output :  
// The no. of terms of natural number: 7 
// 1 2 3 4 5 6 7  
// The Sum of Natural Number upto 7 terms = 28 

#include <stdio.h>
int main()
{
    int n, i, sum = 0;

    printf("The no. of terms of natural number : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        printf("%d ", i);
        sum += i;
    }
    printf("\nThe sum of natural number upto %d terms = %d\n", n, sum);
    return 0;
}