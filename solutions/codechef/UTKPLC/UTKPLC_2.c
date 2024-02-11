// DATE: 11/02/2024, 02:26:34
// PROBLEM NAME: Utkarsh and Placement tests
// PROBLEM URL: https://www.codechef.com/problems/UTKPLC
// PROBLEM DIFFICULTY RATTING: 886
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t;
	char a, b, c, x, y;
	scanf("%d\n", &t);
	
	while(t--){
	    scanf(" %c %c %c\n %c %c", &a, &b, &c, &x, &y);

        if (x == a || y == a)
            printf("%c\n", a);
        else
            printf("%c\n", b);

	}
	
}



