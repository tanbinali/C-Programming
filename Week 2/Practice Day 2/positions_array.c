#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    long long int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        if (A[i] <= 10)
        {
            printf("A[%d] = %d\n", i, A[i]);
        }
    }
    return 0;
}