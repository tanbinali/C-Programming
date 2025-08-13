#include <stdio.h>
int main()
{
    int pos;
    printf("What's the position you got?\n");
    scanf("%d", &pos);

    // if (pos == 1)
    // {
    //     printf("Gold Prize");
    // }
    // else if (pos == 2)
    // {
    //     printf("Silver Prize");
    // }
    // else if (pos == 3)
    // {
    //     printf("Bronze Prize");
    // }
    // else
    // {
    //     printf("Not in podium. Better luck next time!");
    // }
    
    switch (pos)
    {
    case 1:
        printf("Gold Prize");
        break;
    case 2:
        printf("Silver Prize");
        break;
    case 3:
        printf("Bronze Prize");
        break;
    default:
        printf("Not in podium. Better luck next time!");
        break;
    }




    return 0;
}