#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int ar[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d",&ar[i]);
    }
    for (int i = 0, j=N-1; i >= j; i++,j--)
    {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}