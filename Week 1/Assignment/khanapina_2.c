#include<stdio.h>
int main()
{
    int M;
    scanf("%d",&M);
    
    if(1<=M && M<=1000)
    {
        if(M%3==0) printf("Yes");
        else printf("No");
    }
    return 0;
}