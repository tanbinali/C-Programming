#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        long int A, B, C, D;
        long long int M;
        scanf("%lld %ld %ld %ld", &M, &A, &B, &C);

        D = M / (A * B * C);
        if (M == (A * B * C * D))
        {
            printf("%ld\n", D);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}