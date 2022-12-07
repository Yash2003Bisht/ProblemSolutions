// QUESTION URL: https://www.codechef.com/problems/CHEFSOCK
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



