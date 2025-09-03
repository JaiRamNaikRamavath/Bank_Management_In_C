#include <stdio.h>
#include "header.h"

extern Account *head;

void show_all_accounts(void)
{
    Account *curr = head;
    while (curr)
    {
        printf("ACCOUNT NUMBER: %u\n", curr->account_number);
        printf("NAME          : %s\n", curr->account_name);
        printf("BALANCE       : %.2f\n", curr->balance);
        printf("CONTACT       : %s\n", curr->contact);
        printf("-------------------------------\n");
        curr = curr->next;
    }
}
