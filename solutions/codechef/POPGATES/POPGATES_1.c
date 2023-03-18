// DATE: 18/03/2023, 09:03:11
// PROBLEM NAME: At the Gates
// PROBLEM URL: https://www.codechef.com/problems/POPGATES
// PROBLEM DIFFICULTY RATTING: 1275
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

#include <stdio.h>

int main(void) {
    int t, n, k, count, counter;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        char s[101] = {'\0'};
        count = 0, counter = 0;

        for (int i=0; i<n; i++)
            scanf(" %c ", &s[i]);
            
        for (int i=n-1; i>=n-k; i--){
            if (s[i] == 'H')
                count++;
        }
        
        if (count % 2 == 0){
            for (int i=0; i<n-k; i++){
                if (s[i] == 'H')
                    counter++;
            }
        } else {
            for (int i=0; i<n-k; i++){
                if (s[i] == 'T')
                    counter++;
            }
        }
        
        printf("%d\n", counter);


    }
    
	return 0;
}



