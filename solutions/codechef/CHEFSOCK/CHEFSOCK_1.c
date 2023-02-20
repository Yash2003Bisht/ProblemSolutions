// DATE: 07/12/2022, 07:43:51
// PROBLEM NAME: Chef and Socks
// PROBLEM URL: https://www.codechef.com/problems/CHEFSOCK
// PROBLEM DIFFICULTY RATTING: 1122
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int jacket_cost, sock_cost, money, total_sock;
    scanf("%d%d%d", &jacket_cost, &sock_cost, &money);

    money -= jacket_cost;
    total_sock = money / sock_cost;

    if (total_sock % 2 == 0) printf("Lucky Chef");
    else printf("Unlucky Chef");
    
	return 0;
}



