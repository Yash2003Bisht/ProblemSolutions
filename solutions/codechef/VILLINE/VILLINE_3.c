// DATE: 09/03/2023, 07:41:27
// PROBLEM NAME: Recruit Villagers
// PROBLEM URL: https://www.codechef.com/problems/VILLINE
// PROBLEM DIFFICULTY RATTING: 1270
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>
#include <limits.h>
#define max(a, b)(a>b ? a : b)

int main(void) {
    int n, m, c, x, y, p, village_1 = 0, village_2 = 0, location, max_power;
    scanf("%d", &n);
    scanf("%d%d", &m, &c);
    
    while (n--){
        scanf("%d%d%d", &x, &y, &p);
        location = m*x + c;
        if (location < y)
            village_1 += p;
        else
            village_2 += p;
    }
    
    max_power = max(village_1, village_2);
    printf("%d", max_power);
    
	return 0;
}


