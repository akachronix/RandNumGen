/* Name:        Random Number Generator
   Author:      Brendan Gowen
   Description: A program that generates
   random numbers from a user specified
   range. Uses everything.h. */

#include "everything.h"

int main(void)
{
	srand((unsigned)time(NULL));
	int min = io::intinput("Enter the minimum number.");
	int max = io::intinput("Enter the maximum number.");
	cout << "Your number is: " << rand() % max + min << ".\n";
}
