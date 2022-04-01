PROJECT_NAME = Online_Bus_Ticket_Reservation_System

BUILD = build
SRC =src/main.c
TEST_SRC = src/main.c\
test/testing.c\
unity/unity.c\

TEST_OUTPUT = $(BUILD)/Test_$(PROJECT_NAME).out


INC	= -Iinc\
-Iunity\

#Library Inlcudes
#INCLUDE_LIBS = 
INCLUDE_LIBS = -lcunit


PROJECT_OUTPUT = $(BUILD)/$(PROJECT_NAME).out

DOCUMENTATION_OUTPUT = documentation/html


$(PROJECT_NAME):all


.PHONY: run clean test doc all

all: $(SRC) $(BUILD)
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT).out


run:$(PROJECT_NAME)
	./$(PROJECT_OUTPUT).out


doc:
	make -C ./documentation


test:$(BUILD)
	gcc $(TEST_SRC) $(INC) -o $(TEST_OUTPUT) $(INCLUDE_LIBS)
	./$(TEST_OUTPUT)


clean:
	rm -rf $(BUILD) $(DOCUMENTATION_OUTPUT)


$(BUILD):
	mkdir build
