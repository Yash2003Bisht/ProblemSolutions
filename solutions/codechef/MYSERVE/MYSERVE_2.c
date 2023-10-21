// DATE: 20/10/2023, 08:52:06
// PROBLEM NAME: It is My Serve
// PROBLEM URL: https://www.codechef.com/problems/MYSERVE
// PROBLEM DIFFICULTY RATTING: 691
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, p, q, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &p, &q);
        total = p+q;

        if ((total/2)%2 == 0)
            printf("Alice\n");
        else
            printf("Bob\n");

    }
    
	return 0;
}



