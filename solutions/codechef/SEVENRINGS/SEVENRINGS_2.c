// DATE: 15/06/2023, 08:58:11
// PROBLEM NAME: 7 Rings
// PROBLEM URL: https://www.codechef.com/problems/SEVENRINGS
// PROBLEM DIFFICULTY RATTING: 568
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int digitCount(int num){
    int count = 0;

    while(num){
        count++;
        num = num/10;
    }

    return count;
}

int main(void) {
    int t, n, x, digit;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &x);
        digit = digitCount(n*x);
        
        if (digit == 5)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



