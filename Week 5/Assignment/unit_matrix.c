#include <stdio.h>
#include <math.h>
#include <stdbool.h>
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

    int prim = false;
    int non_dio = false;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                if (mat[i][j] == 1)
                {
                    prim = true;
                }
                else
                {
                    prim = false;
                    break;
                }
            }
            else
            {
                if (mat[i][j] == 0)
                {
                    non_dio = true;
                }
                else
                {
                    non_dio = false;
                    break;
                }
            }
        }
        if (prim == false || non_dio == false)
        {
            break;
        }
    }

    if (prim == true && non_dio == true)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}