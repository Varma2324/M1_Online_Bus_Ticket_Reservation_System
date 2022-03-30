#include "unity.h"
#include "RESERVATION.h"
#include "VIEWDETAILS.h"
#include "SPECIFICBUS.h"
#include "CHARGE.h"
#include "DISPLAYSTICKET.h"

#define Online_Bus_Ticket_Reservation_System

void test_reservation(void);
void test_viewdetails(void);
void test_specificbus(void);
void test_charge(void);
void test_displaysticket(void);

void setUp(){}
void tearDown(){}

int main()
{
UNITY_BEGIN();
  
RUN_TEST(test_reservation);
RUN_TEST(test_viewdetails);
RUN_TEST(test_specificbus);
RUN_TEST(test_charge);  
RUN_TEST(test_displaysticket);

return UNITY_END();
}

void test_reservation(void){
TEST_ASSERT_EQUAL(1,reserveaticket());
}

void test_viewdetails(void){
TEST_ASSERT_EQUAL(1,busavailability());
}

void test_specificbus(void){
TEST_ASSERT_EQUAL(1,seatbooking());
}

void test_charge(void){
TEST_ASSERT_EQUAL(1,payment());
  
void test_displaysticket(void){
TEST_ASSERT_EQUAL(1,ticketbookingdetails());  
  
  
}
