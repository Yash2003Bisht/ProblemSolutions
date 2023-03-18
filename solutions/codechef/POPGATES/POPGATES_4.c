// DATE: 18/03/2023, 08:32:26
// PROBLEM NAME: At the Gates
// PROBLEM URL: https://www.codechef.com/problems/POPGATES
// PROBLEM DIFFICULTY RATTING: 1275
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t, n, k, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        char s[n+1];
        count = 0;

        for (int i=0; i<n; i++)
            scanf("\n%c ", &s[i]);
            
        for (int i=n-1; i>=n-k; i--){
            if (s[i] == 'H'){
                for (int j=0; s[j] != '\0'; j++){
                    if (s[j] == 'H')
                        s[j] = 'T';
                    else
                        s[j] = 'H';
                }
                
            }
            s[i] = '\0';
        }
        
        for (int i=0; s[i] != '\0'; i++){
            if (s[i] == 'H')
                count++;
        }
        
        printf("%d\n", count);


    }
    
	return 0;
}



