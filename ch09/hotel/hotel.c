/* hotel.c -- hotel management functions */
#include <stdio.h>
#include "hotel.h"

int menu(void)
{
  int code, status;
  printf("Initial Status %d\n", status);

  printf("\n%s%s\n", STARS, STARS);
  printf("Enter the number of the desired hotel:\n");
  printf("1) Fairfield Arms\n");
  printf("2) Hotel Olympic\n");
  printf("3) Chertworthy Plaza\n");
  printf("4) The Stockton\n");
  printf("5) The RESIDENCE INN\n");
  printf("6) quit\n");
  printf("%s%s\n", STARS, STARS);

  //status=1 is failure and 0 is success
  //Run while loop unless status = 0
  /*This code fragment uses C’s guarantee that logical expressions are evaluated from left to right
  and that evaluation ceases the moment the statement is clearly false. In this instance, the
  values of code are checked only after it is determined that scanf() succeeded in reading an
  integer value.*/
  while ((status = scanf("%d", &code)) != 1 ||
         (code < 1 || code > 6))
  {

    if (status != 1) {
      printf("Status for string input %d\n", status);

      //%*s call to skip to the next whitespace
      // dispose of non-integer input
      scanf("%*s");
    }
    printf("Enter an integer from 1 to 6, please.\n");
    printf("Status for integer input %d\n", status);
  }
  printf("Status %d\n", status);
  return code;
}


int getnights(void)
{
  int nights;
  printf("How many nights are needed? ");
  while (scanf("%d", &nights) != 1)
  {
    scanf("%*s");
// dispose of non-integer input
    printf("Please enter an integer, such as 2.\n");
  }
  return nights;
}


void showprice(double rate, int nights)
{
  int n;
  double total = 0.0;
  double factor = 1.0;
  for (n = 1; n <= nights; n++, factor *= DISCOUNT)
    total += rate * factor;
  printf("The total cost will be $%0.2f.\n", total);
}