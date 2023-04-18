// DATE: 18/04/2023, 07:19:56
// PROBLEM NAME: Funny Hand
// PROBLEM URL: https://www.codechef.com/problems/FUNHAND
// PROBLEM DIFFICULTY RATTING: 1306
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, n, a, b, ans;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &n, &a, &b);
        
        if (abs(a-b) > 2 || (a-b) == 0)
            printf("0\n");
        else{
            if (a == 1 || b == 1 || a == n || b == n || abs(a-b) == 2)
                printf("1\n");
            else
                printf("2\n");
        }
    }
    
	return 0;
}


