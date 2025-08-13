#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    long long int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        if (A[i] < 0)
        {
            A[i] = 2;
        }
        else if (A[i] > 0)
        {
            A[i] = 1;
        }
        else
        {
            A[i] = 0;
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}