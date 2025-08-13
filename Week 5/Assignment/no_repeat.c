#include <stdio.h>
#include <limits.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];
    int fr[100005]= {0};

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);

        fr[ar[i]] += 1;
    }

    int max = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
        }
    }

    int count = 0;

    for (int i = 1; i <= max; i++)
    {
        if (fr[i] == 1)
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}