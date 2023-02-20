// DATE: 02/01/2023, 07:19:45
// PROBLEM NAME: New Piece
// PROBLEM URL: https://www.codechef.com/problems/NEWPIECE
// PROBLEM DIFFICULTY RATTING: 1216
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, a, b, p, q;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d%d", &a, &b, &p, &q);
        if (a == p && b == q) printf("0\n");
        else if ((a+b)%2 == (p+q)%2) printf("2\n");
        else printf("1\n");
    }

	return 0;
}


