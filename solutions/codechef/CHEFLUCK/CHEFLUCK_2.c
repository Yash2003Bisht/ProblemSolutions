// DATE: 06/04/2023, 07:56:57
// PROBLEM NAME: Lucky lucky number
// PROBLEM URL: https://www.codechef.com/problems/CHEFLUCK
// PROBLEM DIFFICULTY RATTING: 1302
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    long long int n, count, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld", &n);
        count = -1, temp = 0;

        while (temp <= n){
           if ((n-temp)%7 == 0){
               count = n-temp;
               break;
           }
           
           temp += 4;

        }
        
        printf("%lld\n", count);

    }
    
	return 0;
}



