#include <stdio.h>
#include "main.h"
/*
 * this is the to test the program calculator
 * we will use function pointer to put alll the function into an array
 * so a funtion pointer points to an array of functions
 *each function representing the diffrent operation of a calculator
 *ruturns nothing (void)
 */
void main()
{
	// defining function pointer pointing to an array of function
	void (*calculator)[] (float a, float b) = {add, subtract, divide, multiply, power};
	//creating a character array to match the functions
	char signs[] = "+-/*";
	char operand;
	int i;
	printf("enter 2 numbers");
	scanf("%f %f" &a, &b);
	printf("enter operatio + or - or / or *");
	scanf("%c", &operand);
	// run through the sign array with for loops
	for (i = 0; signs[i] != '\0'; i++)
	{
		if( operand == sign[i]);
		//call the function with the same index
	
	}






}
