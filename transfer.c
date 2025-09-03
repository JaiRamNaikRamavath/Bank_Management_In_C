#include <stdio.h>
#include "header.h"

void transfer(void)
{
    unsigned int from_acc_num, to_acc_num;
    float amount;

    printf("ENTER THE SENDERS ACCOUNT NO-: ");
    scanf("%u", &from_acc_num);
    Account *from_acc = find_account_by_number(from_acc_num);
    if (!from_acc)
    {
        printf("NO MATCHED SENDER ACCOUNT NUMBER !\n");
        return;
    }

    printf("---ENTER RECEIVERS ACCOUNT NUMBER-: ");
    scanf("%u", &to_acc_num);
    Account *to_acc = find_account_by_number(to_acc_num);
    if (!to_acc)
    {
        printf("--RECEIVER ACCOUNT IS NOT FOUND..!\n");
        return;
    }

    if (from_acc_num == to_acc_num)
    {
        printf("Cannot transfer to the same account!\n");
        return;
    }

    printf("ENTER THE TRANSFERRING AMOUNT: ");
    scanf("%f", &amount);

    if (from_acc->balance < amount)
    {
        printf("INSUFFICIENT BALANCE !....\n");
        return;
    }

    // deduct from sender
    from_acc->balance -= amount;
    if (from_acc->transaction_count < MAX_TRANSACTIONS)
    {
        Transaction *t = &from_acc->transactions[from_acc->transaction_count++];
        t->type = WITHDRAW;
        t->id = generate_transaction_id();
        t->amount = amount;
    }

    // add to receiver
    to_acc->balance += amount;
    if (to_acc->transaction_count < MAX_TRANSACTIONS)
    {
        Transaction *t = &to_acc->transactions[to_acc->transaction_count++];
        t->type = DEPOSIT;
        t->id = generate_transaction_id();
        t->amount = amount;
    }

    printf("---AMOUNT TRANSFERRED SUCCESSFULLY....!\n");
}
