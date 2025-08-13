#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main()
{
    int N, M, X;
    scanf("%d %d %d", &N, &M, &X);

    int mat[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < X; i++)
    {
        int search;
        scanf("%d", &search);
        int count = 0;

        for (int k = 0; k < N; k++)
        {
            for (int j = 0; j < M; j++)
            {
                if (mat[k][j] == search)
                {
                    count += 1;
                }
            }
        }
        printf("%d\n", count);
    }

    return 0;
}