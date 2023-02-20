// DATE: 29/10/2022, 05:12:01
// PROBLEM NAME: Max minus Min
// PROBLEM URL: https://www.codechef.com/problems/MAXDIFFMIN
// PROBLEM DIFFICULTY RATTING: 339
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,a,b,c;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &a);
        scanf("%d", &b);
        scanf("%d", &c);
        
        int max, min;
        
        if (a > b && a > c)
            max = a;
        else if (b > a && b > c)
            max = b;
        else
            max = c;
        
        if (a < b && a < c)
            min = a;
        else if (b < a && b < c)
            min = b;
        else
            min = c;
            
        printf("%d\n", max-min);
    }
	return 0;
}



