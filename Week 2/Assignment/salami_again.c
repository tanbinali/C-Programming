#include <stdio.h>
#include <limits.h>
int main()
{
    int N;
    scanf("%d", &N);
    long long int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }
    int MAX = INT_MIN;

    for (int i = 0; i < N; i++)
    {
        if (A[i] > MAX)
        {
            MAX = A[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        A[i] = MAX - A[i];
        printf("%lld ", A[i]);
    }
    return 0;
}