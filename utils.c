#include<stdio.h>
#include"header.h"
Account *find_account_by_number(unsigned int acc_num)
{
        Account *curr=head;
        while(curr!=NULL)
        {
                if(curr->account_number==acc_num)
                        return curr;
                curr=curr->next;
        }
        return NULL;
}
unsigned int generate_transaction_id()
{
        static unsigned int id=1000;
        return id++;
}
