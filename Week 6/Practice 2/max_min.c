#include <stdio.h>
#include <limits.h>

int getmax(int *x, int n)
{
    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (x[i] > max)
        {
            max = x[i];
        }
    }

    return max;
}
int getmin(int *x, int n)
{
    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
        }
    }

    return min;
}

int main()
{
    int N;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int max = getmax(A, N);
    int min = getmin(A, N);

    printf("%d %d", min, max);
    return 0;
}