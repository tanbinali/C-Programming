#include <stdio.h>
int main()
{
    int N;
    long long int X, Y;
    scanf("%d %lld %lld", &N, &X, &Y);
    long long int ar[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &ar[i]);
    }

    int phones = 0;

    for (int i = 0; i < N; i++)
    {
        if (ar[i] >= X && ar[i] <= Y)
        {
            phones++;
        }
    }

    printf("%d", phones);

    return 0;
}