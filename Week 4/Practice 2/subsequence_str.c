#include <stdio.h>
#include <string.h>
int main()
{
    char S[10001], T[] = "hello";

    scanf("%s", S);

    int Slen = strlen(S);
    int Tlen = strlen(T);
    int index, exist = 0;

    for (int i = 0, j = 0; i < Slen; i++)
    {
        if (S[i] == T[j])
        {
            j++;
            exist++;
        }
    }

    if (exist == 5)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}