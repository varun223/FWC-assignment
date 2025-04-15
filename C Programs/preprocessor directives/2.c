#include <stdio.h>

#define MAX2(x, y) ((x) > (y) ? (x) : (y))
#define MAX4(a, b, c, d) MAX2(MAX2(a, b), MAX2(c, d))

int main()
{
    int w = 10, x = 25, y = 15, z = 30;
    printf("Biggest of %d, %d, %d, %d is %d\n",
           w, x, y, z, MAX4(w, x, y, z));

    return 0;
}