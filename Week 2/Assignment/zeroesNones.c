#include <stdio.h>
int main()
{
    int N, Zeroes=0, Ones=0;
    scanf("%d", &N);
    int A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
        if (A[i] == 0)
        {
            Zeroes++;
        }
        else if (A[i] == 1)
        {
            Ones++;
        }
    }
    printf("%d %d", Zeroes, Ones);
    return 0;
}