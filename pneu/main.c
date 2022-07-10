#include <stdio.h>

int main()
{
    unsigned int n, m;
    scanf("%u", &n);
    scanf("%u", &m);

    int diff = n - m;

    printf("%d\n", diff);
}