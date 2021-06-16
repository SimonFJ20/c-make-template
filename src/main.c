#include <stdio.h>
#include "functions.h"

int main()
{
    int a = 5;
    int b = 10;
    int c = addTo(a, b);

    printf("%d + %d = %d", a, b, c);

    return 0;
}
