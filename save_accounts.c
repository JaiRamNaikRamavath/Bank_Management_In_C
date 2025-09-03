#include <stdio.h>
#include "header.h"

extern Account *head;

void save_accounts(void)
{
    FILE *fp = fopen(DATA_FILE, "wb");
    if (!fp)
    {
        printf("Failed to open file for saving!\n");
        return;
    }
    Account *curr = head;
    while (curr)
    {
        fwrite(curr, sizeof(Account), 1, fp);
        curr = curr->next;
    }
    fclose(fp);
    printf("------SUCCESSFULLY ACCOUNT SAVED!------\n");
}
