// DATE: 07/12/2022, 06:43:35
// PROBLEM NAME: Chef and Socks
// PROBLEM URL: https://www.codechef.com/problems/CHEFSOCK
// PROBLEM DIFFICULTY RATTING: 1122
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int jacket_cost, sock_cost, money;
    scanf("%d%d%d", &jacket_cost, &sock_cost, &money);
    
    // money left after purchasing jacket
    money -= jacket_cost;
    
    if (money > sock_cost*2) printf("Lucky Chef");
    else printf("Unlucky Chef");
    
	return 0;
}



