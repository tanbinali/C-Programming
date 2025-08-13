#include <stdio.h>

void print_recur(int X, int N)
{
    if (X > N)
    {
        return;
    }
    printf("I love Recursion\n");
    print_recur(X + 1, N);
}
int main()
{
    int N;
    scanf("%d", &N);

    print_recur(1, N);

    return 0;
}