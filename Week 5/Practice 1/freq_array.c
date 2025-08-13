#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int ar[N + 5];
    int fr[100005];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);

        fr[ar[i]] += 1;
    }

    for (int i = 1; i <= M; i++)
    {
        printf("%d\n", fr[i]);
    }
    return 0;
}