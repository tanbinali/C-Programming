#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    scanf("%d", &N);

    int mat[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int main = 0, sec = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                main += mat[i][j];
            }
            if (i + j == N - 1)
            {
                sec += mat[i][j];
            }
        }
    }

    int dif = abs(main-sec);

    printf("%d", dif);

    return 0;
}