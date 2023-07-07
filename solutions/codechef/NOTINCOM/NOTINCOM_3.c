// DATE: 07/07/2023, 08:23:14
// PROBLEM NAME: Nothing in Common
// PROBLEM URL: https://www.codechef.com/problems/NOTINCOM
// PROBLEM DIFFICULTY RATTING: 1386
// STATUS: accepted
// TIME: 0.13
// MEMORY: 5.7M

#include <stdio.h>

int main(void) {
    int t, a, b, ab, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        int counter[1000001] = {0};
        count = 0;

        for (int i=0; i<a; i++){
            scanf("%d", &ab);
            counter[ab] = 1;
        }
        
        for (int i=0; i<b; i++){
            scanf("%d", &ab);
            
            if (counter[ab] == 1)
                count++;
            
        }

        printf("%d\n", count);

    }

    
    
	return 0;
}



