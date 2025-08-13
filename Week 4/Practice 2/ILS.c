#include <stdio.h>
#include <string.h>
int main()
{
    char S[55], T[55];
    int N;

    scanf("%d", &N);
    // scanf("%s", S);
    // scanf("%s", T);

    // int Slen = strlen(S);
    // int Tlen = strlen(T);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", S);
        scanf("%s", T);

        int Slen = strlen(S);
        int Tlen = strlen(T);

        for (int j = 0; j < Slen || j < Tlen; j++)
        {
            if (j < Slen)
            {
                printf("%c", S[j]);
            }
            if (j < Tlen)
            {
                printf("%c", T[j]);
            }
        }
        printf("\n");
    }

    return 0;
}