// DATE: 22/06/2023, 08:07:51
// PROBLEM NAME: Mahasena
// PROBLEM URL: https://www.codechef.com/problems/AMR15A
// PROBLEM DIFFICULTY RATTING: 533
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int n, num, even = 0, odd = 0;
    scanf("%d", &n);
    
    while(n--){
        scanf("%d", &num);
        if (num%2 == 0)
            even++;
        else
            odd++;
    }
    
    if (even>odd)
        printf("READY FOR BATTLE");
    else
        printf("NOT READY");
    
	return 0;
}



