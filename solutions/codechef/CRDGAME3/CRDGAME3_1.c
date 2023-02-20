// DATE: 19/01/2023, 08:04:23
// PROBLEM NAME: Another Card Game Problem
// PROBLEM URL: https://www.codechef.com/problems/CRDGAME3
// PROBLEM DIFFICULTY RATTING: 1230
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, pc, pr, pc_digit, pr_digit;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &pc, &pr);
        pc_digit = pc / 9;
        pr_digit = pr / 9;
        
        if (pc_digit >= pr_digit)
            printf("1 %d\n", pr % 9 == 0 ? pr_digit : pr_digit+1);
        else if (pc_digit < pr_digit)
            printf("0 %d\n", pc % 9 == 0 ? pc_digit : pc_digit+1);
    }
    
	return 0;
}



