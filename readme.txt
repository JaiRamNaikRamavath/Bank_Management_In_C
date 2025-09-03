==============================
  SIMPLE BANKING SYSTEM
==============================

Description:
------------------------
This is a simple console-based banking management system in C that allows you to:

- Create new bank accounts
- Deposit money
- Withdraw money
- Transfer money between accounts
- Display balance of an account
- Show transaction history (last 5 transactions)
- Display all accounts information
- Save accounts to a file
- Load accounts from a file
- Find a specific account by account number

----------------------------------------------------------------

File Structure:
---------------
- header.h               : Header file containing struct definitions and function prototypes
- create_account.c       : Code to create new accounts
- deposit.c              : Deposit money into an account
- withdraw.c             : Withdraw money from an account
- transfer.c             : Transfer money between accounts
- show_balance.c         : Display balance of an account
- transaction_history.c  : Show last 5 transactions of an account
- save_accounts.c        : Save account data to file
- load_accounts.c        : Load account data from file
- show_all_accounts.c    : Display all accounts info
- find_account.c         : Search for account by account number
- display_menu.c         : Show menu options
- utils.c                : Helper functions (e.g : find account by number)
- main.c                 : Main driver program (your entry point)

------------------------------------------------------------------

How to Compile:
---------------
1. Open a terminal/command prompt.
2. Navigate to the folder containing all source files.
3. Compile all `.c` files using `gcc`:

   gcc -o bank_app main.c create_account.c deposit.c withdraw.c transfer.c show_balance.c transaction_history.c save_accounts.c load_accounts.c show_all_accounts.c find_account.c display_menu.c utils.c

   (You can also use `make` if you have a Makefile.)

-----------------------------------------------------------------

How to Run:
-----------
- After compilation, run the executable:

  use like this also give command: make -> aftrer ./a.out

- Follow the on-screen menu to perform banking operations.

----------------------------------------------------------------

Usage Notes:
------------
- When creating an account, a random 6-digit account number is generated.
- Ensure you save your data (option 's' or 'S') before quitting, to avoid losing changes.
- On program start, if the data file exists, accounts are loaded automatically.
- Maximum 100 transactions per account are stored for history.
- Input is case-insensitive for menu options.
- The system uses simple text-based input/output in the terminal.

----------------------------------------------------------------

Requirements:
-------------
- GCC compiler or any C compiler supporting C99 or later.
- Basic terminal or command prompt to run the program.
- No external libraries required.

---------------------------------------------------------------

Contact:
--------
For any issues or questions, contact: rpjairamnaik7@gmail.com, 8185012634.

------------------------------------------

Thank you for using the Simple Banking System!!!!!!!!!!!!!!!!!!!!!!
