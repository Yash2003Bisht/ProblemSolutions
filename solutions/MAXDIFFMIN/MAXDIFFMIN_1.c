// QUESTION URL: https://www.codechef.com/problems/MAXDIFFMIN
// STATUS: accepted

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



