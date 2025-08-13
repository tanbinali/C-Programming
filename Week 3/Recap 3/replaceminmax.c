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

    long int max = LONG_MIN;
    long int min = LONG_MAX;
    int min_pos = 0, max_pos = 0;
    for (int i = 0; i < N; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
            max_pos = i;
        }
    }
    for (int i = 0; i < N; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
            min_pos = i;
        }
    }
    long int temp = ar[min_pos];
    ar[min_pos] = ar[max_pos];
    ar[max_pos] = temp;
    for (int i = 0; i < N; i++)
    {
        printf("%lld ", ar[i]);
    }

    return 0;
}