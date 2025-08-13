#include <stdio.h>

int shift_zeroes(int *x, int n)
{
    int y[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i]!=0){
            y[cnt] = x[i];
            cnt++;
        }
    }
    for (int i = cnt; i < n; i++)
    {
        y[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        x[i] = y[i];
    }
    
    return x[n];
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

    shift_zeroes(A, N);

    for (int i = 0; i < N; i++)
    {
        printf("%d ", A[i]);
    }
    return 0;
}