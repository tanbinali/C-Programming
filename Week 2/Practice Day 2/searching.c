#include <stdio.h>
#include <stdbool.h>
int main()
{
    int N, X;
    bool exists = false;
    scanf("%d", &N);
    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
    scanf("%d", &X);
    for (int j = 0; j < N; j++)
    {
        if (A[j] == X)
        {
            printf("%d ", j);
            exists = true;
            break;
        }
    }
    if (!exists)
    {
        printf("-1");
    }
    return 0;
}