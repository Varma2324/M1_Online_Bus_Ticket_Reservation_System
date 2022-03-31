/**@file VIEWDETAILS.h
 *@brief The viewdetails function is used to display the availability of buses and also availability of seats to the users 
 *With the help of viewdetails functions we can know bus number and name and also we can know time,charges and starting point of bus and end point of destination
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


void viewdetails(void)
{
	system("cls");
	printf("---------------------------------------------------------------------------------------");
	printf("\nBus.No\tName\t\t\tDestinations  \t\tCharges  \t\tTime\n");
	printf("---------------------------------------------------------------------------------------");
	printf("\n1001\tGodavari Travels     \tDharan to Kavre       \tRs.500    \t\t9:00  AM");
	printf("\n1002\tDevit Travels        \tKavre To Dharan       \tRs.500  \t\t12:00 PM");
	printf("\n1003\tHero Travels         \tBenighat To Pokhara   \tRs.450   \t\t1:50  PM");
	printf("\n1004\tSuper Deluxe         \tPokhara To Benigha    \tRs.450   \t\t11:00 AM");
	printf("\n1005\tSai Baba Travels     \tMaitidevi To Janakpur \tRs.400  \t\t7:05  AM");
	printf("\n1006\tShine On Travels     \tJanakpur To Maitidevi \tRs.400   \t\t9:30  AM");
    printf("\n1007\tMayur Travels        \tJumla To Humla        \tRs.350   \t\t1:00  PM");
    printf("\n1008\tShree Travels        \tHumla To Jumla        \tRs.350   \t\t4:00  PM");
    printf("\n1009\tKathmandu Express    \tKathmandu To Pokhara  \tRs.600  \t\t5:35  PM");
    printf("\n1010\tSajha Yatayat        \tPokhara To Kathmandu  \tRs.600   \t\t4:15  PM");

}
