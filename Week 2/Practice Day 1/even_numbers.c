#include <stdio.h>
int main()
{
    int N;
    int total_even_num = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            total_even_num++;
        }
    }
    if (total_even_num == 0)
        printf("-1\n");

    return 0;
}