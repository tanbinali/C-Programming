#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ar[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0, j = N - 1; i <= j; i++, j--)
    {
        if (ar[i] != ar[j])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}