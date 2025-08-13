#include <stdio.h>
#include <limits.h>
int main()
{
    int N;
    scanf("%d", &N);
    long long int ar[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &ar[i]);
    }

    long int min = LONG_MAX;
    int freq = 0;
    for (int i = 0; i < N; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (ar[i] == min)
        {
            freq++;
        }
    }
    if (freq % 2 != 0)
    {
        printf("Lucky");
    }
    else if (freq % 2 == 0)
    {
        printf("Unlucky");
    }

    return 0;
}