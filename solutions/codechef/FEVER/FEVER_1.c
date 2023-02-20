// DATE: 10/09/2022, 06:20:37
// PROBLEM NAME: Fever
// PROBLEM URL: https://www.codechef.com/problems/FEVER
// PROBLEM DIFFICULTY RATTING: 348
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t,x;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        if(x>98){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
        
    }
	return 0;
}



