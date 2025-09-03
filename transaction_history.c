#include <stdio.h>
#include "header.h"

void transaction_history(void)
{
    unsigned int acc_num;
    printf("ENTER THE ACC NO: ");
    scanf("%u", &acc_num);

    Account *acc = find_account_by_number(acc_num);
    if (!acc)
    {
        printf("ACCOUNT IS NOT FOUND...!\n");
        return;
    }

    int count = acc->transaction_count < 5 ? acc->transaction_count : 5;
    printf("LAST %d TRANSACTIONS:\n", count);
    for (int i = acc->transaction_count - 1, printed = 0; i >= 0 && printed < 5; i--, printed++)
    {
        printf("ID: %u | TYPE: %s | AMOUNT: %.2f\n",
               acc->transactions[i].id,
               acc->transactions[i].type == DEPOSIT ? "DEPOSIT" : "WITHDRAW",
               acc->transactions[i].amount);
    }
}
