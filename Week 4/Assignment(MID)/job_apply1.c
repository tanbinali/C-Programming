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

    for (int i = 0; i < N; i++)
    {
        if (ar[i] < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (ar[i] >= 1 && ar[i] <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (ar[i] >= 4 && ar[i] <= 7)
        {
            printf("Mid-level candidate\n");
        }
        if (ar[i] > 7)
        {
            printf("Senior candidate\n");
        }
    }

    return 0;
}