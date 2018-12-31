//Demo the address of variables and pointers

/*
The varibales pased to function are separate than the one in main function
Each of them mantain their separate indentity
*/

#include <stdio.h>

void func_secondary(int no_cc_holders);
int change_value(int no_cc_holders);

int main()
{

  //create number of customers
  int no_of_customers = 100;
  // How many hold credit cards
  int no_credit_card_holders = 50;
  //create a pointer to credit card holders
  int *p_credit_card_holders = &no_credit_card_holders;

  //print the address of no of customers variable
  printf("1)No of customers: \t\t\t\t\t%d\n2)Address of Variable [no_of_customers] :\t\t%p\n #########\n",
         no_of_customers, &no_of_customers);

  // Address of credit card variable

  printf("1)No of credit card holders:\t\t\t\t%d\n",
         no_credit_card_holders);
  printf("2)Address of Variable [no_credit_card_holders]:\t\t%p\n ########### \n",
         &no_credit_card_holders);

  // Address of pointer variable and the addres it points to
  printf("1)Value that pointer[p_credit_card_holders] points to:\t%d\n",
         *p_credit_card_holders);
  printf("2)Pointer variable[p_credit_card_holders] Address:\t%p\n",
         &p_credit_card_holders);
  printf("3)Address that pointer[p_credit_card_holders] points to:%p\n",
         p_credit_card_holders);

  printf("Calling the func_secondary\n");
  printf("##########################\n");
  func_secondary(no_credit_card_holders);

  printf("Calling the changed_value\n");
  printf("##########################\n");
  int changed_value = 0;
  changed_value =    change_value(no_credit_card_holders);
  printf("Changed value: %d\n", changed_value);
  return 0;
}

void func_secondary(int no_cc_holders)
{

  printf("1)No of credit card holders:\t\t\t\t%d\n",
         no_cc_holders);
  printf("2)Address of Variable [no_cc_holders]:\t\t%p\n ########### \n",
         &no_cc_holders);
}

int change_value(int no_cc_holders)
{

  printf("1)No of credit card holders:\t\t\t\t%d\n",
         no_cc_holders);
  printf("2)Address of Variable [no_cc_holders]:\t\t%p\n ########### \n",
         &no_cc_holders);
  no_cc_holders = 100;
  // if you donot return the new value nothing will change
  // the scope of varibale is within the function
  return no_cc_holders;
}