/* Print all even numbers */
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
        printf("%d ", i);
    return 0;
}
/* Sum of even numbers */
#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
        sum += i;
    printf("Sum of even numbers from 1 to %d: %d\n", n, sum);
    return 0;
}