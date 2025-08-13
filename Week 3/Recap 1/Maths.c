#include <stdio.h>
#include <stdbool.h>
int main()
{
    char S, Q;
    int A, B, C;
    scanf("%d %c %d %c %d", &A, &S, &B, &Q, &C);
    if (S == '+')
    {
        if ((A + B) == C)
        {
            printf("Yes\n");
        }
        else
        {
            int N = A + B;
            printf("%d", N);
        }
    }
    else if (S == '-')
    {
        if ((A - B) == C)
        {
            printf("Yes\n");
        }
        else
        {
            int N = A - B;
            printf("%d", N);
        }
    }
    else if (S == '*')
    {
        if ((A * B) == C)
        {
            printf("Yes\n");
        }
        else
        {
            int N = A * B;
            printf("%d", N);
        }
    }
    return 0;
}