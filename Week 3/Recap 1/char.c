#include <stdio.h>
int main()
{
    char X, N;
    scanf("%c", &X);
    N=X;
    if (X >= 'a' && X <= 'z')
    {
        N = X - 32;
    }
    else if (X >= 'A' && X <= 'Z')
    {
        N = X + 32;
    }
    printf("%c", N);
    return 0;
}