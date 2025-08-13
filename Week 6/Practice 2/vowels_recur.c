#include <stdio.h>
#include <string.h>

int cnt = 0;
int cnt_vowels(char x[], int n)
{
    if (n < 0)
    {
        return cnt;
    }
    if (x[n] == 'a' || x[n] == 'A' || x[n] == 'e' || x[n] == 'E' || x[n] == 'i' || x[n] == 'I' || x[n] == 'o' || x[n] == 'O' || x[n] == 'u' || x[n] == 'U')
    {
        cnt++;
    }

    cnt_vowels(x,n-1);
}

int main()
{
    char S[201];
    fgets(S, sizeof(S), stdin);

    int len = strlen(S);

    int total_vowels = cnt_vowels(S, len - 1);

    printf("%d", total_vowels);

    return 0;
}