#include <stdio.h>
int main()
{
    int n, i;
    double sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 2; i <= n; i++)
    {
        sum = sum + 1.0 / i;
    }
    printf("Sum of series = %.4lf", sum);
    return 0;
}