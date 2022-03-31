/**@file CHARGE.h
 *@brief The charge function will be used to give the ticket price to the user based on the no of seats
 *
 *the function will take different types parameters for give the price to the user 
 *after entering all the data then the charge will be displayed.
 *
 *@bug No know bugs.
 *
 */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>




void reservation(void);
void viewdetails(void);
void printticket(char name[],int,int,float);
void specificbus(int);
float charge(int,int);



/* charge function(ticket price)*/
float charge(int bus_num,int num_of_seats)  /*@param it will takes the parameter of bus number and no of seats from the user*/
{

	if (bus_num==1001)  /* if user choose the 1001 bus number then it will display the price of the ticket based on the no of seats*/
	
	{
		return(500*num_of_seats);  /* it will return the price to the user based on the bus seats */
	}
	if (bus_num==1002)  /* if user choose the 1002 bus number then it will display the price of the ticket based on the no of seats*/
	{
		return(500*num_of_seats);   /* it will return the price to the user based on the bus seats */
	}
	if (bus_num==1003)   /* if user choose the 1003 bus number then it will display the price of the ticket based on the no of seats*/
	{
		return(450*num_of_seats);   /* it will return the price to the user based on the bus seats */
	}
	if (bus_num==1004)  /* if user choose the 1004 bus number then it will display the price of the ticket based on the no of seats*/
	{
		return(450*num_of_seats);  /* it will return the price to the user based on the bus seats */
	}
	if (bus_num==1005)  /* if user choose the 1005 bus number then it will display the price of the ticket based on the no of seats*/
	{
		return(400*num_of_seats);  /* it will return the price to the user based on the bus seats */
	}
	if (bus_num==1006)  /* if user choose the 1006 bus number then it will display the price of the ticket based on the no of seats*/
	{ 
		return(400*num_of_seats);  /* it will return the price to the user based on the bus seats */
	}
	if (bus_num==1007)  /* if user choose the 1007 bus number then it will display the price of the ticket based on the no of seats*/
	{
		return(350*num_of_seats);    /* it will return the price to the user based on the bus seats */
	}
	if (bus_num==1008)  /* if user choose the 1008 bus number then it will display the price of the ticket based on the no of seats*/
	{
		return(350*num_of_seats);     /* it will return the price to the user based on the bus seats */
	}
	if (bus_num==1009)   /* if user choose the 1009 bus number then it will display the price of the ticket based on the no of seats*/
	{
		return(600*num_of_seats);   /* it will return the price to the user based on the bus seats */
	}
	if (bus_num==1010)  /* if user choose the 1010 bus number then it will display the price of the ticket based on the no of seats*/
	{
		return(600*num_of_seats);    /* it will return the price to the user based on the bus seats */
	}
	}
}
