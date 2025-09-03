#include <stdio.h>
#include "header.h"

void display_menu(void)
{
    printf("\n~-~-~-~-~-~-~-~-WELCOME TO $ BANK~-~-~-~-~-~-~-~-~-\n");
    printf("\n------------------MENU-----------------------------\n");
    printf("c/C: Create account\n");
    printf("d/D: Deposit amount\n");
    printf("b/B: Balance enquiry\n");
    printf("w/W: Withdraw amount\n");
    printf("e/E: Display all accounts details\n");
    printf("t/T: Transfer money\n");
    printf("s/S: Save the accounts info in file\n");
    printf("f/F: Find specific account\n");
    printf("h/H: Transaction history\n");
    printf("q/Q: Quit from app\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
}
