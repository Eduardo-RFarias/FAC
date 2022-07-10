#include <stdio.h>

int main()
{
    unsigned int n;
    scanf("%u", &n);

    if (n == 0)
        printf("E\n");

    else if (n <= 35)
        printf("D\n");

    else if (n <= 60)
        printf("C\n");

    else if (n <= 85)
        printf("B\n");

    else if (n <= 100)
        printf("A\n");

    return 0;
}
