#include <stdio.h>
#include "header.h"

void deposit(void)
{
    unsigned int acc_num;
    float amount;
    printf("---ENTER THE ACCOUNT NUMBER -: ");
    scanf("%u", &acc_num);

    Account *acc = find_account_by_number(acc_num);
    if (!acc)
    {
        printf("---ACCOUNT NOT FOUND....!----\n");
        return;
    }

    printf("ENTER THE AMOUNT FOR DEPOSIT-: ");
    scanf("%f", &amount);

    acc->balance += amount;
    if (acc->transaction_count < MAX_TRANSACTIONS)
    {
        Transaction *t = &acc->transactions[acc->transaction_count++];
        t->type = DEPOSIT;
        t->id = generate_transaction_id();
        t->amount = amount;
    }
    printf("--------AMOUNT DEPOSITED SUCCESSFULLY------!\n");
}
