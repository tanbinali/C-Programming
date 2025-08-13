#include <stdio.h>
#include <stdbool.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);

    int mat[N][M];

    if (N != M)
    {
        printf("NO");
        return 0;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int prim = true;
    int sec = true;
    int non_dio = true;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (i == j)
            {
                if (mat[i][j] != 1)
                {
                    prim = false;
                }
            }
            else if (i + j == N - 1)
            {
                if (mat[i][j] != 1)
                {
                    sec = false;
                }
            }
            else
            {
                if (mat[i][j] != 0)
                {
                    non_dio = false;
                }
            }
        }
        if (prim == false || non_dio == false || sec == false)
        {
            break;
        }
    }

    if (prim == true && non_dio == true && sec == true)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}