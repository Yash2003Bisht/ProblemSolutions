// DATE: 27/03/2023, 07:21:56
// PROBLEM NAME: False Number
// PROBLEM URL: https://www.codechef.com/problems/FALSNUM
// PROBLEM DIFFICULTY RATTING: 1286
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t;
    char a[5001];
    scanf("%d", &t);
    
    while(t--){
        scanf("%s", a);
        
        if (a[0] != '1')
            printf("1%s\n", a);
        else
            printf("%c%c%s\n", a[0], '0', a + 1);

    }
    
	return 0;
}



