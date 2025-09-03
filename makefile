a.out:create_account.o find_account.o main.o show_balance.o withdraw.o deposit.o save_accounts.o transaction_history.o display_menu.o load_accounts.o show_all_accounts.o transfer.o utils.o 
	cc create_account.o find_account.o main.o show_balance.o withdraw.o deposit.o save_accounts.o transaction_history.o display_menu.o load_accounts.o show_all_accounts.o transfer.o utils.o
ceate_account.o:create_account.c
	cc -c create_account.c
find_account.o:find_account.c
	 cc -c find_account.c
main.o:main.c
	cc -c main.c
show_balance.o:show_balance.c
	cc -c show_balance.c
withdraw.o:withdraw.c
	cc -c withdraw.c
deposit.0:deposit.c
	cc -c deposit.c
save_accounts.o:save_accounts.c
	cc -c save_accounts.c
transaction_history.o:transaction_history.c
	cc -c transaction_history.c
display_menu.o:display_menu.c
	cc -c display_menu.c
load_accounts.o:load_accounts.c
	cc -c load_accounts.c
show_all_accounts.o:show_all_accounts.c
	cc -c show_all_accounts.c
transfer.o:transfer.c
	cc -c transfer.c
utils.o:utils.c
	cc -c utils.c
