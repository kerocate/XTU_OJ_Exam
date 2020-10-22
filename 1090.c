#include <stdio.h>

long long a[34][34];

int main()
{
    int n;
    int i, j;
    for (i = 0; i <= 33; i++)
    {
        a[i][0] = 1;
        a[i][1] = i;
        a[i][i] = 1;
    }
    for (i = 1; i <= 33; i++)
    {
        for (j = 1; j <= 33; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    scanf("%d", &n);
    while (n >= 0)
    {
        printf("2^%d=", n);
        for (i = 0; i < n; i++)
            printf("%lld+", a[n][i]);
        printf("%lld\n", a[n][n]);
        scanf("%d", &n);
    }
    return 0;
}