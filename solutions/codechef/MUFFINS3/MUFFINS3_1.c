// DATE: 07/10/2022, 06:40:50
// PROBLEM NAME: Packaging Cupcakes
// PROBLEM URL: https://www.codechef.com/problems/MUFFINS3
// PROBLEM DIFFICULTY RATTING: 1023
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t,a;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &a);
        printf("%d\n", (a/2)+1);
    }
	return 0;
}



