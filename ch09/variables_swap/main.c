//Swap Variables

/*
Sometimes you want one function to make changes in the variables of a different function.
For example, a common task in sorting problems is interchanging the values of two variables.
Suppose you have two variables called x and y and you want to swap their values. The simple
sequence
x = y;
y = x;
does not work because by the time the second line is reached, the original value of x has
already been replaced by the original y value.


An additional line is needed to temporarily store the original value of x .
temp = x;
x = y;
y = temp;
Now that the method works, you can put it into a function and construct a driver to test it. To
make clear which variables belong to main() and which belong to the interchange() func-
tion,
*/
#include <stdio.h>

// function wih no return statement
void change_value(int x, int y);

// Add return statement
// NOTE: C functions can only return one value, thus second value remians unchanged
int interchange(int x, int y);

//using pointer, you can change or per say return 2 values ..:-)
void pointer_swap(int *u, int *v);


int main()
{


  int x = 50;
  int y = 100;

  int price_apple = 50;
  int price_mango = 100;

  int * p_x = &price_apple;
  int * p_y = &price_mango;

  printf("Originally x value: %d\n", x);
  printf("Originally y value: %d\n", y);
  printf("##############################\n");
  change_value(x, y);
  printf("After change_value call x value: %d\n", x);
  printf("After change_value call y value: %d\n", y);
  printf("##############################\n");
  x = interchange(x, y);
  printf("After interchange call x value: %d\n", x);
  printf("After interchange call y value: %d\n", y);
  printf("##############################\n");

  printf("Original Apple price: %d\n", price_apple);
  printf("Original Mango price: %d\n", price_mango);
  printf("##############################\n");
  pointer_swap(p_x, p_y);
  printf("After pointer_swap call Apple price: %d\n", price_apple);
  printf("After pointer_swap call mango price: %d\n", price_mango);
  return 0;
}

// function wih no return statement
void change_value(int u, int v)
{

  int temp;
  temp = u;
  u = v;
  v = temp;

}

// function wih return statement
// NOTE: C functions can only return one value
int interchange(int u, int v)
{

  int temp;

  temp = u;
  u = v;
  v = temp;
  return u;

}

// using pointer, you can change or per say return 2 values ..:-)
// NOTE: C functions can only return one value
void pointer_swap(int *u, int *v)
{

  int temp;

  temp = *u;
  *u = *v;
  *v = temp;


}