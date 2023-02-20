// DATE: 16/01/2023, 08:27:05
// PROBLEM NAME: To Divide or Not To Divide
// PROBLEM URL: https://www.codechef.com/problems/DIVAB
// PROBLEM DIFFICULTY RATTING: 1224
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t, a, b, n, num;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &a, &b, &n);
        if (a%b == 0) printf("-1\n");
        else{
            num = a*ceil(n/a);
            if (num%b != 0) printf("%d\n", num);
            else printf("%d\n", num+a);
        }
        
    }

	return 0;
}



