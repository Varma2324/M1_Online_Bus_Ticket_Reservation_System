/**@file RESERVATION.h
@author Varma M ()
 *@brief It contains functions to reserve a ticket.
 *
 * The RESERVATION.h file contains the function to reserve a bus ticket through online and check the availability of bus seats in the file. It contains different types of
 * @bug No known bugs.
 */



#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

/* Here we define the data structure Struct for considering */
/* few parameters for the reserving a ticket with the help of name,bus number and availability of seats*/

typedef struct{
  
	char name[50];     /*@param name is character array to store name of the student.*/
	int bus_num;       /*@param bus_num is for select a bus from the availability of buses.*/
	int num_of_seats;  /*@param num_of_seats is for selecting for of seats after selecting the specific bus.*/
  
}pd;

/* function to reserve a ticket */

void reservation(void)
{
  
	char confirm;       /*@param confirm is used for taking confirmation from user.*/
	int i=0;            /*@param i is used for selecting the no of seats(if empty).*/
	float charges;      /*@param charge is used to give the ticket price details and payment details.*/
	pd passdetails;     /*@param passdeatils is used for to send a ticket confirmation details to user.*/
	FILE *fp;           /*Here we declared the variable for the file.*/
	fp=fopen("seats_reserved.txt","a");
	system("cls");

	printf("\nEnter Your Name:> ");     /*@param It will take user name as input.*/

	fflush(stdin);
	gets(passdetails.name);
	printf("\nEnter Number of seats:> ");   /*@param it will take the seats as input(user needed seats)*/
	scanf("%d",&passdetails.num_of_seats);
	printf("\n\n>>Press Enter To View Available Bus<< ");
	//getch();
	system("cls");
	viewdetails();   /*@param it will goes to viwedeatils function and print the ticket details*/
	printf("\n\nEnter bus number:> ");   /*@param it will take the bus number as input*/
	start1:
	scanf("%d",&passdetails.bus_num);
	if(passdetails.bus_num>=1001 && passdetails.bus_num<=1010)
	{
		charges=charge(passdetails.bus_num,passdetails.num_of_seats);
		printticket(passdetails.name,passdetails.num_of_seats,passdetails.bus_num,charges); /*@param it will display user name,number of seats,bus num and name and charges.*/
	}
	else
	{
		printf("\nInvalid bus Number! Enter again--> ");   /*@param it will display invalid bus number when user type invalid bus number*/
		goto start1;
	}

	printf("\n\nConfirm Ticket (y/n):>");   /*@param when user perform all operations correctly then it will give confirmation ticket*/
	start:
	scanf(" %c",&confirm);  
	if(confirm == 'y')    /*@param it will ask the confirmation to user, if user press yes then it will the message reservation is done*/
	{
		fprintf(fp,"%s\t\t%d\t\t%d\t\t%.2f\n",&passdetails.name,passdetails.num_of_seats,passdetails.bus_num,charges);
		printf("==================");
		printf("\n Reservation Done\n");
		printf("==================");
		printf("\nPress any key to go back to Main menu");
	}
	else
	{
		if(confirm=='n'){   /*@param if user click no optiom then it display reservation is not done and it will go main menu*/
			printf("\nReservation Not Done!\nPress any key to go back to  Main menu!");
		}
		else
		{
			printf("\nInvalid choice entered! Enter again-----> "); /*@param if user enter invalid option then it will display invalid choice and it will ask enter choice again*/
			goto start;
		}
	}
	fclose(fp); /*@param here we close the file with the help of fclose function*/
	//getch();
}
