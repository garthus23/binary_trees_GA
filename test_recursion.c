#include <stdlib.h>
#include <stdio.h>

int rec(int a)
{
    if (a == 0)
    {
        return 1;
    }
    else
    {
        printf("a = %d\n", a);
        return (3 + rec(a-2));
    }
}


int main(void)
{
    printf("%d\n", rec(12));
    return 0;
}