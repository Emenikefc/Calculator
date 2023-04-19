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
	float (*calculator[])(float , float ) = {add, subtract, divide, multiply};
	float a = 5, b = 15;
	//creating a character array to match the functions
	char signs[] = "+-/*";
	char operand;
	int i;
	//printf("enter numbers: ");
	//scanf("%f", &a);
	//scanf(" %f", &b);
	//a = getchar();
	//b = getchar();
	printf("enter operation + or - or / or *:");
	scanf("%c", &operand);
	for (i = 0; signs[i] != '\0'; i++)
	{
		if( operand == signs[i])
		{
			//call the function with the same index
			printf("%f\n",(*calculator[i])(a,b));
			return;
		}
	}
	printf("invalid operation\n");





}
