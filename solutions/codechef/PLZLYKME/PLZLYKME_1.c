// DATE: 16/06/2023, 08:28:43
// PROBLEM NAME: Please like me
// PROBLEM URL: https://www.codechef.com/problems/PLZLYKME
// PROBLEM DIFFICULTY RATTING: 1371
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

typedef long long int lld;

lld total_likes(lld likes, lld days, lld factor, lld target){
    lld total = likes, i;
    for (i=0; i < days - 1; i++){
        total = total + factor * total;
        if (total >= target)
            break;
    }
    return total;
}

int main(void) {
    int t;
    lld l, d, s, c, total;
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



