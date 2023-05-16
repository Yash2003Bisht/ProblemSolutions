// DATE: 16/05/2023, 09:31:49
// PROBLEM NAME: Practice makes us perfect
// PROBLEM URL: https://www.codechef.com/problems/PRACTICEPERF
// PROBLEM DIFFICULTY RATTING: 467
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int p1, p2, p3, p4, count = 0;
    scanf("%d%d%d%d", &p1, &p2, &p3, &p4);
    
    if (p1 >= 10)
        count++;
    if (p2 >= 10)
        count++;
    if (p3 >= 10)
        count++;
    if (p4 >= 10)
        count++;
        
    printf("%d\n", count);
    
	return 0;
}



