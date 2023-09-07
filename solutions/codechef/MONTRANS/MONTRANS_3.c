// DATE: 07/09/2023, 08:47:59
// PROBLEM NAME: Money Transformation
// PROBLEM URL: https://www.codechef.com/problems/MONTRANS
// PROBLEM DIFFICULTY RATTING: 1449
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, a, b, c, count, max_profit, total_cents, transformation;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &a, &b, &c);
        count = 0, max_profit = a * 100 + b, transformation = 0;

        while (count < 10000){
            total_cents = a * 100 + b;

            if (total_cents < c)
                break;

            else if (total_cents > max_profit)
                max_profit = total_cents, transformation = count;

            total_cents -= c;
            a = total_cents % 100;
            b = total_cents / 100;
            count++;

        }
        
        printf("%d\n", transformation);
        
    }
    
	return 0;
}



