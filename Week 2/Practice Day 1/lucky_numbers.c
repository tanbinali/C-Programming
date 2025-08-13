#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int ones = N % 10;
    N = N/10;
    int tens = N;
    if (ones % tens == 0 || tens % ones == 0)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}