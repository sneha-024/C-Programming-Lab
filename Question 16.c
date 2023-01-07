/* Print all natural numbers */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    return 0;
}
/* Sum of natural numbers */
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        sum += i;
    printf("Sum of natural numbers from 1 to %d: %d\n", n, sum);
    return 0;
}