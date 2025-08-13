#include <stdio.h>
int main()
{
    int N;
    long long int T;
    scanf("%d %lld", &N, &T);
    int ar[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }

    long long int sum = 0;
    int books = 0;

    for (int i = 0; i < N; i++)
    {
        sum += ar[i];
        if (sum <= T)
        {
            books++;
        }
        else if (sum > T)
        {
            break;
        }
    }

    printf("%d", books);

    return 0;
}