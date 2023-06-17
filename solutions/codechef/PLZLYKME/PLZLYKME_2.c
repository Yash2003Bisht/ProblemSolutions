// DATE: 16/06/2023, 08:22:34
// PROBLEM NAME: Please like me
// PROBLEM URL: https://www.codechef.com/problems/PLZLYKME
// PROBLEM DIFFICULTY RATTING: 1371
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

long long int total_likes(long long int likes, long long int days, long long int factor, long long int target){
    long long int total = likes, i;
    for (i=0; i < days - 1; i++){
        total = total + factor * total;
        if (total >= target)
            break;
    }
    return total;
}

int main(void) {
    int t;
    long long int l, d, s, c, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld%lld%lld", &l, &d, &s, &c);
        total = total_likes(s, d, c, l);
        
        if (total >= l)
            printf("ALIVE AND KICKING\n");
        else
            printf("DEAD AND ROTTING\n");

    }
    
	return 0;
}



