#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d", &N);

    long long int *ar = (long long int *)malloc(1 * sizeof(long long int));

    for (int i = 0; i < N; i++)
    {
        long long int num;
        scanf("%lld", &num);

        long long int *temp = ar;
        ar = (long long int *)realloc(ar, (i + 1) * sizeof(long long int));
        if (ar == NULL)
        {
            ar = temp;
        }

        ar[i] = num;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%lld ", ar[i]);
    }

    free(ar);

    return 0;
}