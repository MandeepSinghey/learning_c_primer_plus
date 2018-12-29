/* platinum.c -- your weight in platinum*/
#include <stdio.h>
int main(void)
{
    float weight, value;
    printf("Are you worth your weight in platinum? \n");
    printf("Please enter your weight in pounds: ");
    scanf("%f", &weight);
    value = weight * 1700.0 * 14.5833;
    printf("Your weight on platinum is worth $%.2f. \n", value);
    return 0;
}