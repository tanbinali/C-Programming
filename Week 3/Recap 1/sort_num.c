#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
int main()
{
    long int ar[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%ld", &ar[i]);
    }
    long int max = LONG_MIN;
    long int min = LONG_MAX;
    long int mid = 0;
    int ind1, ind2;
    for (int i = 0; i < 3; i++)
    {
        if (ar[i] > max)
        {
            max = ar[i];
            ind1 = i;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (ar[i] < min)
        {
            min = ar[i];
            ind2 = i;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (ar[i] <= max && ar[i] >= min)
        {
            if (i != ind1 && i != ind2)
            {
                mid = ar[i];
            }
        }
    }
    long int ar2[] = {min, mid, max};
    for (int i = 0; i < 3; i++)
    {
        printf("%ld\n", ar2[i]);
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%ld\n", ar[i]);
    }
    return 0;
}