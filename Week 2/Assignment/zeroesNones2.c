#include <stdio.h>
int main()
{
    int N, X;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &X);
    for (int i = 0; i < N; i++)
    {
        int j=i+1;
        if (j == X)
        {
            if (A[i] == 0)
            {
                A[i] = 1;
            }
            else if (A[i] == 1)
            {
                A[i] = 0;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}