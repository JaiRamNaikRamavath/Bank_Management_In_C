#include <stdio.h>
#include "header.h"

int main()
{
    load_accounts();

    char choice;
    do
    {
        display_menu();
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice)
        {
            case 'c':
            case 'C':
                create_account();
                break;
            case 'd':
            case 'D':
                deposit();
                break;
            case 'w':
            case 'W':
                withdraw();
                break;
            case 't':
            case 'T':
                transfer();
                break;
            case 'b':
            case 'B':
                show_balance();
                break;
            case 'e':
            case 'E':
                show_all_accounts();
                break;
            case 'f':
            case 'F':
                find_account();
                break;
            case 'h':
            case 'H':
                transaction_history();
                break;
            case 's':
            case 'S':
                save_accounts();
                break;
            case 'q':
            case 'Q':
                save_accounts();
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 'q' && choice != 'Q');

    return 0;
}
