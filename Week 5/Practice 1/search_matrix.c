#include <stdio.h>
#include <stdbool.h>
int main()
{
    int N, M, X;
    scanf("%d %d", &N, &M);

    int mat[N][M];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    scanf("%d", &X);

    int exist = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (mat[i][j] == X)
            {
                exist = true;
            }
        }
    }

    if (exist == true)
        printf("will not take number");
    else
        printf("will take number");
    return 0;
}