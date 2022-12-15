#include<stdio.h>
int main()
{
    int a, b, c, d, c1 = 0, c2 = 0;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a == 1)
    {
        printf("yes\n");
    }
    else if (a == 0)
    {
        if (b == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
        if (c == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
        if (d == 1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
        if (c1 > c2)
        {
            printf("yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
