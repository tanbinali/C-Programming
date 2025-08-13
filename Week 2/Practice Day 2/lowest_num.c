#include <stdio.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    int N, pos;
    scanf("%d", &N);
    long long int A[N];
    bool B[N];
    int min = INT_MAX;
    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (A[i] == min)
        {
            B[i] = true;
        }
        else
        {
            B[i] = false;
        }
        // printf("%d",B[i]);
    }

    for (int i = 0; i < N; i++)
    {
        if (B[i] == true)
        {
            pos = i;
            break;
        }
    }
    printf("%d %d", min, pos + 1);

    return 0;
}