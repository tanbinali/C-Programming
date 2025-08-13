#include <stdio.h>

int cnt = 0;
long long int getlog(long long int n, int cnt)
{
    if (n == 1)
    {
        return cnt;
    }

    getlog(n / 2, cnt + 1);
}

int main()
{
    long long int N;
    scanf("%lld", &N);

    long long int log = getlog(N, 0);

    printf("%lld", log);

    return 0;
}