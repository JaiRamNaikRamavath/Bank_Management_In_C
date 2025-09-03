#include <stdio.h>
#include <stdlib.h>
#include "header.h"

extern Account *head;

void load_accounts(void)
{
    FILE *fp = fopen(DATA_FILE, "rb");
    if (!fp) return;

    Account temp;
    while (fread(&temp, sizeof(Account), 1, fp))
    {
        Account *new_account = (Account*)malloc(sizeof(Account));
        if (!new_account)
        {
            printf("Memory allocation failed while loading accounts!\n");
            fclose(fp);
            return;
        }
        *new_account = temp;
        new_account->next = head;
        head = new_account;
    }
    fclose(fp);
}
