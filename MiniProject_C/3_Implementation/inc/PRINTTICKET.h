/**@file PRINTTICKET.h
 *@brief The print ticket function will be used to display thr ticket details to the user
 *
 *the function will take different types parameters for displaying the ticket
 *after entering all the data then the ticket details will be displays to the user.
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


/* printticket function */
void printticket(char name[],int num_of_seats,int bus_num,float charges) /*@param it will takes the paramters of name,number of seats,bus number and charges*/
{
	system("cls");
	printf("-------------------\n");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	printf("Name:\t\t\t%s",name);                   /* it displays the name of the user */
	printf("\nNumber Of Seats:\t%d",num_of_seats);  /* it displays the number of seats */
	printf("\nbus Number:\t\t%d",bus_num);          /* it displays the bus number */
	specificbus(bus_num);
	printf("\nCharges:\t\t%.2f",charges);            /* it displays the ticket charge to the user */
  /* after performing the all the operations then the ticket details will be displayed to the user */
}

