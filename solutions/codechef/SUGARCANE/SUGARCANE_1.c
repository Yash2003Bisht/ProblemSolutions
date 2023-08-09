// DATE: 09/08/2023, 08:12:11
// PROBLEM NAME: Sugarcane Juice Business
// PROBLEM URL: https://www.codechef.com/problems/SUGARCANE
// PROBLEM DIFFICULTY RATTING: 563
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n, coins;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        coins = n*50;
        coins -= coins*0.7;
        printf("%d\n", coins);
    }
    
	return 0;
}



