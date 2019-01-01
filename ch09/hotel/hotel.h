/* hotel.h -- constants and declarations for hotel.c */
#define QUIT 6

//rates of each hotel
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define HOTEL5 1000.00
// Discount to give
#define DISCOUNT 0.9

#define STARS "**********************************"
// shows list of choices
int menu(void);
// returns number of nights desired
int getnights(void);
// calculates price from rate, nights
// and displays result
void showprice(double rate, int nights);