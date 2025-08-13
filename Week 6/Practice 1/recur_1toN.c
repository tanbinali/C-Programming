#include <stdio.h>

void print_recur(int N)
{
    if (N==1)
    {
        printf("%d", N);
        return;
    }
    printf("%d ", N);
    print_recur(N-1);
}
int main()
{
    int N;
    scanf("%d", &N);

    print_recur(N);

    return 0;
}