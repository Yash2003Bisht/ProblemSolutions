// DATE: 24/11/2023, 07:48:39
// PROBLEM NAME: Worth of a Video
// PROBLEM URL: https://www.codechef.com/problems/VIDEOWORTH
// PROBLEM DIFFICULTY RATTING: 382
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, s;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &s);
        printf("%d\n", s*24*1000);
    }

	return 0;
}



