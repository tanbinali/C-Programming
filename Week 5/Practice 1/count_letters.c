#include <stdio.h>
#include <string.h>
int main()
{
    char S[1000001];
    scanf("%s", S);

    int F[26] = {0};
    int length = strlen(S);

    for (int i = 0; i < length; i++)
    {
        char ch = S[i];
        int value = ch - 'a';
        F[value] += 1;
    }

    for (int i = 0; i < 26; i++)
    {
        if (F[i] >= 1)
        {
            printf("%c : %d\n", i + 'a', F[i]);
        }
    }

    return 0;
}