#include <stdio.h>
#include <string.h>
int main()
{
    char S[1000001];

    scanf("%s", S);

    int Slen = strlen(S);
    // printf("%d", Slen);

    int digit[Slen];
    int sum = 0;

    for (int i = 0; i < Slen; i++)
    {
        digit[i] = S[i] - '0';
    }

    for (int i = 0; i < Slen; i++)
    {
        sum += digit[i];
    }

    printf("%d", sum);

    return 0;
}