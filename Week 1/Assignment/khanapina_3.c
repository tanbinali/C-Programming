#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N, i;
    scanf("%d", &N);
    if (1 <= N && N <= 5000)
    {
        for (i = 1; i <= N; i++)
        {
            printf("%d ", i);
            if (i % 5 == 0 || i %3 == 0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
