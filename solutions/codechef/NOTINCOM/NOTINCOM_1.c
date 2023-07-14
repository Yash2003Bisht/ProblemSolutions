// DATE: 07/07/2023, 08:24:43
// PROBLEM NAME: Nothing in Common
// PROBLEM URL: https://www.codechef.com/problems/NOTINCOM
// PROBLEM DIFFICULTY RATTING: 1386
// STATUS: accepted
// TIME: 0.13
// MEMORY: 5.6M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, a, b, ab, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        int counter[1000001];
        memset(counter, 0, sizeof(counter));

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

