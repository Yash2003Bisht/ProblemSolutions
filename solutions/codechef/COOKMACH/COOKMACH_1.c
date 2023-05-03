// DATE: 03/05/2023, 07:45:58
// PROBLEM NAME: Cooking Machine
// PROBLEM URL: https://www.codechef.com/problems/COOKMACH
// PROBLEM DIFFICULTY RATTING: 1329
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, initial_a, b, flag, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        count = 0, flag = 0, initial_a = a;

        while(a != b){
            if (b%a == 0)
                a *= 2;
            else
                a = a%2 == 0 ? a/2 : (a-1)/2;
            count++;
        }

        printf("%d\n", count);

    }
    
	return 0;
}



