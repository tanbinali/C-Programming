#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    long long int A[N]; 
    long long int abs_sum = 0;

    for (int i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
        abs_sum = abs_sum + A[i];
    }
    if (abs_sum < 0)
    {
        abs_sum = (abs_sum)*(-1);
        printf("%lld", abs_sum);
    }
    else
    {
        printf("%lld", abs_sum);
    }
    return 0;
}