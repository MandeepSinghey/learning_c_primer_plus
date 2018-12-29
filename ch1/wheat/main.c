#include <stdio.h>
#define SQUARES 64

int main(void)
{
    //world wheat production
    const double CROP = 2E16;
    double current, total;
    int count = 1;

    printf("Crops size is %12.2e\n", CROP);
    printf("Square      grain       Total        fraction of\n");
    printf("            added       grains      World Total\n");
    total = current = 1;
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    while (count <= SQUARES)
    {
        count = count + 1;
        //double the grains on next square
        current = 2 * count;
        //update total grains
        total = total + count;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
    }
    return 0;
}