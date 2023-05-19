// DATE: 19/05/2023, 10:15:38
// PROBLEM NAME: Favourite Numbers
// PROBLEM URL: https://www.codechef.com/problems/FAVOURITENUM
// PROBLEM DIFFICULTY RATTING: 477
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, a;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &a);

        if (a%2 == 0 && a%7 == 0)
            printf("Alice\n");
        else if (a%2 != 0 && a%9 == 0)
            printf("Bob\n");
        else
            printf("Charlie\n");

    }
    
	return 0;
}



