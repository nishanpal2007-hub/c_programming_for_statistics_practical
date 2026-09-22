#include <stdio.h>

int main()
{
    int i, j, n;
    float x[20], y[20], s = 0, p, a;

    printf("Enter the number of observations: ");
    scanf("%d", &n);

    printf("Enter the value of x and y:\n");

    for (i = 0; i <= n; i++)
    {
        scanf("%f %f", &x[i], &y[i]);
    }

    printf("Enter the value of x for which the value of y is needed: ");
    scanf("%f", &a);

    for (i = 0; i <= n; i++)
    {
        p = 1;

        for (j = 0; j <= n; j++)
        {
            if (i != j)
            {
                p = p * (a - x[j]) / (x[i] - x[j]);
            }
        }

        s = s + p * y[i];
    }

    printf("The answer is: %.4f\n", s);

    return 0;
}