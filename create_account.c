#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include "header.h"

Account *head = NULL;

void create_account(void)
{
    Account *new_account = (Account*)malloc(sizeof(Account));
    if (!new_account)
    {
        printf("Memory allocation failed!\n");
        return;
    }

    srand(time(NULL) ^ getpid());
    new_account->account_number = rand() % 900000 + 100000;

    if (find_account_by_number(new_account->account_number))
    {
        printf("Account number already exists!\n");
        free(new_account);
        return;
    }

    printf("Enter account name: ");
    scanf("%49s", new_account->account_name);
    printf("Enter contact number: ");
    scanf("%14s", new_account->contact);
    new_account->balance = 0.0;
    new_account->transaction_count = 0;
    new_account->next = head;
    head = new_account;

    printf("Generated account number: %u\n", new_account->account_number);
    printf("-------SUCCESSFULLY ACCOUNT CREATED!--------\n");
}
