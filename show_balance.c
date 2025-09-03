#include <stdio.h>
#include "header.h"

void show_balance(void)
{
    unsigned int acc_num;
    printf("ENTER THE ACCOUNT NUMBER: ");
    scanf("%u", &acc_num);

    Account *acc = find_account_by_number(acc_num);
    if (!acc)
    {
        printf("ACCOUNT IS NOT FOUND..!\n");
        return;
    }

    printf("ACCOUNT BALANCE: %.2f\n", acc->balance);
}
