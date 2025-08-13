#include <stdio.h>
#include <limits.h>

long long int getmax(long long int *x, int n, long long max)
{
    if (n < 0)
    {
        return max;
    }
    if (x[n] > max)
    {
        max = x[n];
    }

    getmax(x, n - 1, max);
}

int main()
{
    int N;
    scanf("%d", &N);
    long long int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    long long int temp_max = LLONG_MIN;
    long long int max = getmax(A, N - 1, temp_max);

    printf("%lld", max);
    return 0;
}