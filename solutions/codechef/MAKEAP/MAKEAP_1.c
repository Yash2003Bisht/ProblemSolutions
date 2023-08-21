// DATE: 21/08/2023, 08:53:47
// PROBLEM NAME: Make AP
// PROBLEM URL: https://www.codechef.com/problems/MAKEAP
// PROBLEM DIFFICULTY RATTING: 577
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, a, c, num;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &a, &c);
        num = a+c;
        
        if (num%2 == 0)
            printf("%d\n", num/2);
        else
            printf("-1\n");
        
    }
    
	return 0;
}



