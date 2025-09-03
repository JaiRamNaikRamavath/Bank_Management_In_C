#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define MAX_NAME_LEN 50
#define MAX_TRANSACTIONS 100
#define DATA_FILE "accounts.dat"

typedef enum {
    DEPOSIT, WITHDRAW
} TransactionType;

typedef struct Transaction {
    TransactionType type;
    unsigned int id;
    float amount;
} Transaction;

typedef struct Account {
    unsigned int account_number;
    char account_name[MAX_NAME_LEN];
    float balance;
    char contact[15];
    Transaction transactions[MAX_TRANSACTIONS];
    int transaction_count;
    struct Account *next;
} Account;

extern Account *head;

void create_account(void);
void deposit(void);
void withdraw(void);
void transfer(void);
void transaction_history(void);
void show_balance(void);
void save_accounts(void);
void load_accounts(void);
void show_all_accounts(void);
void find_account(void);
void display_menu(void);

Account* find_account_by_number(unsigned int acc_num);
unsigned int generate_transaction_id(void);

#endif
