#include <stdio.h>
#include "header.h"

void find_account(void)
{
    unsigned int acc_num;
    printf("ENTER THE SEARCHING ACCOUNT NUMBER: ");
    scanf("%u", &acc_num);

    Account *acc = find_account_by_number(acc_num);
    if (acc)
    {
        printf("ACCOUNT FOUND\n");
        printf("NAME         : %s\n", acc->account_name);
        printf("BALANCE      : %.2f\n", acc->balance);
        printf("CONTACT      : %s\n", acc->contact);
    }
    else
    {
        printf("ACCOUNT IS NOT FOUND.\n");
    }
}
