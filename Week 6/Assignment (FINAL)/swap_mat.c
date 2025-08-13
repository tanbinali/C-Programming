#include <stdio.h>
#include <stdbool.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int mat[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < N; i++)
    {
        int temp = mat[i][0];
        mat[i][0] = mat[i][M - 1];
        mat[i][M - 1] = temp;
    }

    for (int i = 0; i < M; i++)
    {
        int temp = mat[0][i];
        mat[0][i] = mat[N - 1][i];
        mat[N - 1][i] = temp;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}